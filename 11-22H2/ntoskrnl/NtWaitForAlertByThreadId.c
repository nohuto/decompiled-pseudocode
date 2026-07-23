/*
 * XREFs of NtWaitForAlertByThreadId @ 0x140742E20
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x1402C1774 (KeWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  char PreviousMode; // cl
  __int64 v5; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Timeout && PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Timeout < 0x7FFFFFFF0000LL )
      v5 = (__int64)Timeout;
    v6 = *(_QWORD *)v5;
    Timeout = (PLARGE_INTEGER)&v6;
  }
  return KeWaitForAlertByThreadId(PreviousMode, Timeout, Address);
}
