/*
 * XREFs of VmFlushTb @ 0x1404664EC
 * Callers:
 *     KeFlushTb @ 0x140279970 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14038C75C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushSingleCurrentTb @ 0x14038CC20 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x1403903B4 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     VmpFlushTb @ 0x140466B2A (VmpFlushTb.c)
 */

struct _KTHREAD *__fastcall VmFlushTb(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  volatile LONG *v4; // rcx

  if ( a3 == 1 )
  {
    result = KeGetCurrentThread();
    v4 = (volatile LONG *)result->ApcState.Process[2].Affinity.StaticBitmap[5];
    if ( v4 )
      return (struct _KTHREAD *)VmpFlushTb(v4);
  }
  return result;
}
