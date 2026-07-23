/*
 * XREFs of sub_140603390 @ 0x140603390
 * Callers:
 *     sub_140604224 @ 0x140604224 (sub_140604224.c)
 *     sub_140A9CAB4 @ 0x140A9CAB4 (sub_140A9CAB4.c)
 *     sub_140A9CBF8 @ 0x140A9CBF8 (sub_140A9CBF8.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x14025C0E0 (KeDeregisterBugCheckReasonCallback.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406030C8 @ 0x1406030C8 (sub_1406030C8.c)
 */

unsigned __int64 sub_140603390()
{
  unsigned __int64 result; // rax

  result = (unsigned int)dword_140C1A8C4;
  if ( dword_140C1A8C4 )
  {
    sub_1406030C8();
    KeDeregisterBugCheckReasonCallback(&stru_140C18FA0);
    stru_140C18FA0.CallbackRoutine = 0LL;
    result = (unsigned __int64)memset(&dword_140C18F20, 0, 0x80uLL);
    _InterlockedExchange(&dword_140C1A8C4, 0);
  }
  return result;
}
