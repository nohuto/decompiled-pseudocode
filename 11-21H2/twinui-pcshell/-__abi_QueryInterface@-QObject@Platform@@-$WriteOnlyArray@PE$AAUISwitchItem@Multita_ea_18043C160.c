/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18043C160
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180201580 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@Composa.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802015A0 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multita_ea_1802015A0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802015C0 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multita_ea_1802015C0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802015E0 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multita_ea_1802015E0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18043BAE0 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_18043BAE0.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180012ED4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180127738 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180421318 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform____WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        __int64 a1,
        Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // r11
  Platform::Guid *v5; // rcx
  Platform::Guid *v6; // rcx
  Platform::Guid *v7; // r10
  Platform::Guid *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void **v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  struct Platform::Guid *v15; // r10

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(
         v5,
         &_uuidof__AU__I__WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00PublicNonVirtuals_Platform__)
    || *(_QWORD *)(v3 + 64) && Platform::Guid::Equals(v6, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v4 = v3;
    v13 = v3 + 56;
    goto LABEL_15;
  }
  if ( Platform::Guid::Equals(v7, &_uuidof__AUIDisposable_Platform__) )
  {
    v12 = (v10 + 8) & -(__int64)(v10 != 0);
LABEL_8:
    *v11 = (void *)v12;
    v13 = v9;
LABEL_15:
    __abi_FTMWeakRefData::Increment(v13);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v8, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v12 = (v14 + 24) & -(__int64)(v14 != 0);
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(v9 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v9 & -(__int64)(*(_QWORD *)(v9 + 8) != 0LL)),
                       v15,
                       v11) )
  {
    return 2147500034LL;
  }
  return 0LL;
}
