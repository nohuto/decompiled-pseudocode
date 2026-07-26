/*
 * XREFs of ndisWdfDevicePowerOn @ 0x1C00874B4
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00879B0 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001414C (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C001424C (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014500 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     NdisMIndicateStatusEx @ 0x1C0019EA0 (NdisMIndicateStatusEx.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0020370 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x1C0087984 (ndisWdfMiniportUpdatePowerState.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C0103EFC (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C010C274 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C010C570 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012EE78 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C013EEF8 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 */

void __fastcall ndisWdfDevicePowerOn(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // al
  char v3; // si
  enum _NDIS_DEVICE_PNP_EVENT v4; // edx
  unsigned int v5; // r9d
  unsigned int InterlockedFlags; // eax
  unsigned int v7; // ett
  unsigned __int64 *p_Lock; // rcx
  KIRQL v9; // dl
  struct _KTHREAD *CurrentThread; // rax
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  KIRQL v12; // cl
  unsigned int FilterPnPFlags; // eax
  int v14; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  KIRQL NewIrql[4]; // [rsp+48h] [rbp-C0h] BYREF
  BOOL v17[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  char v18[160]; // [rsp+58h] [rbp-B0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v20[4]; // [rsp+168h] [rbp+60h] BYREF
  _DWORD v21[4]; // [rsp+178h] [rbp+70h] BYREF
  unsigned __int64 MiniportXmitLinkSpeed; // [rsp+188h] [rbp+80h]
  unsigned __int64 MiniportRcvLinkSpeed; // [rsp+190h] [rbp+88h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions; // [rsp+198h] [rbp+90h]
  unsigned int MiniportAutoNegotiationFlags; // [rsp+19Ch] [rbp+94h]

  NewIrql[0] = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xDu,
      (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
      a1);
  if ( (byte_1C00EE581 & 8) != 0 )
    McTemplateK0jqxd_EtwWriteTransfer();
  ndisWdfMiniportUpdatePowerState(a1, 1LL);
  KeSetEvent(&a1->OpenReadyEvent.Event, 0, 0);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  ndisMRestoreOpenHandlers(a1, 4u);
  v2 = ndisIfSetInterfaceState(a1, 1, NewIrql[0]);
  a1->MiniportThread = 0LL;
  v3 = v2;
  KeReleaseSpinLock(&a1->Lock, NewIrql[0]);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v7 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v7 != InterlockedFlags );
  if ( (InterlockedFlags & 0x10) != 0 )
  {
    ndisSetDeviceInterfaceState(a1, 1u);
    _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, 0xFFFFFFEF);
  }
  v17[0] = (_BYTE)ndisAcOnLine == 1;
  ndisNotifyMiniports(a1, v4, v17, v5);
  if ( (byte_1C00EE581 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer();
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner);
  ndisIssueNetEventSetPowerEvent(a1, PowerDeviceD0, 0);
  ndisNotifyDevicePowerStateChange(a1, NdisDeviceStateD0);
  if ( (a1->PnPFlags & 0x10000000) != 0 && (a1->Flags & 0x20000000) != 0 )
  {
    while ( 1 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
      p_Lock = &a1->Lock;
      if ( !a1->LockAcquired )
        break;
      v9 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v9);
      KeStallExecutionProcessor(1u);
    }
    a1->LockAcquired = 1;
    CurrentThread = KeGetCurrentThread();
    a1->MiniportThread = 0LL;
    a1->LockThread = CurrentThread;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    MiniportMediaDuplexState = a1->MiniportMediaDuplexState;
    a1->Flags &= ~0x20000000u;
    v21[3] = 0;
    StatusIndication.Flags |= 8u;
    v21[2] = MiniportMediaDuplexState;
    MiniportXmitLinkSpeed = a1->MiniportXmitLinkSpeed;
    MiniportRcvLinkSpeed = a1->MiniportRcvLinkSpeed;
    MiniportPauseFunctions = a1->MiniportPauseFunctions;
    MiniportAutoNegotiationFlags = a1->MiniportAutoNegotiationFlags;
    StatusIndication.StatusBufferSize = 40;
    StatusIndication.StatusBuffer = v21;
    v21[0] = 2621824;
    v21[1] = 1;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807383;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    v12 = NewIrql[0];
    a1->LockThread = 0LL;
    a1->LockAcquired = 0;
    if ( v12 != 2 )
      KeLowerIrql(v12);
  }
  ndisSignalD0RequestComplete(a1, 0);
  FilterPnPFlags = a1->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x100) != 0 )
  {
    a1->FilterPnPFlags = FilterPnPFlags & 0xFFFFFEFF;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
    {
      memset(v18, 0, sizeof(v18));
      if ( (unsigned __int8)byte_1C00EC66B >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v18);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v14,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
            *(unsigned __int16 **)&v18[8],
            *(_QWORD *)v18);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 1);
  }
  if ( !ndisAoAcCapable && !ndisAoAcTest || v3 )
  {
    if ( ndisMReferenceIfBlock(a1, 0xDu) )
    {
      IfBlock = a1->IfBlock;
      v20[0] = 786816;
      v20[1] = IfBlock->ifOperStatus;
      v20[2] = IfBlock->ifOperStatusFlags;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = v20;
      StatusIndication.SourceHandle = a1;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx(a1, &StatusIndication);
      ndisMDereferenceIfBlock(a1, MPIFREF_DEVPOWERUP);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xFu,
      (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
      a1);
}
