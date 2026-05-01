/*
 * XREFs of ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180128930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  DWORD CurrentThreadId; // esi
  HRESULT ApartmentType; // ebx
  unsigned int v12; // esi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int cchValue; // [rsp+20h] [rbp-298h]
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+30h] [rbp-288h] BYREF
  APTTYPE pAptType; // [rsp+38h] [rbp-280h] BYREF
  __int64 v20; // [rsp+40h] [rbp-278h]
  HRESULT v21; // [rsp+48h] [rbp-270h]
  WCHAR Filename[264]; // [rsp+50h] [rbp-268h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  if ( a1 )
    v8 = a1 + 48;
  else
    v8 = 0LL;
  v20 = v8;
  v9 = *(_DWORD *)(v8 + 44);
  if ( v9 == 2 )
    goto LABEL_4;
  v15 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    goto LABEL_30;
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
LABEL_30:
    if ( v15 != 1 )
      goto LABEL_9;
  }
LABEL_4:
  if ( *(_DWORD *)(v8 + 40) == -3 )
    goto LABEL_9;
  CurrentThreadId = 0;
  ApartmentType = CoGetApartmentType(&pAptType, pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_11;
  if ( pAptType == APTTYPE_STA )
    goto LABEL_7;
  if ( pAptType != APTTYPE_MTA )
  {
    if ( pAptType == APTTYPE_NA )
    {
      CurrentThreadId = -1;
    }
    else if ( pAptType == APTTYPE_MAINSTA )
    {
LABEL_7:
      CurrentThreadId = GetCurrentThreadId();
    }
  }
  if ( CurrentThreadId != *(_DWORD *)(v8 + 40) )
  {
    ApartmentType = -2147417842;
    goto LABEL_11;
  }
LABEL_9:
  ApartmentType = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v8) )
    ApartmentType = 0;
LABEL_11:
  v21 = ApartmentType;
  if ( ApartmentType < 0 )
  {
    *(_QWORD *)pAptQualifier = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)pAptQualifier);
    v14 = (*(__int64 (__fastcall **)(_QWORD, GUID *, APTTYPEQUALIFIER *))(**(_QWORD **)(a1 + 96) + 24LL))(
            *(_QWORD *)(a1 + 96),
            &GUID_727f9e97_76ee_497b_a942_b6371328485c,
            pAptQualifier);
    v12 = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)(unsigned int)v14,
        cchValue);
    else
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)pAptQualifier + 24LL))(
              *(_QWORD *)pAptQualifier,
              a2,
              a3,
              a4);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)pAptQualifier);
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
