/*
 * XREFs of ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180562F7C
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180553C44 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Z @ 0x180562AF8 (--$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMa.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@@Details@23@UIExternalDragHost@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1805630A0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1805630A0.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x180563414 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPPIAllUpViewHost_CreateInstance(
        struct IMultitaskingData *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct IMultitaskingViewVisibilityServiceInternal *a5,
        struct ITabletModeViewManager *a6,
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
  struct IMultitaskingData *v17; // [rsp+60h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v18; // [rsp+68h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v19; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v20; // [rsp+78h] [rbp+38h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  v8 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease(&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewHost,CPPIAllUpViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,ITabletModeViewManager * &>(
         (CPPIAllUpViewHost **)&a8,
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
    v12 = 204LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
      (const char *)v11);
    goto LABEL_10;
  }
  *v8 = 0LL;
  if ( InlineIsEqualGUID(&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v14 = a8;
    *v8 = a8;
    (*((void (__fastcall **)(void **))*v14 + 1))(v14);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IPPIAllUpViewHost>>,IExternalDragHost>::CanCastTo(
                  a8,
                  v13,
                  v8);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  if ( CanCastTo < 0 )
  {
    v11 = (unsigned int)CanCastTo;
    v12 = 206LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease(&a8);
  return (unsigned int)CanCastTo;
}
