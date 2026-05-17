/*
 * XREFs of RtlControlStackTraceDataBase @ 0x18010DC78
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     RtlpInitializeStackTraceDatabase @ 0x18010E150 (RtlpInitializeStackTraceDatabase.c)
 */

__int64 __fastcall RtlControlStackTraceDataBase(unsigned int a1, int a2, _QWORD *a3)
{
  if ( a1 >= 3 )
    return 3221225711LL;
  if ( a1 )
    return 3221225474LL;
  if ( a2 != 24 )
    return 3221225712LL;
  if ( a3 )
    return RtlpInitializeStackTraceDatabase(*a3, a3[1], a3[2]);
  return 3221225713LL;
}
