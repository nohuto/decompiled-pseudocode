/*
 * XREFs of ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180408E54
 * Callers:
 *     ?UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x1802D33D8 (-UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180408E14 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180172D50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180172D50.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017AA2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x1801B2F04 (-DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA-AW4GamingOverlayDisplayMode@Ga.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a95e7b8488d12cdff5d3938d5c791af7___ @ 0x1801D9E3C (Windows--Internal--ComTaskPool--QueueTask__lambda_a95e7b8488d12cdff5d3938d5c791af7___.c)
 *     _lambda_a95e7b8488d12cdff5d3938d5c791af7_::__lambda_a95e7b8488d12cdff5d3938d5c791af7_ @ 0x1801DA150 (_lambda_a95e7b8488d12cdff5d3938d5c791af7_--__lambda_a95e7b8488d12cdff5d3938d5c791af7_.c)
 *     ?InternalAddRef@?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1804012AC (-InternalAddRef@-$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI@Z @ 0x180411FD0 (-WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::UpdateOverlayDisplayModeShared(
        GamingOverlayExperienceManager *this,
        volatile int *a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  const char *v13; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  GamingOverlayExperienceManager *v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = this;
  if ( this )
  {
    v3 = *((_QWORD *)this + 26);
    while ( v3 >= 0 )
    {
      if ( (_DWORD)v3 != 0x7FFFFFFF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v3 + 1, v3);
        if ( v4 != v3 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v3 + 16), a2);
  }
LABEL_8:
  v5 = GamingOverlayExperienceManager::DetermineCurrentDisplayMode((__int64)this);
  v8 = v5;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
      1u,
      v6,
      v7);
    if ( *((_BYTE *)this + 1384) )
    {
      if ( v8 != 2 )
      {
        v9 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)*((_QWORD *)this + 49);
        if ( v9 )
        {
          winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::WindowBand(v9, 4u);
          *((_BYTE *)this + 1384) = 0;
        }
      }
    }
    v16 = this;
    Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::InternalAddRef((__int64 *)&v16);
    v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_a95e7b8488d12cdff5d3938d5c791af7___(
            v11,
            v10,
            *((_DWORD *)this + 345),
            (volatile signed __int32 *)&v16);
    lambda_a95e7b8488d12cdff5d3938d5c791af7_::__lambda_a95e7b8488d12cdff5d3938d5c791af7_((__int64 *)&v16);
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF83,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release((__int64)this);
    result = (unsigned int)v12;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF84,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                           v13);
  }
  return result;
}
