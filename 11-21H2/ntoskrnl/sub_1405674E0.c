/*
 * XREFs of sub_1405674E0 @ 0x1405674E0
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 * Callees:
 *     KdRefreshDebuggerNotPresent @ 0x1403DC750 (KdRefreshDebuggerNotPresent.c)
 */

char __fastcall sub_1405674E0(int a1, __int64 a2)
{
  char result; // al

  if ( !(_BYTE)KdDebuggerEnabled && !KdEventLoggingEnabled
    || byte_140D0194C
    || KdRefreshDebuggerNotPresent() && !byte_140C40504 )
  {
    return 0;
  }
  result = a1 != 226;
  if ( a2 )
    return *(_BYTE *)a2;
  return result;
}
