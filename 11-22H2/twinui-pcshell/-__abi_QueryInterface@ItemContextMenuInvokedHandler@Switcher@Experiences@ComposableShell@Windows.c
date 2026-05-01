/*
 * XREFs of ?__abi_QueryInterface@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180078F90
 * Callers:
 *     ?__abi_QueryInterface@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802B21E0 (-__abi_QueryInterface@ItemContextMenuInvokedHandler@Switcher@Experiences@Composable_ea_1802B21E0.c)
 *     ?__abi_QueryInterface@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802B2200 (-__abi_QueryInterface@ItemContextMenuInvokedHandler@Switcher@Experiences@Composable_ea_1802B2200.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1800792DC (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180079308 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180767078 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler::__abi_QueryInterface(
        __int64 a1,
        Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  _QWORD *v3; // r9
  void **v4; // r11
  Platform::Guid *v5; // rcx
  Platform::Guid *v6; // r10
  _QWORD *v7; // rcx
  __int64 v9; // r8
  struct Platform::Guid *v10; // r10

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(
         v2,
         &_uuidof__AVItemContextMenuInvokedHandler_Switcher_Experiences_ComposableShell_WindowsInternal__)
    || v3[4] && Platform::Guid::Equals(v5, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    v7 = v3 + 3;
LABEL_6:
    *v4 = v3;
    __abi_FTMWeakRefData::Increment(v7);
    return 0LL;
  }
  if ( Platform::Guid::Equals(
         v6,
         &_uuidof__AU__abi_IDelegate_ItemContextMenuInvokedHandler_Switcher_Experiences_ComposableShell_WindowsInternal__) )
  {
    v7 = (_QWORD *)v9;
    goto LABEL_6;
  }
  if ( *(_QWORD *)(v9 + 8) )
    return __abi_FTMWeakRefData::__abi_QueryInterface(
             (__abi_FTMWeakRefData *)(v9 & -(__int64)(*(_QWORD *)(v9 + 8) != 0LL)),
             v10,
             v4) != 0
         ? 0x80004002
         : 0;
  else
    return 2147500034LL;
}
