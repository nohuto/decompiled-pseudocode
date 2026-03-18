/*
 * XREFs of VmFlushTb @ 0x140465E8C
 * Callers:
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14038A24C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushSingleCurrentTb @ 0x14038A710 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x14038E834 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     VmpFlushTb @ 0x1404664CA (VmpFlushTb.c)
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
