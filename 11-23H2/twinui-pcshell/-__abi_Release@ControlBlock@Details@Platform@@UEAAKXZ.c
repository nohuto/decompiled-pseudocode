/*
 * XREFs of ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x180081DFC
 * Callers:
 *     ?__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180081C70 (-__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInt.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x180081CE0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x1802ED540 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAKXZ @ 0x180767150 (-__abi_Release@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAKXZ.c)
 *     ?__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18076719C (-__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x18077B100 (-__abi_Release@-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAKXZ @ 0x180783E90 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180783E90.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@UE$AAAKXZ @ 0x180783F20 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextM_ea_180783F20.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x180783FA0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Swi_ea_180783FA0.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x180784010 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_180784010.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAKXZ @ 0x180784090 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMeta_ea_180784090.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ @ 0x180784120 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ @ 0x18078A7C0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ @ 0x18078CC90 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x18078D760 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Platform::Details::ControlBlock::__abi_Release(Platform::Details::ControlBlock *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    if ( *((_BYTE *)this + 25) )
      Platform::Details::Heap::AlignedFree(this);
    else
      Platform::Details::Heap::Free(this);
  }
  return v1;
}
