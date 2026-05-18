/*
 * XREFs of sub_18001C120 @ 0x18001C120
 * Callers:
 *     sub_18000FF44 @ 0x18000FF44 (sub_18000FF44.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18001C0F4 @ 0x18001C0F4 (sub_18001C0F4.c)
 */

void __fastcall sub_18001C120(__int64 a1, void *a2)
{
  EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( sub_18001C0F4() )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = -2147024882;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
