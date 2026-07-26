/*
 * XREFs of ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C007B0B4
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
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0020370 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007B084 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z @ 0x1C007BD84 (-ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C010BB6C (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortActivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned int v4; // esi
  int v5; // r15d
  struct _NDIS_PORT *Buffer; // rdi
  KIRQL v7; // dl
  KIRQL v8; // dl
  unsigned int Flags; // eax
  KIRQL v10; // dl
  KIRQL v11; // dl
  unsigned int PortNumber; // edx
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  int v14; // edx
  KIRQL v15; // dl
  __int64 v17; // [rsp+30h] [rbp-D0h]
  KIRQL NewIrql[16]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v19; // [rsp+50h] [rbp-B0h] BYREF

  NewIrql[0] = 0;
  v4 = 0;
  v5 = 0;
  memset(&v19, 0, sizeof(v19));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0xEu,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  Buffer = (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer;
  if ( Buffer )
  {
    if ( (a1->PnPFlags & 0x80u) == 0 || Buffer->PortCharacteristics.PortNumber )
    {
      while ( 1 )
      {
        PortNumber = Buffer->PortCharacteristics.PortNumber;
        if ( !PortNumber )
        {
          v4 = -1071448019;
          ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer, Buffer);
          v5 = 0;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x13u,
              (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
              a1);
          if ( (byte_1C00EE583 & 0x20) != 0 )
            goto LABEL_49;
          goto LABEL_50;
        }
        PortByPortNumber = ndisFindPortByPortNumber(a1, PortNumber);
        if ( !PortByPortNumber )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v17) = v14;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x14u,
              (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
              (char)a1,
              v17);
          }
          if ( (byte_1C00EE583 & 0x20) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer();
          v4 = -1071448019;
          ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer, Buffer);
          v5 = 0;
          goto LABEL_50;
        }
        if ( PortByPortNumber->PortPnPState != NdisPortPnPStateAllocated )
          break;
        ++a1->NumberOfActivePorts;
        PortByPortNumber->PrevPortPnPState = PortByPortNumber->PortPnPState;
        Buffer->NdisReserved = PortByPortNumber;
        PortByPortNumber->PortPnPState = NdisPortPnPStateActivated;
        *(_OWORD *)&PortByPortNumber->PortCharacteristics.Header.Type = *(_OWORD *)&Buffer->PortCharacteristics.Header.Type;
        *(_OWORD *)&PortByPortNumber->PortCharacteristics.MediaConnectState = *(_OWORD *)&Buffer->PortCharacteristics.MediaConnectState;
        *(_OWORD *)&PortByPortNumber->PortCharacteristics.RcvLinkSpeed = *(_OWORD *)&Buffer->PortCharacteristics.RcvLinkSpeed;
        *(_OWORD *)&PortByPortNumber->PortCharacteristics.RcvControlState = *(_OWORD *)&Buffer->PortCharacteristics.RcvControlState;
        if ( (Buffer->PortCharacteristics.Flags & 1) != 0 )
        {
          PortByPortNumber->PortCharacteristics.SendControlState = a1->DefaultSendControlState;
          PortByPortNumber->PortCharacteristics.RcvControlState = a1->DefaultRcvControlState;
          PortByPortNumber->PortCharacteristics.SendAuthorizationState = a1->DefaultSendAuthorizationState;
          PortByPortNumber->PortCharacteristics.RcvAuthorizationState = a1->DefaultRcvAuthorizationState;
        }
        ++v5;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          LODWORD(v17) = Buffer->PortCharacteristics.PortNumber;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x17u,
            0x16u,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            (char)a1,
            v17);
        }
        Buffer = Buffer->Next;
        if ( !Buffer )
          goto LABEL_50;
      }
      v4 = -1071448018;
      ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer, Buffer);
      v5 = 0;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = Buffer->PortCharacteristics.PortNumber;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x15u,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1,
          v17);
      }
      if ( (byte_1C00EE583 & 0x20) != 0 )
LABEL_49:
        McTemplateK0jqxqq_EtwWriteTransfer();
LABEL_50:
      v15 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v15);
      if ( v5 )
      {
        ndisInitializeNetPnPEvent(&v19, 0LL);
        v19.PortNumber = a2->PortNumber;
        v19.NetPnPEvent.Buffer = a2->NetPnPEvent.Buffer;
        v19.NetPnPEvent.BufferLength = a2->NetPnPEvent.BufferLength;
        v19.NetPnPEvent.NetEvent = NetEventPortActivation;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v19);
      }
    }
    else if ( Buffer->Next )
    {
      v8 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v8);
      v4 = -1071448019;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x10u,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          a1);
      if ( (byte_1C00EE583 & 0x20) != 0 )
        goto LABEL_7;
    }
    else
    {
      Flags = a1->Flags;
      if ( (Flags & 0x10000) != 0 )
      {
        v10 = NewIrql[0];
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v10);
        v4 = -1071448018;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x17u,
            0x11u,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            a1);
        if ( (byte_1C00EE583 & 0x20) != 0 )
          goto LABEL_7;
      }
      else
      {
        a1->Flags = Flags | 0x10000;
        if ( (Buffer->PortCharacteristics.Flags & 1) == 0 )
        {
          a1->DefaultPortSendControlState = Buffer->PortCharacteristics.SendControlState;
          a1->DefaultPortRcvControlState = Buffer->PortCharacteristics.RcvControlState;
          a1->DefaultPortSendAuthorizationState = Buffer->PortCharacteristics.SendAuthorizationState;
          a1->DefaultPortRcvAuthorizationState = Buffer->PortCharacteristics.RcvAuthorizationState;
        }
        ndisIfSetInterfaceState(a1, 1, NewIrql[0]);
        v11 = NewIrql[0];
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v11);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x17u,
            0x12u,
            (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
            a1);
        if ( byte_1C00EE581 < 0 )
          McTemplateK0jqxd_EtwWriteTransfer();
        ndisMSetMiniportReadyForBinding(a1, 1, Reason_DefaultPortNotActive, RunAsynchronous);
      }
    }
  }
  else
  {
    v7 = NewIrql[0];
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
    v4 = -1073741811;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x17u,
        0xFu,
        (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
        a1);
    if ( (byte_1C00EE583 & 0x20) != 0 )
LABEL_7:
      McTemplateK0jqxqq_EtwWriteTransfer();
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x17u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v17);
  }
  return v4;
}
