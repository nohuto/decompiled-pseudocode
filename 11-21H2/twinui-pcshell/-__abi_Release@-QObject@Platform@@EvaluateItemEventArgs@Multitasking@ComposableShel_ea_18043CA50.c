/*
 * XREFs of ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x18043CA50
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAKXZ @ 0x180201DE0 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Wi.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAKXZ @ 0x180201E00 (-__abi_Release@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableSh.c)
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAKXZ @ 0x180201E20 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShel_ea_180201E20.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAKXZ @ 0x180201E40 (-__abi_Release@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking_ea_180201E40.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__EvaluateItemEventArgs_Multitasking_ComposableShell_Internal_Windows__UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  Platform::Details::ControlBlock *v4; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 56));
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = *(Platform::Details::ControlBlock **)(a1 + 56);
    Platform::Details::ControlBlock::ReleaseTarget(v4);
    Platform::Details::ControlBlock::__abi_Release(v4);
  }
  return v2;
}
