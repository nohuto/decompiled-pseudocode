/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1801078FC
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x1800C87A0 (ModuleFailFastForHRESULT.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x180004834 (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

void __fastcall MilFailFastForHR(int a1, void *a2)
{
  ULONG_PTR v2; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a1;
  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = -532265403;
  pExceptionRecord.ExceptionAddress = a2;
  pExceptionRecord.NumberParameters = 1;
  pExceptionRecord.ExceptionInformation[0] = v2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
