/*
 * XREFs of ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00210F4
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C00185C0 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0022064 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002C4B0 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0080594 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C008C754 (ndisWdfDevicePowerOn.c)
 *     ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A36E0 (-ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00212C0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C002134C (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00213E4 (-ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C0024EB4 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 */

char __fastcall ndisIfSetInterfaceState(struct _NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  unsigned int OperStatusFlags; // esi
  char v4; // r13
  KIRQL v5; // r12
  _NET_IF_OPER_STATUS *p_OperStatus; // rdi
  struct _NDIS_IF_BLOCK *v8; // rax
  struct _NDIS_IF_BLOCK *v9; // rbp
  _NET_IF_OPER_STATUS v10; // r9d
  _NET_IF_OPER_STATUS *p_ifOperStatus; // rcx
  _NET_IF_OPER_STATUS ifOperStatus; // r10d
  unsigned __int8 *p_MediaConnectState; // r15
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // eax
  char v15; // al
  _NET_IF_MEDIA_CONNECT_STATE v17; // [rsp+60h] [rbp+8h]
  unsigned __int8 v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = a3;
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
    p_OperStatus = &a1->OperStatus;
    goto LABEL_20;
  }
  p_OperStatus = &a1->OperStatus;
  if ( !ndisIsDefaultPortStateOperational(a1) )
  {
    a1->OperStatusFlags |= 1u;
LABEL_20:
    *p_OperStatus = NET_IF_OPER_STATUS_DOWN;
    goto LABEL_6;
  }
  if ( (unsigned int)(a1->State - 5) > 1 )
  {
    a1->OperStatusFlags = 0;
    *p_OperStatus = NET_IF_OPER_STATUS_UP;
    if ( (OperStatusFlags & 8) != 0 )
      a1->OperStatusFlags = 0x1000000;
  }
  else
  {
    a1->OperStatusFlags |= 4u;
    *p_OperStatus = NET_IF_OPER_STATUS_DORMANT;
  }
LABEL_6:
  v8 = ndisMReferenceIfBlock(a1, MPIFREF_SETISTATE);
  v9 = v8;
  if ( v8 )
  {
    v10 = *p_OperStatus;
    p_ifOperStatus = &v8->ifOperStatus;
    ifOperStatus = v8->ifOperStatus;
    p_MediaConnectState = (unsigned __int8 *)&v8->MediaConnectState;
    MediaConnectState = v8->MediaConnectState;
    *p_ifOperStatus = *p_OperStatus;
    v17 = MediaConnectState;
    v9->ifAdminStatus = a1->AdminStatus;
    *(_DWORD *)p_MediaConnectState = a1->MediaConnectState;
    v9->MediaDuplexState = a1->MediaDuplexState;
    v9->RcvLinkSpeed = a1->RcvLinkSpeed;
    v9->XmitLinkSpeed = a1->XmitLinkSpeed;
    v9->ifOperStatusFlags = a1->OperStatusFlags;
    v15 = a2;
    if ( ifOperStatus != v10 )
    {
      v4 = 1;
      if ( a2 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v5);
        ndisNsiScheduleIfBlockRodChangeNotification(v9, (unsigned __int8 *)&v9->ifOperStatus, 8u, 0x218u);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v19);
        v15 = a2;
        v5 = v19;
      }
    }
    if ( v17 != *(_DWORD *)p_MediaConnectState && v15 )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v5);
      ndisNsiScheduleIfBlockRodChangeNotification(v9, p_MediaConnectState, 4u, 0x284u);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v19);
    }
    ndisMDereferenceIfBlock(a1, MPIFREF_SETISTATE);
  }
  return v4;
}
