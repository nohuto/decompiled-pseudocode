/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs___lambda_ac11a78ed3d60abcb52a125606654bab___::Invoke @ 0x1805FE970
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReevaluateAll@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x1805FB344 (-ReevaluateAll@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwi.c)
 *     ?EventType@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPerMonitorCollectionChangedEventArgs@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AW4VirtualDesktopPerMonitorCollectionChangedEventType@Multitasking@ComposableShell@Internal@Windows@3@XZ @ 0x1805FE530 (-EventType@-$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPerMonitorColl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs___lambda_ac11a78ed3d60abcb52a125606654bab___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v8; // [rsp+50h] [rbp+18h]
  __int64 *v9; // [rsp+58h] [rbp+20h]

  v4 = (_QWORD *)(a1 + 8);
  v6 = a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  v8 = &v6;
  v7 = a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  v9 = &v7;
  try
  {
    if ( (unsigned int)winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPerMonitorCollectionChangedEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs>::EventType(&v6) == 2 )
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::ReevaluateAll(v4);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
