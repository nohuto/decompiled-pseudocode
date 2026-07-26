/*
 * XREFs of ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00720A8
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00064B0 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall ndisNblTrackerReportStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  struct _NDIS_MINIPORT_BLOCK *Context; // rcx
  int v5; // r8d

  if ( !*((_WORD *)a1 + 8) || *((_WORD *)a1 + 8) == 3 || (unsigned int)(*((__int16 *)a1 + 8) - 4) <= 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 48LL, 1465140302);
    v3 = Pool2;
    if ( Pool2 )
    {
      Context = (struct _NDIS_MINIPORT_BLOCK *)a1->Context;
      v5 = *((__int16 *)a1 + 8);
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)Pool2 = Context;
      *(_DWORD *)(Pool2 + 8) = v5;
      *(_QWORD *)(Pool2 + 32) = ndisNblTrackerWatchdogWorkerRoutine;
      *(_QWORD *)(Pool2 + 40) = Pool2;
      if ( ndisReferenceMiniport(Context, 0x68u) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 16), NormalWorkQueue);
      else
        ExFreePoolWithTag((PVOID)v3, 0);
    }
  }
}
