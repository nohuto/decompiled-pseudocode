/*
 * XREFs of ?VirtualDesktopCollectionChanged@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopCollection@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@UIVirtualDesktopCollectionChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180077D0C
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??$from_com_ref@AEBUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@@?$weak_ref@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@1@@Z @ 0x18006E7C8 (--$from_com_ref@AEBUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopCollection<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection>::VirtualDesktopCollectionChanged(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[8])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection>::from_com_ref<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
