/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180012DA0
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180203E40 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180203E60 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180203E80 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180203EA0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180203EC0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180203EE0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180203F00 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180203F20 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180203F40 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180012ED4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180127738 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180421318 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180446140 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlAllUpViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        _QWORD *a1,
        Platform::Guid *a2,
        void **a3)
{
  Platform::Guid *v6; // rcx
  Platform::Guid *v7; // rcx
  Platform::Guid *v8; // rcx
  Platform::Guid *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // rcx
  Platform::Guid *v14; // rcx
  Platform::Guid *v15; // rcx
  unsigned __int64 v16; // rcx
  Platform::Guid *v17; // rcx

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(v7, &_uuidof__AU__IXamlAllUpViewControllerPublicNonVirtuals__)
    || a1[17] && Platform::Guid::Equals(v8, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *a3 = a1;
    v12 = a1 + 16;
    goto LABEL_9;
  }
  if ( Platform::Guid::Equals(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v11 = (unsigned __int64)(a1 + 20) & -(__int64)(a1 != 0LL);
LABEL_8:
    *a3 = (void *)v11;
    v12 = (_QWORD *)v10;
LABEL_9:
    __abi_FTMWeakRefData::Increment(v12);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v9, &_uuidof__AUIXamlMultitaskingViewController__) )
  {
    v16 = (unsigned __int64)(a1 + 2);
    goto LABEL_14;
  }
  if ( Platform::Guid::Equals(v14, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__) )
  {
    v16 = (unsigned __int64)(a1 + 3);
LABEL_14:
    v11 = v16 & -(__int64)(a1 != 0LL);
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(v15, &_uuidof__AU__IXamlBaseViewControllerPublicNonVirtuals__) )
  {
    v16 = (unsigned __int64)(a1 + 1);
    goto LABEL_14;
  }
  if ( Platform::Guid::Equals(v17, &_uuidof__AUIMonitorFrameDismissAnimationCallback__) )
  {
    v16 = (unsigned __int64)(a1 + 19);
    goto LABEL_14;
  }
  if ( *(_QWORD *)(v10 + 8)
    && !__abi_FTMWeakRefData::__abi_QueryInterface(
          (__abi_FTMWeakRefData *)(v10 & -(__int64)(*(_QWORD *)(v10 + 8) != 0LL)),
          a2,
          a3) )
  {
    return 0LL;
  }
  return ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(a1 + 1, a2, a3);
}
