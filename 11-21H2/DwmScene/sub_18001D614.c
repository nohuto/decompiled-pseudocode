/*
 * XREFs of sub_18001D614 @ 0x18001D614
 * Callers:
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18001D5E8 @ 0x18001D5E8 (sub_18001D5E8.c)
 */

void __fastcall sub_18001D614(__int64 a1, void *a2)
{
  EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( sub_18001D5E8() )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = -2147024882;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
