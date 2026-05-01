/*
 * XREFs of ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1800B0904
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801706C4 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B898C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164990 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@w.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::RuntimeClassInitialize(TouchKeyboardExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), TouchKeyboardExperienceManager *, char *); // rdi
  GUID v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = IID_ITouchKeyboardExperienceManager;
  v10 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TouchKeyboardExperienceManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v9,
         1u);
  if ( v2 < 0 )
  {
    v3 = 472LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v9 = GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc;
  v10 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TouchKeyboardExperienceManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v9,
         1u);
  if ( v2 < 0 )
  {
    v3 = 473LL;
    goto LABEL_3;
  }
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::GetImpl'::`2'::impl,
    v5);
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::GetImpl'::`2'::impl,
    v6);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 126);
  v2 = CoreUICreate((char *)this + 1008);
  if ( v2 < 0 )
  {
    v3 = 476LL;
    goto LABEL_3;
  }
  v7 = *((_QWORD *)this + 126);
  v8 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), TouchKeyboardExperienceManager *, char *))(*(_QWORD *)v7 + 144LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 127);
  v2 = v8(v7, TouchKeyboardExperienceManager::AnimationGapTimerCallback, this, (char *)this + 1016);
  if ( v2 < 0 )
  {
    v3 = 480LL;
    goto LABEL_3;
  }
  return 0LL;
}
