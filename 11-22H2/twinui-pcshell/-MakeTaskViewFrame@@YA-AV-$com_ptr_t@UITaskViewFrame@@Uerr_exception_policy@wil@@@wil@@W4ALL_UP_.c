/*
 * XREFs of ?MakeTaskViewFrame@@YA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopDataSource@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopController@7ComposableShell@9Windows@winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@89Windows@winrt@@PEAUIRemoteSessionWindowManager@89Windows@ABI@@@Z @ 0x18005AB4C
 * Callers:
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180078304 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VTaskViewFrame@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU3@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@789winrt@@AEAPEAUIRemoteSessionWindowManager@789ABI@@@wil@@YA?AV?$ComPtr@VTaskViewFrame@@@WRL@Microsoft@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopController@8ComposableShell@Internal@Windows@winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@9Internal@Windows@winrt@@AEAPEAUIRemoteSessionWindowManager@9Internal@Windows@ABI@@@Z @ 0x18005AC64 (--$MakeAndInitializeOrThrow@VTaskViewFrame@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AE.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *MakeTaskViewFrame(_QWORD *a1, int a2, ...)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v6[3]; // [rsp+80h] [rbp-9h] BYREF
  int v7; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v8; // [rsp+B8h] [rbp+2Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+2Fh]
  __int64 v10; // [rsp+C0h] [rbp+37h] BYREF
  va_list va1; // [rsp+C0h] [rbp+37h]
  __int64 v12; // [rsp+C8h] [rbp+3Fh]
  __int64 v13; // [rsp+D0h] [rbp+47h]
  __int64 v14; // [rsp+D8h] [rbp+4Fh]
  __int64 v15; // [rsp+E0h] [rbp+57h]
  __int64 v16; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+E8h] [rbp+5Fh]
  __int64 v18; // [rsp+F0h] [rbp+67h] BYREF
  va_list va3; // [rsp+F0h] [rbp+67h]
  __int64 v20; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+F8h] [rbp+6Fh]
  __int64 v22; // [rsp+100h] [rbp+77h]
  va_list va5; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v12 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD);
  v22 = va_arg(va5, _QWORD);
  v7 = a2;
  v16 = __abi_winrt_ptr_ctor(v16);
  v18 = __abi_winrt_ptr_ctor(v18);
  v3 = (__int64 *)wil::MakeAndInitializeOrThrow<TaskViewFrame,enum ALL_UP_VIEW_FLAGS &,IImmersiveMonitor * &,IImmersiveMonitor * &,winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice const &,winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController const &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc * &,IApplicationViewCollection * &,winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter const &,ABI::Windows::Internal::Shell::IRemoteSessionWindowManager * &>(
                    (unsigned int)v6,
                    (unsigned int)&v7,
                    (unsigned int)va,
                    (unsigned int)va1,
                    v12,
                    v13,
                    v14,
                    v15,
                    (__int64)va2,
                    (__int64)va3,
                    (__int64)va4,
                    v22,
                    (__int64)va5);
  v4 = *v3;
  *v3 = 0LL;
  *a1 = v4;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v6);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return a1;
}
