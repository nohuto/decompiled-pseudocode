/*
 * XREFs of ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0063904
 * Callers:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0033FFC (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C0063E40 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C002A9D0 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0112018 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C01161A0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C0116700 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167E0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C01174D4 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013ABE8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0153DAC (-ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIMInitializeDeviceInstanceInternal(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  const struct _UNICODE_STRING *v4; // r8
  int v5; // edx
  unsigned int v6; // edi
  char v8[160]; // [rsp+40h] [rbp-A8h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Eu,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      a2);
  ndisReinitializeMiniportBlock(a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->CurrentDevicePowerState = PowerDeviceUnspecified;
    a1->DriverPowerState = PowerDeviceUnspecified;
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner);
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
    {
      memset(v8, 0, sizeof(v8));
      if ( (unsigned __int8)byte_1C00F5443 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v8);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v5,
            0x1Cu,
            0x2Fu,
            &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
            *(unsigned __int16 **)&v8[8],
            *(_QWORD *)v8);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  }
  a1->DeviceContext = a2;
  v6 = ndisPnPStartDevice(a1, 0LL, v4);
  if ( v6 )
    v6 = -1073741823;
  else
    ndisMSetMiniportReadyForBinding(a1, 1, Reason_RemovingMiniport|Reason_DriverNotReady, RunSynchronous);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x30u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      (char)a2,
      v6);
  return v6;
}
