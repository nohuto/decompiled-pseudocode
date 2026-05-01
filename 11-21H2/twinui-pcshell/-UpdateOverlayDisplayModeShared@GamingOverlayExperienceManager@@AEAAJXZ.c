/*
 * XREFs of ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18033AF30
 * Callers:
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033AEF0 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     ?UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033B0A4 (-UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18013DB40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@ABI@@UIXamlExplorerHostChildWindowStatics@89Internal@Windows@ABI@@UIXamlExplorerHostComponent@89Internal@Windows@ABI@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FB90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18013FB90.c)
 *     ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x18017B61C (-DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA-AW4GamingOverlayDisplayMode@Ga.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b1218b6c09ade945fa9b9b3ffa9632c5___ @ 0x1803271C4 (Windows--Internal--ComTaskPool--QueueTask__lambda_b1218b6c09ade945fa9b9b3ffa9632c5___.c)
 *     ?WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI@Z @ 0x180344170 (-WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI.c)
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
  volatile int *v9; // rdx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v10; // rcx
  signed __int64 v11; // rax
  __int64 v12; // rcx
  signed __int64 v13; // rtt
  int v14; // edi
  const char *v15; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  GamingOverlayExperienceManager *v18; // [rsp+30h] [rbp+8h] BYREF
  GamingOverlayExperienceManager *v19; // [rsp+38h] [rbp+10h]

  v19 = this;
  if ( this )
  {
    v3 = *((_QWORD *)this + 25);
    while ( v3 >= 0 )
    {
      if ( (_DWORD)v3 != 0x7FFFFFFF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 25, v3 + 1, v3);
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
    if ( *((_BYTE *)this + 1344) )
    {
      if ( v8 != 2 )
      {
        v10 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)*((_QWORD *)this + 44);
        if ( v10 )
        {
          winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::WindowBand(v10, 4u);
          *((_BYTE *)this + 1344) = 0;
        }
      }
    }
    v18 = this;
    v11 = *((_QWORD *)this + 25);
    while ( 1 )
    {
      v12 = (unsigned __int64)v11 >> 63;
      if ( v11 < 0 )
        break;
      if ( (_DWORD)v11 != 0x7FFFFFFF )
      {
        v12 = v11 + 1;
        v13 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 25, v11 + 1, v11);
        if ( v13 != v11 )
          continue;
      }
      goto LABEL_19;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v11 + 16), v9);
LABEL_19:
    v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_b1218b6c09ade945fa9b9b3ffa9632c5___(
            v12,
            (__int64)v9,
            *((_DWORD *)this + 335),
            &v18);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,Microsoft::WRL::FtmBase>::Release((__int64)v18);
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEE7,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,Microsoft::WRL::FtmBase>::Release((__int64)this);
    result = (unsigned int)v14;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEE8,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                           v15);
  }
  return result;
}
