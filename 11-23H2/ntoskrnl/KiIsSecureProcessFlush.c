/*
 * XREFs of KiIsSecureProcessFlush @ 0x1402EB260
 * Callers:
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14038C75C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushSingleCurrentTb @ 0x14038CC20 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x1403903B4 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle != 0;
}
