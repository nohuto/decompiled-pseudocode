/*
 * XREFs of sub_140865050 @ 0x140865050
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 */

__int64 __fastcall sub_140865050(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 4072) )
    return (unsigned int)-1073741790;
  else
    *(_DWORD *)(a1 + 4072) = PsGetCurrentThreadProcessId();
  return v1;
}
