/*
 * XREFs of ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x1C00201C0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106C18 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisGetPortList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PORT **a2)
{
  unsigned int v2; // esi
  unsigned int v5; // r14d
  __int64 Pool2; // rax
  __int64 v7; // rdi
  _LIST_ENTRY *v8; // r8
  _LIST_ENTRY *Flink; // rdx
  _QWORD *p_Flink; // r9
  _NET_IF_DIRECTION_TYPE DirectionType; // ecx
  _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState; // eax
  unsigned int v13; // ecx
  KIRQL v14; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x24u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      a1);
  *a2 = 0LL;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v5 = a1->NumberOfActivePorts + 1;
  Pool2 = ExAllocatePool2(64LL, 96 * v5, 1869628494);
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 36) = 0;
    v8 = (_LIST_ENTRY *)(Pool2 + 96);
    *(_DWORD *)(Pool2 + 40) = 0;
    Flink = a1->PortList.Flink;
    p_Flink = (_QWORD *)Pool2;
    *(_QWORD *)Pool2 = Pool2 + 96;
    *(_WORD *)(Pool2 + 32) = 384;
    *(_WORD *)(Pool2 + 34) = 64;
    *(_DWORD *)(Pool2 + 48) = a1->MediaConnectState;
    *(_QWORD *)(Pool2 + 56) = a1->XmitLinkSpeed;
    *(_QWORD *)(Pool2 + 64) = a1->RcvLinkSpeed;
    DirectionType = a1->IfBlock->DirectionType;
    *(_DWORD *)(Pool2 + 76) = a1->DefaultPortSendControlState;
    *(_DWORD *)(Pool2 + 80) = a1->DefaultPortRcvControlState;
    *(_DWORD *)(Pool2 + 84) = a1->DefaultPortSendAuthorizationState;
    DefaultPortRcvAuthorizationState = a1->DefaultPortRcvAuthorizationState;
    *(_DWORD *)(v7 + 72) = DirectionType;
    v13 = 1;
    *(_DWORD *)(v7 + 88) = DefaultPortRcvAuthorizationState;
    while ( Flink != &a1->PortList && v13 < v5 )
    {
      if ( LODWORD(Flink[1].Flink) == 4 )
      {
        p_Flink = &v8->Flink;
        v8->Flink = v8 + 6;
        ++v13;
        v8[2] = *(_LIST_ENTRY *)((char *)Flink + 24);
        v8[3] = *(_LIST_ENTRY *)((char *)Flink + 40);
        v8[4] = *(_LIST_ENTRY *)((char *)Flink + 56);
        v8[5] = *(_LIST_ENTRY *)((char *)Flink + 72);
        v8 += 6;
      }
      Flink = Flink->Flink;
    }
    *p_Flink = 0LL;
  }
  else
  {
    v2 = -1073741670;
  }
  v14 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v14);
  if ( !v2 )
    *a2 = (struct _NDIS_PORT *)v7;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x25u,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1,
      v2);
  return v2;
}
