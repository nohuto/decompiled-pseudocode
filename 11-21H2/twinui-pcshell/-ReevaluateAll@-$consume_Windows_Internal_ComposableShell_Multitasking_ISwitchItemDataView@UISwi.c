/*
 * XREFs of ?ReevaluateAll@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x1805FB344
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FB4D8 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs___lambda_ac11a78ed3d60abcb52a125606654bab___::Invoke @ 0x1805FE970 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805FE970.c)
 *     ?VirtualDesktopDestroyFailed@TaskViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1805FEE60 (-VirtualDesktopDestroyFailed@TaskViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z.c)
 *     ?VirtualDesktopDestroyed@TaskViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1805FEF30 (-VirtualDesktopDestroyed@TaskViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::ReevaluateAll(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
