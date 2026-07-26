/*
 * XREFs of ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C007B738
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C007AA30 (NdisMNetPnPEvent.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0015688 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001CC34 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007B084 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1C007BE60 (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C010BB6C (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned int v2; // r14d
  unsigned int v5; // edi
  unsigned int *Buffer; // r15
  unsigned int v7; // esi
  KIRQL v8; // dl
  unsigned int Flags; // ecx
  KIRQL v10; // dl
  unsigned int *v11; // r12
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  __int16 v13; // r10
  int v14; // r12d
  KIRQL v15; // dl
  __int64 v17; // [rsp+30h] [rbp-D0h]
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh]
  struct _NET_PNP_EVENT_NOTIFICATION v20; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  NewIrql[0] = 0;
  v19 = 0;
  v5 = 0;
  memset(&v20, 0, sizeof(v20));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x18u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      a1);
  Buffer = (unsigned int *)a2->NetPnPEvent.Buffer;
  v7 = a2->NetPnPEvent.BufferLength >> 2;
  if ( Buffer && v7 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
    if ( (a1->PnPFlags & 0x80u) == 0 || *Buffer )
    {
      v11 = Buffer;
      while ( 1 )
      {
        if ( !*v11 )
        {
          v5 = -1071448019;
          ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, v2);
          v19 = 0;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x1Du,
              (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
              a1);
          if ( (byte_1C00EE584 & 0x40) != 0 )
            goto LABEL_42;
          goto LABEL_43;
        }
        PortByPortNumber = ndisFindPortByPortNumber(a1, *v11);
        if ( !PortByPortNumber )
        {
          v5 = -1071448019;
          ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, v2);
          v19 = 0;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v17) = Buffer[v2];
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x1Eu,
              (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
              (char)a1,
              v17);
          }
          if ( (byte_1C00EE584 & 0x40) != 0 )
            goto LABEL_42;
          goto LABEL_43;
        }
        if ( PortByPortNumber->PortPnPState != NdisPortPnPStateActivated )
          break;
        ++v19;
        --a1->NumberOfActivePorts;
        PortByPortNumber->PrevPortPnPState = PortByPortNumber->PortPnPState;
        PortByPortNumber->PortPnPState = NdisPortPnPStateAllocated;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) != v13 )
        {
          LODWORD(v17) = *v11;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x17u,
            0x20u,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            (char)a1,
            v17);
        }
        ++v2;
        ++v11;
        if ( v2 >= v7 )
          goto LABEL_43;
      }
      v5 = -1071448018;
      ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, v2);
      v19 = 0;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = Buffer[v2];
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x1Fu,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1,
          v17);
      }
      if ( (byte_1C00EE584 & 0x40) != 0 )
LABEL_42:
        McTemplateK0jqxqq_EtwWriteTransfer();
LABEL_43:
      v14 = v19;
      v15 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v15);
      if ( v14 )
      {
        ndisInitializeNetPnPEvent(&v20, 0LL);
        v20.PortNumber = a2->PortNumber;
        v20.NetPnPEvent.Buffer = a2->NetPnPEvent.Buffer;
        v20.NetPnPEvent.BufferLength = a2->NetPnPEvent.BufferLength;
        v20.NetPnPEvent.NetEvent = NetEventPortDeactivation;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v20);
      }
    }
    else
    {
      if ( v7 > 1 )
      {
        v8 = NewIrql[0];
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v8);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x17u,
            0x1Au,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            a1);
        if ( (byte_1C00EE584 & 0x40) != 0 )
          McTemplateK0jqxqq_EtwWriteTransfer();
        v5 = -1071448019;
        goto LABEL_49;
      }
      Flags = a1->Flags;
      a1->MiniportThread = 0LL;
      v10 = NewIrql[0];
      if ( (Flags & 0x10000) != 0 )
      {
        a1->Flags = Flags & 0xFFFEFFFF;
        KeReleaseSpinLock(&a1->Lock, v10);
        ndisMSetMiniportReadyForBinding(a1, 0, Reason_DefaultPortNotActive, RunSynchronous);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x17u,
            0x1Cu,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            a1);
        if ( byte_1C00EE581 < 0 )
          McTemplateK0jqxd_EtwWriteTransfer();
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
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            a1);
        if ( (byte_1C00EE584 & 0x40) != 0 )
LABEL_48:
          McTemplateK0jqxqq_EtwWriteTransfer();
      }
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
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        a1);
    if ( (byte_1C00EE584 & 0x40) != 0 )
      goto LABEL_48;
  }
LABEL_49:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x21u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      a1);
  return v5;
}
