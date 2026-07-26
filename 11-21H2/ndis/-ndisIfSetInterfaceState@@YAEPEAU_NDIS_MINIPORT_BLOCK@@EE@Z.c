/*
 * XREFs of ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0020370
 * Callers:
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017FD0 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C001834C (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002CE64 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C007B0B4 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C00874B4 (ndisWdfDevicePowerOn.c)
 *     ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D5D0 (-ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0139680 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0139C10 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013A96C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020668 (-ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C0025E0C (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 */

char __fastcall ndisIfSetInterfaceState(struct _NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  unsigned int OperStatusFlags; // edi
  char v4; // bp
  KIRQL v5; // si
  struct _NDIS_IF_BLOCK *v8; // rax
  struct _NDIS_IF_BLOCK *v9; // rdi
  _NET_IF_OPER_STATUS OperStatus; // ecx
  unsigned __int8 *p_ifOperStatus; // r13
  _NET_IF_OPER_STATUS ifOperStatus; // r9d
  unsigned __int8 *p_MediaConnectState; // r15
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // r12d
  _NET_IF_MEDIA_CONNECT_STATE v15; // r10d
  unsigned __int8 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  OperStatusFlags = a1->OperStatusFlags;
  v4 = 0;
  a1->OperStatusFlags = 0;
  v5 = a3;
  if ( a1->State == NdisMiniportHalted )
    goto LABEL_19;
  if ( a1->MediaConnectState != MediaConnectStateConnected )
  {
    a1->OperStatusFlags = 2;
LABEL_19:
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
    goto LABEL_6;
  }
  if ( ndisIsDefaultPortStateOperational(a1) )
  {
    if ( (unsigned int)(a1->State - 5) > 1 )
    {
      *(_QWORD *)&a1->OperStatus = 1LL;
      if ( (OperStatusFlags & 8) != 0 )
        a1->OperStatusFlags = 0x1000000;
    }
    else
    {
      a1->OperStatusFlags |= 4u;
      a1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
    }
  }
  else
  {
    a1->OperStatusFlags |= 1u;
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
  }
LABEL_6:
  v8 = ndisMReferenceIfBlock(a1, MPIFREF_SETISTATE);
  v9 = v8;
  if ( v8 )
  {
    OperStatus = a1->OperStatus;
    p_ifOperStatus = (unsigned __int8 *)&v8->ifOperStatus;
    ifOperStatus = v8->ifOperStatus;
    p_MediaConnectState = (unsigned __int8 *)&v8->MediaConnectState;
    MediaConnectState = v8->MediaConnectState;
    v8->ifOperStatus = OperStatus;
    v8->ifAdminStatus = a1->AdminStatus;
    v15 = a1->MediaConnectState;
    v8->MediaConnectState = v15;
    v8->MediaDuplexState = a1->MediaDuplexState;
    v8->RcvLinkSpeed = a1->RcvLinkSpeed;
    v8->XmitLinkSpeed = a1->XmitLinkSpeed;
    v8->ifOperStatusFlags = a1->OperStatusFlags;
    if ( ifOperStatus != OperStatus )
    {
      v4 = 1;
      if ( a2 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v5);
        ndisNsiScheduleIfBlockRodChangeNotification(v9, p_ifOperStatus, 8u, 0x218u);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v17);
        v15 = v9->MediaConnectState;
        v5 = v17;
      }
    }
    if ( MediaConnectState != v15 && a2 )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v5);
      ndisNsiScheduleIfBlockRodChangeNotification(v9, p_MediaConnectState, 4u, 0x284u);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v17);
    }
    ndisMDereferenceIfBlock(a1, MPIFREF_SETISTATE);
  }
  return v4;
}
