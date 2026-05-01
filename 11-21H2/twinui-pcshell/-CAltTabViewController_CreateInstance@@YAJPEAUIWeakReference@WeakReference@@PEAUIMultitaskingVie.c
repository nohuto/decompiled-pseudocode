/*
 * XREFs of ?CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AD71C
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUITouchGestureSettings@@@Z @ 0x1804A1E70 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewControllerBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewControllerBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804AD300 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingVi.c)
 *     ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1804AD3A0 (--$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMul.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x1804AD850 (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAltTabViewController_CreateInstance(
        struct IWeakReference *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct IApplicationViewCollection *a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a6,
        struct ITabViewManager *a7,
        const struct _GUID *a8,
        void **a9)
{
  void **v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IWeakReference *v15; // [rsp+60h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v16; // [rsp+68h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v17; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v18; // [rsp+78h] [rbp+38h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v15 = a1;
  v9 = a9;
  a9 = 0LL;
  *v9 = 0LL;
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&a9);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewController,CAltTabViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
          (CAltTabViewController **)&a9,
          &v15,
          &v16,
          &v17,
          &v18,
          &a5,
          &a6,
          &a7);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 101LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewcontroller.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_6;
  }
  v10 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewControllerBase>>(
          (__int64)a9,
          &GUID_66ac636f_a9ef_413d_b08e_f926afaa37f9,
          v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 102LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&a9);
  return v11;
}
