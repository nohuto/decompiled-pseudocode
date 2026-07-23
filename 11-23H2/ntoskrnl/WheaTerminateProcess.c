/*
 * XREFs of WheaTerminateProcess @ 0x140A082D0
 * Callers:
 *     KiMcheckAlternateReturn @ 0x140580880 (KiMcheckAlternateReturn.c)
 * Callees:
 *     PsGetProcessId @ 0x1402FA720 (PsGetProcessId.c)
 *     WheaGetCurrentProcessName @ 0x140612190 (WheaGetCurrentProcessName.c)
 *     WheapLogProcessTerminateEvent @ 0x140613980 (WheapLogProcessTerminateEvent.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 */

__int64 WheaTerminateProcess()
{
  struct _KPROCESS *Process; // rdi
  int v1; // ebx
  int ProcessId; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  WheaGetCurrentProcessName((void **)&v5, (unsigned int *)&v4);
  v1 = PsTerminateProcess((ULONG_PTR)Process);
  if ( v1 >= 0 )
  {
    ProcessId = (unsigned int)PsGetProcessId(Process);
    WheapLogProcessTerminateEvent(ProcessId, v5, v4);
  }
  return (unsigned int)v1;
}
