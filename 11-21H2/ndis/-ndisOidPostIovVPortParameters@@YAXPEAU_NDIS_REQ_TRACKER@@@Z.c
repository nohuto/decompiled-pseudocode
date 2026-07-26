/*
 * XREFs of ?ndisOidPostIovVPortParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0071FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0070BD8 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostIovVPortParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rdx
  int v7; // eax
  __int64 v8; // r8
  _LIST_ENTRY *p_PacketList; // rcx
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY v11; // xmm1
  __int64 v12; // rcx
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  NewIrql = 0;
  v4 = v1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x39u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v3,
      v1);
    v4 = *((_QWORD *)a1 + 4);
  }
  if ( *(_DWORD *)(v4 + 4) == 1 && v3 && !*((_DWORD *)a1 + 10) )
  {
    v5 = *(_QWORD *)(v1 + 40);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v3, *(_DWORD *)(v5 + 12));
    if ( VPortByVPortIdInternal )
    {
      v7 = *(_DWORD *)(v5 + 4);
      if ( (v7 & 0x10000) != 0 )
      {
        HIDWORD(VPortByVPortIdInternal->Interrupt) = (unsigned __int16)v7;
        v7 = *(_DWORD *)(v5 + 4);
      }
      if ( (v7 & 0x40000) != 0 )
      {
        HIDWORD(VPortByVPortIdInternal->Reserved30) = *(_DWORD *)(v5 + 540);
        v7 = *(_DWORD *)(v5 + 4);
      }
      if ( (v7 & 0x80000) != 0 )
      {
        LODWORD(VPortByVPortIdInternal->NextSendNetBufferListsHandler) = *(_DWORD *)(v5 + 544);
        v7 = *(_DWORD *)(v5 + 4);
      }
      if ( (v7 & 0x100000) != 0 )
      {
        *(_OWORD *)&VPortByVPortIdInternal->EthRxCompleteHandler = *(_OWORD *)(v5 + 552);
        v7 = *(_DWORD *)(v5 + 4);
      }
      if ( (v7 & 0x20000) != 0 )
      {
        v8 = 4LL;
        p_PacketList = &VPortByVPortIdInternal->PacketList;
        v10 = (_LIST_ENTRY *)(v5 + 16);
        do
        {
          *p_PacketList = *v10;
          p_PacketList[1] = v10[1];
          p_PacketList[2] = v10[2];
          p_PacketList[3] = v10[3];
          p_PacketList[4] = v10[4];
          p_PacketList[5] = v10[5];
          p_PacketList[6] = v10[6];
          p_PacketList += 8;
          v11 = v10[7];
          v10 += 8;
          p_PacketList[-1] = v11;
          --v8;
        }
        while ( v8 );
        LODWORD(p_PacketList->Flink) = v10->Flink;
        v7 = *(_DWORD *)(v5 + 4);
      }
      if ( (v7 & 0x400000) != 0 )
      {
        LODWORD(VPortByVPortIdInternal->WorkQueue[4].Next) = *(_DWORD *)(v5 + 744);
        v7 = *(_DWORD *)(v5 + 4);
      }
      if ( (v7 & 0x800000) != 0 )
      {
        v12 = *(_QWORD *)&VPortByVPortIdInternal->LinkStateIndicationFlags;
        if ( v12 )
        {
          if ( *(_DWORD *)(v5 + 12) )
          {
            *(_DWORD *)(v12 + 96) -= LODWORD(VPortByVPortIdInternal->Reserved30);
            *(_DWORD *)(*(_QWORD *)&VPortByVPortIdInternal->LinkStateIndicationFlags + 96LL) += *(_DWORD *)(v5 + 536);
          }
          else
          {
            *(_DWORD *)(v12 + 648) = *(_DWORD *)(v5 + 536);
          }
          LODWORD(VPortByVPortIdInternal->Reserved30) = *(_DWORD *)(v5 + 536);
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
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v3,
      v1);
}
