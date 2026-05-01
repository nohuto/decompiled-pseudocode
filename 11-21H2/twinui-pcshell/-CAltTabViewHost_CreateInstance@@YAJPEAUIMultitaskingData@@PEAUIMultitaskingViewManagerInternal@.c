/*
 * XREFs of ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUITouchGestureSettings@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A16E0
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18049AD54 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@@Details@23@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180231A08 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@V-.c)
 *     ??$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUITouchGestureSettings@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAPEAUITouchGestureSettings@@@Z @ 0x1804A0FF4 (--$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMana.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A1B54 (-InternalRelease@-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAltTabViewHost_CreateInstance(
        struct IMultitaskingData *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct IMultitaskingViewVisibilityServiceInternal *a5,
        struct IMultitaskingViewGestureState *a6,
        struct IApplicationViewCollection *a7,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a8,
        struct ITabViewManager *a9,
        struct ITouchGestureSettings *a10,
        const struct _GUID *a11,
        void **a12)
{
  void **v12; // rdi
  int v13; // eax
  int CanCastTo; // ebx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  void **v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IMultitaskingData *v21; // [rsp+80h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v22; // [rsp+88h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v23; // [rsp+90h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v24; // [rsp+98h] [rbp+38h] BYREF

  v24 = a4;
  v23 = a3;
  v22 = a2;
  v21 = a1;
  v12 = a12;
  *a12 = 0LL;
  a12 = 0LL;
  Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(&a12);
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewHost,CAltTabViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,IMultitaskingViewGestureState * &,IApplicationViewCollection * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &,ITouchGestureSettings * &>(
          (CAltTabViewHost **)&a12,
          &v21,
          &v22,
          &v23,
          &v24,
          &a5,
          &a6,
          &a7,
          &a8,
          &a9,
          &a10);
  CanCastTo = v13;
  if ( v13 < 0 )
  {
    v15 = (unsigned int)v13;
    v16 = 386LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)v15);
    goto LABEL_10;
  }
  *v12 = 0LL;
  if ( InlineIsEqualGUID(&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v18 = a12;
    *v12 = a12;
    (*((void (__fastcall **)(void **))*v18 + 1))(v18);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAltTabViewHost>>,IAltTabViewHostInternal>::CanCastTo(
                  (__int64)a12,
                  v17);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v12 + 8LL))(*v12);
  }
  if ( CanCastTo < 0 )
  {
    v15 = (unsigned int)CanCastTo;
    v16 = 388LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(&a12);
  return (unsigned int)CanCastTo;
}
