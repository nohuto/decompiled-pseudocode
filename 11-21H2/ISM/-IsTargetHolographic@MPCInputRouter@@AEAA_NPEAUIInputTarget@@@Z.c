/*
 * XREFs of ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800F0D74
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800F1FE8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001ADC0 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@PEA_N@Z @ 0x1800EF5FC (--$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 *     ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800F02F4 (-GetPresentationModeFromViewId@ViewHelper@@SA-AW4AppModelHolographicPresentationMode@WindowManag.c)
 *     ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x1800F114C (-MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MPCInputRouter::IsTargetHolographic(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  __int64 (__fastcall *v3)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int ViewIdFromWindowId; // eax
  int v9; // eax
  unsigned int v10; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  char v12; // bl
  int v13; // ebx
  struct ViewHierarchyWithWindowManager *v14; // rax
  __int64 v15; // r8
  int inited; // eax
  HWND Ancestor; // rax
  __int64 v18; // rcx
  ISMTracing *v19; // rcx
  int v21; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  MPCInputRouter *v23; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp+28h] BYREF
  __int64 v25; // [rsp+60h] [rbp+30h] BYREF

  v23 = this;
  v25 = 0LL;
  v3 = **a2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v25);
  v4 = v3((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v25);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x251,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4,
      v21);
  LODWORD(v23) = 0;
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v25 + 64LL))(v25, &v24);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x257,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v5,
      v21);
  v6 = (*(__int64 (__fastcall **)(__int64, MPCInputRouter **))(*(_QWORD *)v25 + 56LL))(v25, &v23);
  v7 = retaddr;
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x25A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v6,
      v21);
  ViewIdFromWindowId = (int)v23;
  if ( !(_DWORD)v23 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, MPCInputRouter **))(*(_QWORD *)v25 + 48LL))(v25, &v23);
    v7 = retaddr;
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x25F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v9,
        v21);
    ViewIdFromWindowId = (int)v23;
    if ( !(_DWORD)v23 )
    {
      v10 = v24;
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v10);
      LODWORD(v23) = ViewIdFromWindowId;
    }
  }
  v12 = 0;
  if ( ViewIdFromWindowId )
  {
    v12 = IsEdition(1024LL);
    if ( !v12 )
    {
      v13 = (int)v23;
      v14 = ISMStatics::GetViewHierarchy();
      v12 = (unsigned int)ViewHelper::GetPresentationModeFromViewId((__int64)v14, v13) == 1;
    }
  }
  else if ( v24 )
  {
    v12 = IsEdition(1024LL);
    if ( !v12 )
    {
      if ( GetPropW((HWND)(int)v24, L"Windows.Graphics.Holographic.HolographicSpace")
        || GetPropW((HWND)(int)v24, L"Windows.Internal.Shell.Holographic.Win32PortedView") )
      {
        goto LABEL_24;
      }
      inited = wil::init_once_nothrow<_lambda_d503711298e7f6b3b6e2140cf5363040_>((__int64)v7, 0LL, v15);
      v7 = retaddr;
      if ( inited < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          52LL,
          (__int64)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
          (const char *)(unsigned int)inited);
      if ( `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled )
      {
        Ancestor = GetAncestor((HWND)(int)v24, 3u);
        if ( Ancestor )
        {
          if ( GetPropW(Ancestor, L"Windows.Internal.Shell.Holographic.Win32PortedView") )
LABEL_24:
            v12 = 1;
        }
      }
    }
  }
  if ( ISMTracing::IsEnabled((__int64)v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v18, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputRouter_IsTargetHolographic_(v19, (struct IInputTarget *)a2, (unsigned int)v23, v24, v12);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v25);
  return v12;
}
