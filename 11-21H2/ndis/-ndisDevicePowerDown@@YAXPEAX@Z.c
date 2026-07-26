/*
 * XREFs of ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0139C10
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001414C (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014410 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014500 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDL @ 0x1C0018A58 (WPP_RECORDER_SF_qDL.c)
 *     NdisMIndicateStatusEx @ 0x1C0019EA0 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0020370 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020738 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C007D134 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C0103EFC (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C010C274 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010C4F8 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C010C570 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0129E50 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012EE78 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013A96C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDevicePowerDown(_QWORD *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  int v3; // r12d
  _IRP *v4; // r15
  int Status; // r13d
  int LowPart; // ebx
  unsigned int v7; // eax
  _NDIS_IF_BLOCK *v8; // rax
  KIRQL v9; // dl
  unsigned int Flags; // eax
  _NDIS_IF_BLOCK *v11; // rcx
  enum _DEVICE_POWER_STATE CurrentDevicePowerState; // ebx
  int v13; // edx
  int v14; // edx
  int SetMiniportDeviceState; // r14d
  __int64 v16; // rcx
  struct _NDIS_MINIPORT_BLOCK *v17; // rdx
  unsigned __int8 v18; // al
  KIRQL v19; // dl
  _NDIS_IF_BLOCK *IfBlock; // rax
  __int64 v21; // [rsp+38h] [rbp-D0h]
  KIRQL NewIrql[16]; // [rsp+58h] [rbp-B0h] BYREF
  char v23[160]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v25; // [rsp+178h] [rbp+70h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+180h] [rbp+78h]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)(a1 - 677);
  NewIrql[0] = 0;
  v3 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v25 = 0LL;
  ifOperStatusFlags = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x52u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      v1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (v1->Flags & 0x80u) != 0 )
  {
    v4 = 0LL;
    Status = 0;
    LowPart = 4;
  }
  else
  {
    v4 = (_IRP *)a1[4];
    Status = v4->IoStatus.Status;
    LowPart = v4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  }
  a1[4] = 0LL;
  if ( Status < 0 )
  {
    if ( !ndisIsMiniportStarted(v1) || v1->PnPDeviceState != NdisPnPDeviceStarted )
      goto LABEL_22;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x54u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v1,
        v4->IoStatus.Status);
    CurrentDevicePowerState = v1->CurrentDevicePowerState;
    v13 = CurrentDevicePowerState;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = v1->CurrentDevicePowerState;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x55u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v1,
        v21);
      v13 = v1->CurrentDevicePowerState;
    }
    NDIS_COUNT_POWER_TRANSITION(v1, v13);
    if ( (byte_1C00EE581 & 8) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer();
    if ( (v1->PnPFlags & 0x20) != 0 )
    {
      SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(v1, CurrentDevicePowerState, 0xFD010101, 1);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          0xEu,
          0x56u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)v1,
          CurrentDevicePowerState,
          SetMiniportDeviceState);
    }
    else
    {
      SetMiniportDeviceState = ndisPmInitializeMiniport(v1);
    }
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&v1->MiniportOwner);
    if ( SetMiniportDeviceState )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x58u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          v1);
      if ( (byte_1C00EE582 & 0x40) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v16,
          &PowerDownFailedCannotReinitialize,
          &v1->InterfaceGuid,
          (__int64)&v1->InterfaceGuid,
          v1->IfIndex,
          v1->NetLuid.Value,
          SetMiniportDeviceState,
          1,
          0);
      if ( ndisMReferenceIfBlock(v1, 0xFu) )
      {
        IfBlock = v1->IfBlock;
        *(_QWORD *)&v1->OperStatus = 2LL;
        if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
        {
          IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
          v1->IfBlock->ifOperStatusFlags = 0;
          ndisNsiSyncMiniportOperStatusNotification(v1);
          v3 = 1;
        }
        ndisMDereferenceIfBlock(v1, MPIFREF_POWERDOWNFAIL);
      }
      ndisMiniportFatalError(v1, NdisMEventErr_FailedPowerDx);
      if ( (v1->Flags & 0x80u) == 0 )
        v4->IoStatus.Status = -1073741823;
    }
    else
    {
      Ndis::BindEngine::BeginPolicyUpdates(&v1->BindEngine);
      if ( Ndis::BindState::SetPause(&v1->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
      {
        memset(v23, 0, sizeof(v23));
        if ( (unsigned __int8)byte_1C00EC66B >= 4u )
        {
          ndisGetBindLinkNameForTracing(v1, (struct NDIS_PNPTRACE_LOCALS *)v23);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v17,
              0x1Cu,
              0x57u,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              *(unsigned __int16 **)&v23[8],
              *(_QWORD *)v23);
        }
      }
      Ndis::BindEngine::EndPolicyUpdates(&v1->BindEngine, v17);
      Ndis::BindEngine::ApplyBindChanges(&v1->BindEngine, RunSynchronous, 0);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, NewIrql);
      ndisMRestoreOpenHandlers(v1, 4u);
      v18 = ndisIfSetInterfaceState(v1, 1, NewIrql[0]);
      v19 = NewIrql[0];
      v3 = v18;
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, v19);
      _m_prefetchw(&v1->InterlockedFlags);
      if ( (_InterlockedOr((volatile signed __int32 *)&v1->InterlockedFlags, 0) & 0x10) != 0 )
      {
        ndisSetDeviceInterfaceState(v1, 1u);
        _InterlockedAnd((volatile signed __int32 *)&v1->InterlockedFlags, 0xFFFFFFEF);
      }
      ndisNotifyDevicePowerStateChange(v1, (enum _NDIS_DEVICE_POWER_STATE)CurrentDevicePowerState);
      ndisIssueNetEventSetPowerEvent(v1, CurrentDevicePowerState, 1);
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x53u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)v1,
        LowPart);
    NDIS_COUNT_POWER_TRANSITION(v1, LowPart);
    if ( (byte_1C00EE581 & 8) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer();
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, NewIrql);
    v7 = v1->OperStatusFlags & 0xFEFFFFFF;
    v1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
    v1->OperStatusFlags = v7 | 8;
    if ( ndisMReferenceIfBlock(v1, 0xEu) )
    {
      v8 = v1->IfBlock;
      if ( v8->ifOperStatus != NET_IF_OPER_STATUS_DORMANT )
      {
        v8->ifOperStatus = NET_IF_OPER_STATUS_DORMANT;
        v3 = 1;
        v1->IfBlock->ifOperStatusFlags = v1->OperStatusFlags;
      }
      ndisMDereferenceIfBlock(v1, MPIFREF_POWERDOWN);
    }
    v9 = NewIrql[0];
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(&v1->Lock, v9);
    if ( v3 )
      ndisNsiSyncMiniportOperStatusNotification(v1);
    Flags = v1->Flags;
    v1->CurrentDevicePowerState = LowPart;
    if ( (Flags & 0x80u) == 0 )
      PoSetPowerState(v1->DeviceObject, DevicePowerState, (POWER_STATE)LowPart);
  }
  if ( v3 && ndisIsMiniportStarted(v1) && v1->PnPDeviceState == NdisPnPDeviceStarted )
  {
    v11 = v1->IfBlock;
    LODWORD(v25) = 786816;
    HIDWORD(v25) = v11->ifOperStatus;
    ifOperStatusFlags = v11->ifOperStatusFlags;
    StatusIndication.StatusBufferSize = 12;
    StatusIndication.StatusBuffer = &v25;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = v1;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx(v1, &StatusIndication);
  }
LABEL_22:
  v1->LastWakeReason = 65534;
  if ( (byte_1C00EE583 & 4) != 0 )
    McTemplateK0jqxd_EtwWriteTransfer();
  if ( (v1->Flags & 0x80u) == 0 )
    IofCompleteRequest(v4, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x59u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      v1);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
}
