/*
 * XREFs of ?CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A3B3C
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18049AD54 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1804A33A4 (--$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingView.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@@Details@23@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804A3CD4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1804A3CD4.c)
 *     ?InternalRelease@?$ComPtr@VCSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A4328 (-InternalRelease@-$ComPtr@VCSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnapAssistViewHost_CreateInstance(
        struct IMultitaskingData *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IMultitaskingViewVisibilityServiceInternal *a3,
        struct IImmersiveAppCrusher *a4,
        struct IApplicationViewCollection *a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a6,
        struct ITabViewManager *a7,
        const struct _GUID *a8,
        void **a9)
{
  void **v9; // rdi
  int v10; // eax
  int CanCastTo; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  void **v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IMultitaskingData *v19; // [rsp+60h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v20; // [rsp+68h] [rbp+28h] BYREF
  struct IMultitaskingViewVisibilityServiceInternal *v21; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v9 = a9;
  *a9 = 0LL;
  a9 = 0LL;
  Microsoft::WRL::ComPtr<CSnapAssistViewHost>::InternalRelease(&a9);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistViewHost,CSnapAssistViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IMultitaskingViewVisibilityServiceInternal * &,IImmersiveAppCrusher * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
          (CSnapAssistViewHost **)&a9,
          &v19,
          &v20,
          &v21,
          &v22,
          v17,
          &a6,
          &a7);
  CanCastTo = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 360LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)v12);
    goto LABEL_10;
  }
  *v9 = 0LL;
  if ( InlineIsEqualGUID(&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v15 = a9;
    *v9 = a9;
    (*((void (__fastcall **)(void **))*v15 + 1))(v15);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<ISnapAssistViewHost>>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
                  a9,
                  v14,
                  v9);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
  }
  if ( CanCastTo < 0 )
  {
    v12 = (unsigned int)CanCastTo;
    v13 = 361LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<CSnapAssistViewHost>::InternalRelease(&a9);
  return (unsigned int)CanCastTo;
}
