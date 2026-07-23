/*
 * XREFs of KiIsSecureProcessFlush @ 0x1402EB4F0
 * Callers:
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14038C93C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushSingleCurrentTb @ 0x14038CE00 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x140390594 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle != 0;
}
