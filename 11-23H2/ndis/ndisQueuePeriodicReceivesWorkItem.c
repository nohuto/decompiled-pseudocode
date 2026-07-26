/*
 * XREFs of ndisQueuePeriodicReceivesWorkItem @ 0x1C003EC20
 * Callers:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C003E796 (ndisMQueueReceiveNetBufferLists.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C003EAB0 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00243B0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C0040062 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void __fastcall ndisQueuePeriodicReceivesWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  __int16 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+22h] [rbp-36h]
  _BYTE v6[22]; // [rsp+32h] [rbp-26h]
  __int16 v7; // [rsp+48h] [rbp-10h]
  _WORD v8[7]; // [rsp+4Ah] [rbp-Eh]

  if ( !_InterlockedExchange(&a1->PeriodicReceiveQueue.WorkItemQueued, 1) )
  {
    if ( HIBYTE(word_1C00F76B4) )
    {
      v5 = 0LL;
      *(_QWORD *)v6 = 0LL;
      v7 = 0;
      v8[0] = 0;
      v4 = 48;
      *(_DWORD *)&v8[1] = 0x20000;
      *(GUID *)&v6[6] = EtwGuidNdisReceive;
      BYTE2(v5) = 24;
      *(_QWORD *)((char *)&v5 + 6) = qword_1C00F76A8;
      IoWMIWriteEvent(&v4);
    }
    ndisReferenceMiniportNoCheck(a1, 0x4Cu);
    ndisInsertInWorkQueue(
      (struct _NDIS_WORK_QUEUE *)((char *)qword_1C00F5240 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number),
      &a1->PeriodicReceiveQueue.WorkItem,
      a2);
  }
}
