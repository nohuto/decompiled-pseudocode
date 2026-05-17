/*
 * XREFs of RtlpSetProcessBacktraces @ 0x1800E362C
 * Callers:
 *     RtlSetProcessDebugInformation @ 0x1800E2BA0 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpSetProcessBacktraces(__int64 a1)
{
  unsigned int *v1; // rax
  unsigned int *v3; // r8

  v1 = *(unsigned int **)(a1 + 104);
  if ( !v1 )
    return 3221225495LL;
  if ( *v1 )
  {
    v3 = v1 + 2;
  }
  else
  {
    if ( v1[1] < 0x18 )
      return 3221225485LL;
    v3 = v1 + 2;
    if ( *((_QWORD *)v1 + 1) || *((_QWORD *)v1 + 2) )
      return 3221225485LL;
  }
  return RtlControlStackTraceDataBase(*v1, v1[1], v3);
}
