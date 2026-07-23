/*
 * XREFs of KiFlushAffinity @ 0x1403CEF48
 * Callers:
 *     KeFlushTb @ 0x140279C00 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeTb @ 0x140390594 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     <none>
 */

volatile _KAFFINITY_EX *__fastcall KiFlushAffinity(int a1)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a1 )
    return 0LL;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
}
