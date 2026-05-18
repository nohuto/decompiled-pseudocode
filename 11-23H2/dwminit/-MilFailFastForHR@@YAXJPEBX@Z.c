/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18000CE30
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x18000CBE0 (ModuleFailFastForHRESULT.c)
 * Callees:
 *     memset_0 @ 0x180002688 (memset_0.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18000CE04 (-IsOOM@@YA_NJ@Z.c)
 */

void __fastcall MilFailFastForHR(DWORD a1, void *a2)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = a1;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
