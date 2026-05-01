/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x18043C9D0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@W7E$AAAKXZ @ 0x180201D00 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Exp.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBA@E$AAAKXZ @ 0x180201D20 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_180201D20.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBI@E$AAAKXZ @ 0x180201D40 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_180201D40.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCA@E$AAAKXZ @ 0x180201D60 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_180201D60.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCI@E$AAAKXZ @ 0x180201D80 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_180201D80.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x180201DA0 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_180201DA0.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x180201DC0 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_180201DC0.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____VectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // edi
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  Platform::Details::ControlBlock *v5; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 104));
  if ( !v2 )
  {
    v3 = *(std::_Ref_count_base **)(a1 + 88);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    v4 = *(std::_Ref_count_base **)(a1 + 72);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    v5 = *(Platform::Details::ControlBlock **)(a1 + 104);
    Platform::Details::ControlBlock::ReleaseTarget(v5);
    Platform::Details::ControlBlock::__abi_Release(v5);
  }
  return v2;
}
