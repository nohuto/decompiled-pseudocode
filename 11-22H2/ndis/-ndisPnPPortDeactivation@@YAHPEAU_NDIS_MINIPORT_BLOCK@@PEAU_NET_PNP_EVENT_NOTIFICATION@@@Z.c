/*
 * XREFs of ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0080C4C
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C007FEF0 (NdisMNetPnPEvent.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0014C8C (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016378 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DAE4 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0080564 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1C008136C (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C0116700 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned int v2; // esi
  unsigned int v5; // edi
  const struct _GUID *v6; // rcx
  unsigned int *Buffer; // r15
  unsigned int v8; // r14d
  KIRQL v9; // dl
  __int64 v10; // rcx
  unsigned int Flags; // ecx
  KIRQL v12; // dl
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int *v15; // r12
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  __int16 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r12d
  KIRQL v22; // dl
  __int64 v24; // [rsp+30h] [rbp-D0h]
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh]
  struct _NET_PNP_EVENT_NOTIFICATION v27; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  NewIrql[0] = 0;
  v26 = 0;
  v5 = 0;
  memset(&v27, 0, sizeof(v27));
  v6 = &WPP_740369199f403c504b96f54c3be14249_Traceguids;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x18u,
      (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
      a1);
    v6 = &WPP_740369199f403c504b96f54c3be14249_Traceguids;
  }
  Buffer = (unsigned int *)a2->NetPnPEvent.Buffer;
  v8 = a2->NetPnPEvent.BufferLength >> 2;
  if ( Buffer && v8 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
    if ( (a1->PnPFlags & 0x80u) == 0 || *Buffer )
    {
      v15 = Buffer;
      while ( *v15 )
      {
        PortByPortNumber = ndisFindPortByPortNumber(a1, *v15);
        if ( !PortByPortNumber )
        {
          v5 = -1071448019;
          ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, v2);
          v26 = 0;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = Buffer[v2];
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x1Eu,
              (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
              (char)a1,
              v24);
          }
          if ( (byte_1C00F7644 & 0x40) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              v19,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              Buffer[v2]);
          goto LABEL_43;
        }
        if ( PortByPortNumber->PortPnPState != NdisPortPnPStateActivated )
        {
          v5 = -1071448018;
          ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, v2);
          v26 = 0;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = Buffer[v2];
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x1Fu,
              (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
              (char)a1,
              v24);
          }
          if ( (byte_1C00F7644 & 0x40) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              v18,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              7,
              Buffer[v2]);
          goto LABEL_43;
        }
        ++v26;
        --a1->NumberOfActivePorts;
        PortByPortNumber->PrevPortPnPState = PortByPortNumber->PortPnPState;
        PortByPortNumber->PortPnPState = NdisPortPnPStateAllocated;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) != v17 )
        {
          LODWORD(v24) = *v15;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x17u,
            0x20u,
            (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
            (char)a1,
            v24);
        }
        ++v2;
        ++v15;
        if ( v2 >= v8 )
          goto LABEL_43;
      }
      v5 = -1071448019;
      ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, v2);
      v26 = 0;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x1Du,
          (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
          a1);
      if ( (byte_1C00F7644 & 0x40) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v20,
          &PnPPortDeactivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          5,
          0);
LABEL_43:
      v21 = v26;
      v22 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v22);
      if ( v21 )
      {
        ndisInitializeNetPnPEvent(&v27, 0LL);
        v27.PortNumber = a2->PortNumber;
        v27.NetPnPEvent.Buffer = a2->NetPnPEvent.Buffer;
        v27.NetPnPEvent.BufferLength = a2->NetPnPEvent.BufferLength;
        v27.NetPnPEvent.NetEvent = NetEventPortDeactivation;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v27);
      }
    }
    else if ( v8 <= 1 )
    {
      Flags = a1->Flags;
      a1->MiniportThread = 0LL;
      v12 = NewIrql[0];
      if ( (Flags & 0x10000) != 0 )
      {
        a1->Flags = Flags & 0xFFFEFFFF;
        KeReleaseSpinLock(&a1->Lock, v12);
        ndisMSetMiniportReadyForBinding(a1, 0, Reason_DefaultPortNotActive, RunSynchronous);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x17u,
            0x1Cu,
            (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
            a1);
        if ( byte_1C00F7641 < 0 )
          McTemplateK0jqxq_EtwWriteTransfer(
            v14,
            (__int64)&DefaultPortDeactivated,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            1);
      }
      else
      {
        KeReleaseSpinLock(&a1->Lock, NewIrql[0]);
        v5 = -1071448018;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x17u,
            0x1Bu,
            (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
            a1);
        if ( (byte_1C00F7644 & 0x40) != 0 )
          McTemplateK0jqxqq_EtwWriteTransfer(
            v13,
            &PnPPortDeactivationFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            6,
            0);
      }
    }
    else
    {
      v9 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v9);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x1Au,
          (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
          a1);
      if ( (byte_1C00F7644 & 0x40) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v10,
          &PnPPortDeactivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          5,
          0);
      v5 = -1071448019;
    }
  }
  else
  {
    v5 = -1073741811;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x17u,
        0x19u,
        (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
        a1);
    if ( (byte_1C00F7644 & 0x40) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        (__int64)v6,
        &PnPPortDeactivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x21u,
      (struct _GUID *)&WPP_740369199f403c504b96f54c3be14249_Traceguids,
      a1);
  return v5;
}
