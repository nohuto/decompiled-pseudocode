/*
 * XREFs of MiDelayFaultingThread @ 0x140645E18
 * Callers:
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140246810 (KeDelayExecutionThread.c)
 *     MiWaitForAvailablePages @ 0x1406538EC (MiWaitForAvailablePages.c)
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
