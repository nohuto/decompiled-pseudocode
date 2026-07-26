/*
 * XREFs of ?ndisOidPostIovVPortParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077400
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007601C (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostIovVPortParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rbx
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rdx
  int v6; // eax
  __int64 v7; // r8
  _LIST_ENTRY *p_PacketList; // rcx
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY v10; // xmm1
  __int64 v11; // rcx
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x39u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
  if ( *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) == 1 && v3 && !*((_DWORD *)a1 + 10) )
  {
    v4 = *(_QWORD *)(v1 + 40);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v3, *(_DWORD *)(v4 + 12));
    if ( VPortByVPortIdInternal )
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( (v6 & 0x10000) != 0 )
        HIDWORD(VPortByVPortIdInternal->Interrupt) = (unsigned __int16)v6;
      if ( (*(_DWORD *)(v4 + 4) & 0x40000) != 0 )
        HIDWORD(VPortByVPortIdInternal->Reserved30) = *(_DWORD *)(v4 + 540);
      if ( (*(_DWORD *)(v4 + 4) & 0x80000) != 0 )
        LODWORD(VPortByVPortIdInternal->NextSendNetBufferListsHandler) = *(_DWORD *)(v4 + 544);
      if ( (*(_DWORD *)(v4 + 4) & 0x100000) != 0 )
        *(_OWORD *)&VPortByVPortIdInternal->EthRxCompleteHandler = *(_OWORD *)(v4 + 552);
      if ( (*(_DWORD *)(v4 + 4) & 0x20000) != 0 )
      {
        v7 = 4LL;
        p_PacketList = &VPortByVPortIdInternal->PacketList;
        v9 = (_LIST_ENTRY *)(v4 + 16);
        do
        {
          *p_PacketList = *v9;
          p_PacketList[1] = v9[1];
          p_PacketList[2] = v9[2];
          p_PacketList[3] = v9[3];
          p_PacketList[4] = v9[4];
          p_PacketList[5] = v9[5];
          p_PacketList[6] = v9[6];
          p_PacketList += 8;
          v10 = v9[7];
          v9 += 8;
          p_PacketList[-1] = v10;
          --v7;
        }
        while ( v7 );
        LODWORD(p_PacketList->Flink) = v9->Flink;
      }
      if ( (*(_DWORD *)(v4 + 4) & 0x400000) != 0 )
        LODWORD(VPortByVPortIdInternal->WorkQueue[4].Next) = *(_DWORD *)(v4 + 744);
      if ( (*(_DWORD *)(v4 + 4) & 0x800000) != 0 )
      {
        v11 = *(_QWORD *)&VPortByVPortIdInternal->LinkStateIndicationFlags;
        if ( v11 )
        {
          if ( *(_DWORD *)(v4 + 12) )
          {
            *(_DWORD *)(v11 + 96) -= LODWORD(VPortByVPortIdInternal->Reserved30);
            *(_DWORD *)(*(_QWORD *)&VPortByVPortIdInternal->LinkStateIndicationFlags + 96LL) += *(_DWORD *)(v4 + 536);
          }
          else
          {
            *(_DWORD *)(v11 + 648) = *(_DWORD *)(v4 + 536);
          }
          LODWORD(VPortByVPortIdInternal->Reserved30) = *(_DWORD *)(v4 + 536);
        }
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741811;
    }
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, NewIrql);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x3Au,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
}
