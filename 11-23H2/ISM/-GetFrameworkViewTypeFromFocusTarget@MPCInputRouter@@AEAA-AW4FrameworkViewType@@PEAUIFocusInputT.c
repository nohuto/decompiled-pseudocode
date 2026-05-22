/*
 * XREFs of ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180108FB8
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x18010AB8C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x18010B428 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001B020 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18002A030 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800A2288 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$MPCInputRouter_GetFrameworkViewTypeFromFocusTarget@AEAPEAUIFocusInputTarget@@AEAKIAEA_K@ISMTracing@@SAXAEAPEAUIFocusInputTarget@@AEAK$$QEAIAEA_K@Z @ 0x1801078C4 (--$MPCInputRouter_GetFrameworkViewTypeFromFocusTarget@AEAPEAUIFocusInputTarget@@AEAKIAEA_K@ISMTr.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801091EC (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(__int64 a1, struct IInputTarget *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  unsigned int FrameworkViewTypeFromViewId; // edi
  unsigned int v8; // ebx
  struct ViewHierarchyWithWindowManager *v9; // rax
  unsigned int v10; // ebx
  struct ViewHierarchyWithWindowManager *v11; // rax
  int v12; // ebx
  struct ViewHierarchyWithWindowManager *v13; // rax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-20h]
  unsigned __int64 WindowIdFromViewId; // [rsp+30h] [rbp-10h] BYREF
  struct IInputTarget *v18; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v20; // [rsp+60h] [rbp+20h] BYREF
  struct IInputTarget *v21; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v22; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+38h] BYREF

  v21 = a2;
  v20 = a1;
  v18 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v22 = 0;
  LODWORD(v20) = 0;
  WindowIdFromViewId = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v22);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x226,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3,
      v16);
  v4 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v20);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x227,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4,
      v16);
  v5 = v22;
  if ( v22 )
    goto LABEL_19;
  if ( !(_DWORD)v20 )
  {
    if ( (*(int (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &WindowIdFromViewId) >= 0
      && !IsEdition(1024LL)
      && GetPropW((HWND)(int)WindowIdFromViewId, L"Windows.Graphics.Holographic.HolographicSpace") )
    {
      FrameworkViewTypeFromViewId = 1;
      goto LABEL_13;
    }
    v5 = v22;
  }
  if ( v5 )
  {
LABEL_19:
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(ViewHierarchy, v5);
    v15 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
            a2,
            &WindowIdFromViewId);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x244,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v15,
        v16);
  }
  else
  {
    if ( !(_DWORD)v20 )
    {
      v8 = WindowIdFromViewId;
      v9 = ISMStatics::GetViewHierarchy();
      LODWORD(v20) = ViewHelper::GetViewIdFromWindowId(v9, v8);
      wil::details::in1diag3::Log_HrIfMsg(
        retaddr,
        (void *)0x239,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)0x80004005LL,
        (_DWORD)v20 == 0,
        (__int64)"View id not found",
        (const char *)WindowIdFromViewId);
    }
    v10 = v20;
    v11 = ISMStatics::GetViewHierarchy();
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(v11, v10);
    v12 = v20;
    v13 = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v13, v12);
  }
LABEL_13:
  v23 = FrameworkViewTypeFromViewId;
  ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget<IFocusInputTarget * &,unsigned long &,unsigned int,unsigned __int64 &>(
    &v21,
    (unsigned int *)&v20,
    &v23,
    &WindowIdFromViewId);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
  return FrameworkViewTypeFromViewId;
}
