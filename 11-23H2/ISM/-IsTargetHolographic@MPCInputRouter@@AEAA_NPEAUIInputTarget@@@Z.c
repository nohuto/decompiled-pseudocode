/*
 * XREFs of ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x180109F9C
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x18010B428 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001B020 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MPCInputRouter_IsTargetHolographic@AEAPEAUIInputTarget@@AEAKAEA_KAEA_N@ISMTracing@@SAXAEAPEAUIInputTarget@@AEAKAEA_KAEA_N@Z @ 0x1801079AC (--$MPCInputRouter_IsTargetHolographic@AEAPEAUIInputTarget@@AEAKAEA_KAEA_N@ISMTracing@@SAXAEAPEAU.c)
 *     ??$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@PEA_N@Z @ 0x180108778 (--$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 *     ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x18010950C (-GetPresentationModeFromViewId@ViewHelper@@SA-AW4AppModelHolographicPresentationMode@WindowManag.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCInputRouter::IsTargetHolographic(MPCInputRouter *this, struct IInputTarget *a2)
{
  __int64 (__fastcall *v3)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int ViewIdFromWindowId; // eax
  int v8; // eax
  unsigned int v9; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  char v11; // bl
  int v12; // ebx
  struct ViewHierarchyWithWindowManager *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  int inited; // eax
  HWND Ancestor; // rax
  __int64 v19[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  MPCInputRouter *v21; // [rsp+50h] [rbp+20h] BYREF
  struct IInputTarget *v22; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v23; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp+38h] BYREF

  v22 = a2;
  v21 = this;
  v19[0] = 0LL;
  v3 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v19);
  v4 = v3(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v19);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x251,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4,
      v19[0]);
  v23 = 0;
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v19[0] + 64LL))(v19[0], &v24);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x257,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v5,
      v19[0]);
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19[0] + 56LL))(v19[0], &v23);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x25A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v6,
      v19[0]);
  ViewIdFromWindowId = v23;
  if ( !v23 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19[0] + 48LL))(v19[0], &v23);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x25F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v8,
        v19[0]);
    ViewIdFromWindowId = v23;
    if ( !v23 )
    {
      v9 = v24;
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v9);
      v23 = ViewIdFromWindowId;
    }
  }
  v11 = 0;
  LOBYTE(v21) = 0;
  if ( !ViewIdFromWindowId )
  {
    if ( !v24 )
      goto LABEL_26;
    v11 = IsEdition(1024LL);
    LOBYTE(v21) = v11;
    if ( v11 )
      goto LABEL_26;
    if ( !GetPropW((HWND)(int)v24, L"Windows.Graphics.Holographic.HolographicSpace")
      && !GetPropW((HWND)(int)v24, L"Windows.Internal.Shell.Holographic.Win32PortedView") )
    {
      LOBYTE(v21) = 0;
      inited = wil::init_once_nothrow<_lambda_d503711298e7f6b3b6e2140cf5363040_>(v14, 0LL, v15);
      if ( inited < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          52LL,
          (__int64)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
          (const char *)(unsigned int)inited);
      if ( !`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled )
        goto LABEL_26;
      Ancestor = GetAncestor((HWND)(int)v24, 3u);
      if ( !Ancestor || !GetPropW(Ancestor, L"Windows.Internal.Shell.Holographic.Win32PortedView") )
        goto LABEL_25;
    }
    v11 = 1;
    goto LABEL_25;
  }
  v11 = IsEdition(1024LL);
  LOBYTE(v21) = v11;
  if ( !v11 )
  {
    v12 = v23;
    v13 = ISMStatics::GetViewHierarchy();
    v11 = (unsigned int)ViewHelper::GetPresentationModeFromViewId((unsigned __int64)v13, v12) == 1;
LABEL_25:
    LOBYTE(v21) = v11;
  }
LABEL_26:
  ISMTracing::MPCInputRouter_IsTargetHolographic<IInputTarget * &,unsigned long &,unsigned __int64 &,bool &>(
    &v22,
    &v23,
    &v24,
    (bool *)&v21);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v19);
  return v11;
}
