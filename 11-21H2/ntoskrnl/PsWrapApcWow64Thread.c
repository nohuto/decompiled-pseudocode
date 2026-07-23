/*
 * XREFs of PsWrapApcWow64Thread @ 0x1405E15B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsWrapApcWow64Thread(PVOID *ApcContext, PVOID *ApcRoutine)
{
  __int64 v2; // rcx
  __int16 v3; // ax

  v2 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( *(_QWORD *)(v2 + 1408) )
  {
    v3 = *(_WORD *)(v2 + 2412);
    if ( v3 == 332 || v3 == 452 )
      *ApcRoutine = (PVOID)(-4LL * (_QWORD)*ApcRoutine);
  }
  return 0;
}
