/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800DCB14
 * Callers:
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 */

NTSTATUS LdrpDoDebuggerBreak()
{
  NTSTATUS result; // eax
  char ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHideFromDebugger, &ThreadInformation, 1u, 0LL);
  if ( result >= 0 && !ThreadInformation )
    __debugbreak();
  return result;
}
