/*
 * XREFs of ??$MakeAndInitialize@VTaskViewFrame@@V1@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU9@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Details@WRL@Microsoft@@YAJPEAPEAVTaskViewFrame@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@3AEBUIDesktopThumbnailDevice@Desktop@Multitasking@6789@AEBUSwitchItemDataView@Multitasking@ComposableShell@789@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@789@AEBUIVirtualDesktopController@Multitasking@ComposableShell@789@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1800160FC
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VTaskViewFrame@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU9@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VTaskViewFrame@@@WRL@Microsoft@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@6789@AEBUSwitchItemDataView@Multitasking@ComposableShell@789@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@789@AEBUIVirtualDesktopController@Multitasking@ComposableShell@789@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180016428 (--$MakeAndInitializeOrThrow@VTaskViewFrame@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@.c)
 * Callees:
 *     ?RuntimeClassInitialize@TaskViewFrame@@QEAAJAEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180015E7C (-RuntimeClassInitialize@TaskViewFrame@@QEAAJAEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@.c)
 *     ??0TaskViewFrame@@QEAA@XZ @ 0x180016240 (--0TaskViewFrame@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskViewFrame,TaskViewFrame,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics const &,enum ALL_UP_VIEW_FLAGS &,IImmersiveMonitor * &,IImmersiveMonitor * &,winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice const &,winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController const &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc * &>(
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
  TaskViewFrame *v15; // rax
  TaskViewFrame *v16; // rdi
  int v17; // esi
  TaskViewFrame *v19; // [rsp+90h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = (TaskViewFrame *)operator new(0x1E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v15;
  if ( v15 )
  {
    v16 = TaskViewFrame::TaskViewFrame(v15);
    v19 = v16;
    v17 = TaskViewFrame::RuntimeClassInitialize(v16, a2, *a3, *a4, *a5, a6, a7, a8, a9, *a10, *a11);
    if ( v17 >= 0 )
    {
      if ( v16 )
        (*(void (__fastcall **)(TaskViewFrame *))(*(_QWORD *)v16 + 8LL))(v16);
      *a1 = v16;
      v17 = 0;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v17;
}
