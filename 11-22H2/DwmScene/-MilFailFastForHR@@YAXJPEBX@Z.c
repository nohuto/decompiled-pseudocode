/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18001C0A0
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x18000FF44 (ModuleFailFastForHRESULT.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18001C074 (-IsOOM@@YA_NJ@Z.c)
 */

void __fastcall MilFailFastForHR(__int64 a1, void *a2)
{
  EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( IsOOM() )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = -2147024882;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
