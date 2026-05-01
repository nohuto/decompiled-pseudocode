/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@UE$AAAKXZ @ 0x18043C8E0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@W7E$AAAKXZ @ 0x180201B40 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@S.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBA@E$AAAKXZ @ 0x180201B60 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@Composa.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBI@E$AAAKXZ @ 0x180201B80 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_180201B80.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WCA@E$AAAKXZ @ 0x180201BA0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_180201BA0.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WCI@E$AAAKXZ @ 0x180201BC0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_180201BC0.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // edi
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  Platform::Details::ControlBlock *v5; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 88));
  if ( !v2 )
  {
    v3 = *(std::_Ref_count_base **)(a1 + 72);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    v4 = *(std::_Ref_count_base **)(a1 + 56);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    v5 = *(Platform::Details::ControlBlock **)(a1 + 88);
    Platform::Details::ControlBlock::ReleaseTarget(v5);
    Platform::Details::ControlBlock::__abi_Release(v5);
  }
  return v2;
}
