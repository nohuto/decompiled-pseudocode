/*
 * XREFs of ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801258F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileApplicationViewChangeListenerConverter::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  HRESULT ApartmentType; // ebx
  DWORD CurrentThreadId; // eax
  unsigned int v12; // esi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+30h] [rbp-278h] BYREF
  APTTYPE pAptType; // [rsp+38h] [rbp-270h] BYREF
  __int64 v19; // [rsp+40h] [rbp-268h]
  HRESULT v20; // [rsp+48h] [rbp-260h]
  WCHAR Filename[264]; // [rsp+50h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+0h]

  if ( a1 )
    v8 = a1 + 48;
  else
    v8 = 0LL;
  v19 = v8;
  v9 = *(_DWORD *)(v8 + 44);
  if ( v9 == 2 )
    goto LABEL_4;
  v15 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
  {
LABEL_32:
    if ( v15 != 1 )
      goto LABEL_9;
    goto LABEL_4;
  }
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    v16 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v16;
  }
  else
  {
    v16 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v16 != 1 )
    goto LABEL_9;
  if ( v9 == 1 )
  {
    if ( (unsigned int)IsAppCompatModeEnabled(16LL) )
    {
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_9;
    }
    v15 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    goto LABEL_32;
  }
LABEL_4:
  if ( *(_DWORD *)(v8 + 40) != -3 )
  {
    ApartmentType = CoGetApartmentType(&pAptType, pAptQualifier);
    if ( ApartmentType < 0 )
      goto LABEL_20;
    switch ( pAptType )
    {
      case APTTYPE_STA:
LABEL_7:
        CurrentThreadId = GetCurrentThreadId();
        break;
      case APTTYPE_MTA:
        CurrentThreadId = 0;
        break;
      case APTTYPE_NA:
        CurrentThreadId = -1;
        break;
      case APTTYPE_MAINSTA:
        goto LABEL_7;
      default:
LABEL_20:
        CurrentThreadId = 0;
        if ( ApartmentType < 0 )
          goto LABEL_11;
        break;
    }
    if ( CurrentThreadId != *(_DWORD *)(v8 + 40) )
    {
      ApartmentType = -2147417842;
      goto LABEL_11;
    }
  }
LABEL_9:
  ApartmentType = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v8) )
    ApartmentType = 0;
LABEL_11:
  v20 = ApartmentType;
  if ( ApartmentType < 0 )
  {
    *(_QWORD *)pAptQualifier = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pAptQualifier);
    v14 = (*(__int64 (__fastcall **)(_QWORD, GUID *, APTTYPEQUALIFIER *))(**(_QWORD **)(a1 + 96) + 24LL))(
            *(_QWORD *)(a1 + 96),
            &GUID_727f9e97_76ee_497b_a942_b6371328485c,
            pAptQualifier);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x512,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)v14);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)v12);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)pAptQualifier + 24LL))(
              *(_QWORD *)pAptQualifier,
              a2,
              a3,
              a4);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)pAptQualifier);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 104) + 24LL))(
            *(_QWORD *)(a1 + 104),
            a2,
            a3,
            a4);
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v8);
  return v12;
}
