/*
 * XREFs of ??$MakeAndInitializeOrThrow@VTaskViewFrame@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU9@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VTaskViewFrame@@@WRL@Microsoft@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@6789@AEBUSwitchItemDataView@Multitasking@ComposableShell@789@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@789@AEBUIVirtualDesktopController@Multitasking@ComposableShell@789@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180016428
 * Callers:
 *     ?MakeTaskViewFrame@@YA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@5678@AEBUSwitchItemDataView@Multitasking@ComposableShell@678@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@678@AEBUIVirtualDesktopController@Multitasking@ComposableShell@678@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1800164F8 (-MakeTaskViewFrame@@YA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@AEBUIXaml.c)
 * Callees:
 *     ??$MakeAndInitialize@VTaskViewFrame@@V1@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU9@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Details@WRL@Microsoft@@YAJPEAPEAVTaskViewFrame@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@3AEBUIDesktopThumbnailDevice@Desktop@Multitasking@6789@AEBUSwitchItemDataView@Multitasking@ComposableShell@789@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@789@AEBUIVirtualDesktopController@Multitasking@ComposableShell@789@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1800160FC (--$MakeAndInitialize@VTaskViewFrame@@V1@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shel.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
TaskViewFrame **__fastcall wil::MakeAndInitializeOrThrow<TaskViewFrame,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics const &,enum ALL_UP_VIEW_FLAGS &,IImmersiveMonitor * &,IImmersiveMonitor * &,winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice const &,winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController const &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc * &>(
        TaskViewFrame **a1,
        __int64 a2,
        int *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        struct winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView *a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int64 *a11)
{
  int v15; // eax
  int v17; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
  v15 = Microsoft::WRL::Details::MakeAndInitialize<TaskViewFrame,TaskViewFrame,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics const &,enum ALL_UP_VIEW_FLAGS &,IImmersiveMonitor * &,IImmersiveMonitor * &,winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice const &,winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController const &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc * &>(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v15,
      v17);
  return a1;
}
