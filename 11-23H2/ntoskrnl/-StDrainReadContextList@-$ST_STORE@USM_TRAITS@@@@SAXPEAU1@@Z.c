/*
 * XREFs of ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140345BF8
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034556C (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368A50 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405C1320 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140428F30 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDrainReadContextList(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY v1; // rbx
  PSLIST_ENTRY v2; // rcx

  v1 = RtlpInterlockedFlushSList(a1 + 253);
  while ( v1 )
  {
    v2 = v1;
    v1 = v1->Next;
    ExFreePoolWithTag(v2, 0);
  }
}
