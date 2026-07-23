/*
 * XREFs of MiDelayFaultingThread @ 0x140646368
 * Callers:
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     MiWaitForAvailablePages @ 0x140653E3C (MiWaitForAvailablePages.c)
 */

NTSTATUS __fastcall MiDelayFaultingThread(int a1)
{
  _KPROCESS *Process; // rdx
  __int64 v2; // rax
  const LARGE_INTEGER *v3; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 == 1 )
  {
    v2 = Process[1].IdealProcessor[25];
    v3 = &MiHalfSecond;
    return MiWaitForAvailablePages(*(_QWORD *)(qword_140C673C8 + 8 * v2), v3);
  }
  if ( a1 == 2 )
  {
    v2 = Process[1].IdealProcessor[25];
    v3 = &Mi30Milliseconds;
    return MiWaitForAvailablePages(*(_QWORD *)(qword_140C673C8 + 8 * v2), v3);
  }
  return KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
}
