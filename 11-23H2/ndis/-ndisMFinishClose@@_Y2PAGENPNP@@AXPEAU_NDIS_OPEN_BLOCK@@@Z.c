/*
 * XREFs of ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0148B30
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F6C4 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C001733C (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A8E8 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A918 (-ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00243B0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMCoFreeResources@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00BC86C (-ndisMCoFreeResources@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0148CA8 (-ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0148D9C (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMFinishClose(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v4; // rcx
  _SINGLE_LIST_ENTRY *v5; // rcx

  MiniportHandle = a1->MiniportHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xCu,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      a1);
  ndisReferenceMiniportNoCheck(MiniportHandle, 0x32u);
  if ( (MiniportHandle->Flags & 0x20000) != 0 )
    ndisMCoFreeResources(a1);
  while ( 1 )
  {
    Next = a1->PatternList.Next;
    if ( !Next )
      break;
    a1->PatternList = (_SINGLE_LIST_ENTRY)Next->Next;
    ExFreePoolWithTag(Next, 0);
  }
  while ( 1 )
  {
    v4 = a1->WOLPatternList.Next;
    if ( !v4 )
      break;
    a1->WOLPatternList = (_SINGLE_LIST_ENTRY)v4->Next;
    ExFreePoolWithTag(v4, 0);
  }
  while ( 1 )
  {
    v5 = a1->PMProtocolOffloadList.Next;
    if ( !v5 )
      break;
    a1->PMProtocolOffloadList = (_SINGLE_LIST_ENTRY)v5->Next;
    ExFreePoolWithTag(v5, 0);
  }
  ndisDeQueueOpenOnProtocol(a1, a1->ProtocolHandle);
  KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
  if ( (a1->OpenFlags & 4) != 0 )
  {
    --MiniportHandle->PmodeOpens;
    a1->OpenFlags &= ~4u;
    ndisUpdateCheckForLoopbackFlag(MiniportHandle);
  }
  KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
  ndisDeQueueOpenOnMiniport(a1, MiniportHandle);
  ndisUpdateLoopbackOpens(MiniportHandle);
  a1->QC.Status = 0;
  a1->QC.WorkItem.List.Flink = 0LL;
  a1->QC.WorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedFinishClose;
  a1->QC.WorkItem.Parameter = a1;
  ndisQueueWorkitem(&a1->QC.WorkItem);
  ndisDereferenceMiniport(MiniportHandle, 0x32u);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xDu,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      a1);
}
