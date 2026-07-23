/*
 * XREFs of sub_14088394C @ 0x14088394C
 * Callers:
 *     sub_14088399A @ 0x14088399A (sub_14088399A.c)
 *     sub_1409EE8FC @ 0x1409EE8FC (sub_1409EE8FC.c)
 *     NotifyRoutine @ 0x1409F1600 (NotifyRoutine.c)
 *     sub_1409F209C @ 0x1409F209C (sub_1409F209C.c)
 *     sub_1409F2984 @ 0x1409F2984 (sub_1409F2984.c)
 *     sub_1409F3C74 @ 0x1409F3C74 (sub_1409F3C74.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

__int64 __fastcall sub_14088394C(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( sub_140347810(&stru_140C15D80) )
  {
    *a1 = qword_140C15D78;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
