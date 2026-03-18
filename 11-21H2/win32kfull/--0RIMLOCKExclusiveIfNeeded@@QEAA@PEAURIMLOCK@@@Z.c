/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00AE5B4
 * Callers:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0003658 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00AE4F8 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     FreeHidTLCInfo @ 0x1C0103208 (FreeHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C0103268 (AllocateAndLinkHidTLCInfo.c)
 *     SearchHidTLCInfo @ 0x1C0103318 (SearchHidTLCInfo.c)
 *     AllocateProcessHidTable @ 0x1C0121408 (AllocateProcessHidTable.c)
 *     CleanupHidRequestList @ 0x1C01D1030 (CleanupHidRequestList.c)
 * Callees:
 *     <none>
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    RIMLockExclusive(a2);
  }
  return this;
}
