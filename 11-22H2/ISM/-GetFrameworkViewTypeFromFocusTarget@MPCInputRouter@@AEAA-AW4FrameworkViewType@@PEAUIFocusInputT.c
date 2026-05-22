/*
 * XREFs of ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180117610
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180118F6C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180119828 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001BA80 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18002B240 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B48C0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180117854 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x18011889C (-MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(__int64 a1, struct IInputTarget *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *v6; // rcx
  unsigned int FrameworkViewTypeFromViewId; // esi
  __int64 v8; // rcx
  ISMTracing *v9; // rcx
  unsigned int v11; // ebx
  struct ViewHierarchyWithWindowManager *v12; // rax
  unsigned int v13; // ebx
  struct ViewHierarchyWithWindowManager *v14; // rax
  int v15; // ebx
  struct ViewHierarchyWithWindowManager *v16; // rax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int v18; // eax
  int v19; // [rsp+20h] [rbp-18h]
  const char *v20; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v22; // [rsp+60h] [rbp+28h] BYREF
  unsigned int v23; // [rsp+68h] [rbp+30h] BYREF
  unsigned __int64 WindowIdFromViewId; // [rsp+70h] [rbp+38h] BYREF
  struct IInputTarget *v25; // [rsp+78h] [rbp+40h] BYREF

  v22 = a1;
  v25 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v23 = 0;
  LODWORD(v22) = 0;
  WindowIdFromViewId = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v23);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x226,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3,
      v19);
  v4 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v22);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x227,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4,
      v19);
  v5 = v23;
  if ( v23 )
    goto LABEL_21;
  if ( !(_DWORD)v22 )
  {
    if ( (*(int (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &WindowIdFromViewId) >= 0
      && !IsEdition(1024LL)
      && GetPropW((HWND)(int)WindowIdFromViewId, L"Windows.Graphics.Holographic.HolographicSpace") )
    {
      FrameworkViewTypeFromViewId = v5 + 1;
      goto LABEL_13;
    }
    v5 = v23;
  }
  if ( v5 )
  {
LABEL_21:
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(ViewHierarchy, v5);
    v18 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
            a2,
            &WindowIdFromViewId);
    v6 = retaddr;
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x244,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v18,
        v19);
  }
  else
  {
    if ( !(_DWORD)v22 )
    {
      v11 = WindowIdFromViewId;
      v12 = ISMStatics::GetViewHierarchy();
      LODWORD(v22) = ViewHelper::GetViewIdFromWindowId(v12, v11);
      wil::details::in1diag3::Log_HrIfMsg(
        retaddr,
        (void *)0x239,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)0x80004005LL,
        (_DWORD)v22 == 0,
        (__int64)"View id not found",
        v20);
    }
    v13 = v22;
    v14 = ISMStatics::GetViewHierarchy();
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(v14, v13);
    v15 = v22;
    v16 = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v16, v15);
  }
LABEL_13:
  if ( ISMTracing::IsEnabled((__int64)v6) )
  {
    wil::details::static_lazy<ISMTracing>::get(v8, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
      v9,
      a2,
      v22,
      FrameworkViewTypeFromViewId,
      WindowIdFromViewId);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v25);
  return FrameworkViewTypeFromViewId;
}
