/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIFullScreenPositionerNotificationService@@UIFullScreenPositionerTestHandler@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CD3B0
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$ChainInterfaces@UIFullScreenPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIFullScreenPositionerNotificationService@@UIFullScreenPositionerTestHandler@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CB2B0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800CB2B0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewChangeListener,ITabletModeChangeListener,IFullScreenPositionerNotificationService,IFullScreenPositionerTestHandler,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  _QWORD *v10; // r10
  __int64 v11; // r11

  if ( *a2 == 1920966295
    && a2[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
    && a2[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
    && a2[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_86fb57a6_3c81_4f40_a971_6280be4e526e);
    v8 = 0;
    if ( IsEqualGUID
      || (v7 += 8LL, *v5 == -1229341531)
      && v5[1] == *(_DWORD *)&GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8.Data2
      && v5[2] == *(_DWORD *)GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8.Data4
      && v5[3] == *(_DWORD *)&GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8.Data4[4]
      || InlineIsEqualGUID(v4, &GUID_5ec05508_a594_4da2_9999_16c34bd9808f) )
    {
      *v6 = v7;
    }
    else if ( InlineIsEqualGUID(v9, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
