/*
 * XREFs of PipAttemptDependentStart @ 0x140861ED4
 * Callers:
 *     PipAttemptDependentsStart @ 0x14079C1AC (PipAttemptDependentsStart.c)
 *     PipDeleteAllDependencyRelations @ 0x140954410 (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x140359044 (PnpRequestDeviceAction.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406C982C (PipCheckForUnsatisfiedDependencies.c)
 *     PipClearDevNodeProblem @ 0x14086919C (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PipAttemptDependentStart(_QWORD *Object)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( !Object )
    return 3221225473LL;
  v2 = Object[39];
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3
    || (*(_DWORD *)(v3 + 396) & 0x2000) == 0
    || *(_DWORD *)(v3 + 404) != 51
    || PipCheckForUnsatisfiedDependencies(*(_QWORD *)(v2 + 40), 3u) )
  {
    return 3221225473LL;
  }
  PipClearDevNodeProblem(v3);
  return PnpRequestDeviceAction(Object, 0x10u, 1, 0LL, 0LL, 0LL, 0LL);
}
