/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800DCC44
 * Callers:
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
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
