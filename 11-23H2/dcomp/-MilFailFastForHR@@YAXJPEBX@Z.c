/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180100534
 * Callers:
 *     ?FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z @ 0x1800F1CD8 (-FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180100508 (-IsOOM@@YA_NJ@Z.c)
 */

void __fastcall MilFailFastForHR(DWORD a1, const void *a2)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionAddress = 0LL;
  pExceptionRecord.ExceptionCode = a1;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
