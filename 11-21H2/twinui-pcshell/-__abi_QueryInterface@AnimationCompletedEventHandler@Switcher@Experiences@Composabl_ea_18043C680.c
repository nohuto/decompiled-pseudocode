/*
 * XREFs of ?__abi_QueryInterface@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18043C680
 * Callers:
 *     ?__abi_QueryInterface@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180201820 (-__abi_QueryInterface@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@Window.c)
 *     ?__abi_QueryInterface@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180201840 (-__abi_QueryInterface@AnimationCompletedEventHandler@Switcher@Experiences@Composabl_ea_180201840.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180012ED4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180127738 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180421318 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::__abi_QueryInterface(
        __int64 a1,
        Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  _QWORD *v3; // r9
  void **v4; // r11
  Platform::Guid *v5; // rcx
  Platform::Guid *v6; // r10
  __int64 v7; // r8
  struct Platform::Guid *v8; // r10
  __int64 v9; // rcx

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(
         v2,
         &_uuidof__AU__abi_IDelegate_AnimationCompletedEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__)
    || v3[4] && Platform::Guid::Equals(v5, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    v9 = (__int64)(v3 + 3);
    goto LABEL_11;
  }
  if ( Platform::Guid::Equals(
         v6,
         &_uuidof__AU__abi_IDelegate_AnimationCompletedEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__) )
  {
    v9 = v7;
LABEL_11:
    *v4 = v3;
    __abi_FTMWeakRefData::Increment(v9);
    return 0LL;
  }
  if ( !*(_QWORD *)(v7 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v7 & -(__int64)(*(_QWORD *)(v7 + 8) != 0LL)),
                       v8,
                       v4) )
  {
    return 2147500034LL;
  }
  return 0LL;
}
