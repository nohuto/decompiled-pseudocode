/*
 * XREFs of ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180111B54
 * Callers:
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180111718 (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x180111940 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$com_agile_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationViewChangeListener@@W4AgileReferenceOptions@@@Z @ 0x180190CD0 (--$com_agile_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA-AV-$com_ptr_t@UIAgileReferenc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(
        AgileApplicationViewChangeListenerConverter *this,
        struct IApplicationViewChangeListener *a2)
{
  struct IApplicationViewChangeListener *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  HRESULT ApartmentType; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-248h]
  APTTYPE pAptType[2]; // [rsp+30h] [rbp-238h] BYREF
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+38h] [rbp-230h] BYREF
  WCHAR Filename[264]; // [rsp+40h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  *(_QWORD *)pAptQualifier = a2;
  v4 = (struct IApplicationViewChangeListener *)*((_QWORD *)this + 13);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IApplicationViewChangeListener *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct IApplicationViewChangeListener *)*((_QWORD *)this + 13);
    }
    *((_QWORD *)this + 13) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct IApplicationViewChangeListener *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (__int64 *)wil::com_agile_query<IApplicationViewChangeListener * &>(pAptType, pAptQualifier);
  v6 = *v5;
  *v5 = 0LL;
  v7 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( *(_QWORD *)pAptType )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)pAptType + 16LL))(*(_QWORD *)pAptType);
  v8 = *((_DWORD *)this + 23);
  if ( v8 == 2 )
    goto LABEL_11;
  v11 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
  {
LABEL_25:
    if ( v11 != 1 )
    {
LABEL_26:
      ApartmentType = 0;
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    v12 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v12;
  }
  else
  {
    v12 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v12 != 1 )
    goto LABEL_26;
  if ( v8 == 1 )
  {
    v13 = IsAppCompatModeEnabled(16LL);
    v11 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( v13 )
      v11 = 2;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v11;
    goto LABEL_25;
  }
LABEL_11:
  *((_DWORD *)this + 22) = 0;
  ApartmentType = CoGetApartmentType(pAptType, pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_14;
  switch ( pAptType[0] )
  {
    case APTTYPE_STA:
      goto LABEL_13;
    case APTTYPE_MTA:
      *((_DWORD *)this + 22) = 0;
      break;
    case APTTYPE_NA:
      *((_DWORD *)this + 22) = -1;
      break;
    case APTTYPE_MAINSTA:
LABEL_13:
      *((_DWORD *)this + 22) = GetCurrentThreadId();
      break;
  }
LABEL_14:
  if ( ApartmentType < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)(unsigned int)ApartmentType,
      v14);
  return 0LL;
}
