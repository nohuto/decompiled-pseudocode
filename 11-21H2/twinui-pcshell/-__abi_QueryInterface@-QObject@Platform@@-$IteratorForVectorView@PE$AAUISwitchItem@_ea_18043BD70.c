/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18043BD70
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802012E0 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180201300 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@_ea_180201300.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180201320 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@_ea_180201320.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180201340 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@_ea_180201340.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180201360 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@_ea_180201360.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180012ED4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180127738 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180421318 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_Collections_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
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
  Platform::Guid *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  struct Platform::Guid *v17; // r10

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(
         v5,
         &_uuidof__AU__IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows__)
    || *(_QWORD *)(v3 + 96) && Platform::Guid::Equals(v6, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v4 = v3;
    v13 = v3 + 88;
    goto LABEL_18;
  }
  if ( Platform::Guid::Equals(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v12 = (v10 + 32) & -(__int64)(v10 != 0);
LABEL_8:
    *v11 = (void *)v12;
    v13 = v9;
LABEL_18:
    __abi_FTMWeakRefData::Increment(v13);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v8, &_uuidof__AUIBindableIterator_Interop_Xaml_UI_Windows__) )
  {
    v16 = v15 + 16;
LABEL_11:
    v12 = v16 & -(__int64)(v15 != 0);
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(
         v14,
         &_uuidof__AU__I__IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PublicNonVirtuals_Details_Collections_Platform__) )
  {
    v16 = v15 + 8;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(v9 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v9 & -(__int64)(*(_QWORD *)(v9 + 8) != 0LL)),
                       v17,
                       v11) )
  {
    return 2147500034LL;
  }
  return 0LL;
}
