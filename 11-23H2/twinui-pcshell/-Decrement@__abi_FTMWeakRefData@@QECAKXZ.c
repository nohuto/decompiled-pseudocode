/*
 * XREFs of ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180081D44
 * Callers:
 *     ?__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180081C70 (-__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInt.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x180081CE0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x1802ED540 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAKXZ @ 0x180767150 (-__abi_Release@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAKXZ.c)
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
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_FTMWeakRefData::Decrement(int **a1)
{
  int *v2; // rax
  unsigned __int32 v3; // edi

  if ( !*a1 || (*a1)[3] < 0 )
    return 0xFFFFFFFFLL;
  v2 = *a1;
  v3 = _InterlockedDecrement(*a1 + 3);
  if ( !v3 )
  {
    v2[3] = -1073741824;
    if ( a1[1] && a1[1] != (int *)-1LL )
    {
      (*(void (__fastcall **)(int *))(*(_QWORD *)a1[1] + 16LL))(a1[1]);
      a1[1] = 0LL;
    }
    if ( __abi_module )
      (*(void (__fastcall **)(struct __abi_Module *))(*(_QWORD *)__abi_module + 8LL))(__abi_module);
  }
  return v3;
}
