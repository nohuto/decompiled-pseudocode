/*
 * XREFs of ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x18043CAD0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAKXZ @ 0x180201E60 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@W.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAKXZ @ 0x180201E80 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_180201E80.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAKXZ @ 0x180201EA0 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_180201EA0.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAKXZ @ 0x180201EC0 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_180201EC0.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCI@E$AAAKXZ @ 0x180201EE0 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_180201EE0.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ??1SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA@XZ @ 0x18042ED58 (--1SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__SwitchItemDataViewImpl_Multitasking_ComposableShell_Internal_Windows__UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 120));
  if ( !v2 )
  {
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::~SwitchItemDataViewImpl((void **)a1);
    v3 = *(Platform::Details::ControlBlock **)(a1 + 120);
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
