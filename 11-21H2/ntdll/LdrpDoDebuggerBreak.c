/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800DCB14
 * Callers:
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 */

__int64 LdrpDoDebuggerBreak()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h]

  result = ZwQueryInformationThread();
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
