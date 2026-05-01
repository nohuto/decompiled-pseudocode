/*
 * XREFs of ?MakeTaskViewFrame@@YA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@5678@AEBUSwitchItemDataView@Multitasking@ComposableShell@678@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@678@AEBUIVirtualDesktopController@Multitasking@ComposableShell@678@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x1800164F8
 * Callers:
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800165F8 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$MakeAndInitializeOrThrow@VTaskViewFrame@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU9@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VTaskViewFrame@@@WRL@Microsoft@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@6789@AEBUSwitchItemDataView@Multitasking@ComposableShell@789@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@789@AEBUIVirtualDesktopController@Multitasking@ComposableShell@789@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180016428 (--$MakeAndInitializeOrThrow@VTaskViewFrame@@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
TaskViewFrame **MakeTaskViewFrame(TaskViewFrame **a1, __int64 a2, int a3, ...)
{
  TaskViewFrame **v5; // rax
  TaskViewFrame *v6; // rcx
  TaskViewFrame *v8; // [rsp+68h] [rbp-8h] BYREF
  int v9; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+38h] BYREF
  va_list va; // [rsp+A8h] [rbp+38h]
  __int64 v12; // [rsp+B0h] [rbp+40h] BYREF
  va_list va1; // [rsp+B0h] [rbp+40h]
  __int64 v14; // [rsp+B8h] [rbp+48h]
  struct winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView *v15; // [rsp+C0h] [rbp+50h]
  __int64 v16; // [rsp+C8h] [rbp+58h]
  __int64 v17; // [rsp+D0h] [rbp+60h]
  __int64 v18; // [rsp+D8h] [rbp+68h] BYREF
  va_list va2; // [rsp+D8h] [rbp+68h]
  __int64 v20; // [rsp+E0h] [rbp+70h] BYREF
  va_list va3; // [rsp+E0h] [rbp+70h]
  va_list va4; // [rsp+E8h] [rbp+78h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, struct winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView *);
  v16 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v20 = va_arg(va4, _QWORD);
  v9 = a3;
  v18 = __abi_winrt_ptr_ctor(v18);
  v20 = __abi_winrt_ptr_ctor(v20);
  v5 = wil::MakeAndInitializeOrThrow<TaskViewFrame,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics const &,enum ALL_UP_VIEW_FLAGS &,IImmersiveMonitor * &,IImmersiveMonitor * &,winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice const &,winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController const &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc * &>(
         &v8,
         a2,
         &v9,
         (__int64 *)va,
         (__int64 *)va1,
         v14,
         v15,
         v16,
         v17,
         (__int64 *)va2,
         (__int64 *)va3);
  v6 = *v5;
  *v5 = 0LL;
  *a1 = v6;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return a1;
}
