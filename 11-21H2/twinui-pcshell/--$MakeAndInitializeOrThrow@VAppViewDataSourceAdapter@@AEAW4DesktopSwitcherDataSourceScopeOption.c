/*
 * XREFs of ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180050580
 * Callers:
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@44PEAUITabViewManager@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180050608 (-AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x18002EC40 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18005044C (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@A.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions &,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *>(
        __int64 *a1,
        int *a2,
        struct IApplicationViewCollection **a3,
        struct IApplicationViewIconLoader **a4,
        struct IImmersiveShellHookService **a5,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice **a6)
{
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(a1);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<AppViewDataSourceAdapter,AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions &,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *>(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v10,
      v12);
  return a1;
}
