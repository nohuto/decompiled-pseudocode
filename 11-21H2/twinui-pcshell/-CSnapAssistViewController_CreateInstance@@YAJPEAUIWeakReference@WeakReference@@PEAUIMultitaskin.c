/*
 * XREFs of ?CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B40BC
 * Callers:
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1804A44E4 (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1804B3B80 (--$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAU.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCMultitaskingViewControllerBase@@@Details@23@UISnapAssistViewController@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804B41E0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1804B41E0.c)
 *     ?InternalRelease@?$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B4258 (-InternalRelease@-$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnapAssistViewController_CreateInstance(
        struct IWeakReference *a1,
        struct IMultitaskingViewManager *a2,
        struct IImmersiveAppCrusher *a3,
        struct IApplicationViewCollection *a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a5,
        struct ITabViewManager *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rdi
  int v9; // eax
  int CanCastTo; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  void **v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IWeakReference *v17; // [rsp+60h] [rbp+20h] BYREF
  struct IMultitaskingViewManager *v18; // [rsp+68h] [rbp+28h] BYREF
  struct IImmersiveAppCrusher *v19; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationViewCollection *v20; // [rsp+78h] [rbp+38h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  v8 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  Microsoft::WRL::ComPtr<CSnapAssistViewController>::InternalRelease(&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistViewController,CSnapAssistViewController,WeakReference::IWeakReference * &,IMultitaskingViewManager * &,IImmersiveAppCrusher * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
         (CSnapAssistViewController **)&a8,
         &v17,
         &v18,
         &v19,
         &v20,
         &a5,
         &a6);
  CanCastTo = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 195LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)v11);
    goto LABEL_10;
  }
  *v8 = 0LL;
  if ( InlineIsEqualGUID(&GUID_66ac636f_a9ef_413d_b08e_f926afaa37f9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v14 = a8;
    *v8 = a8;
    (*((void (__fastcall **)(void **))*v14 + 1))(v14);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewControllerBase>,ISnapAssistViewController>::CanCastTo(
                  a8,
                  v13,
                  v8);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  if ( CanCastTo < 0 )
  {
    v11 = (unsigned int)CanCastTo;
    v12 = 196LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<CSnapAssistViewController>::InternalRelease(&a8);
  return (unsigned int)CanCastTo;
}
