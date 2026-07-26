/*
 * XREFs of ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x1C0022428
 * Callers:
 *     ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x1C00222A0 (-ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C002248C (-ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *a2,
        char a3)
{
  unsigned int v3; // ebx
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // rcx

  v3 = 0;
  if ( *(_OWORD *)&a2->SendNetBufferListsHandler != 0LL
    || a2->ReceiveNetBufferListsHandler
    || a2->ReturnNetBufferListsHandler )
  {
    if ( !a1->IterativeDataPathTracker )
      return (unsigned int)ndisAllocateIterativeDataPathTracker(a1);
  }
  else if ( !a3 )
  {
    IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)a1->IterativeDataPathTracker;
    if ( IterativeDataPathTracker )
    {
      ExFreePoolWithTag(IterativeDataPathTracker, 0);
      a1->IterativeDataPathTracker = 0LL;
    }
  }
  return v3;
}
