/*
 * XREFs of DbgUiConnectToDbg @ 0x1800D8040
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateDebugObject @ 0x1800A0300 (NtCreateDebugObject.c)
 */

__int64 DbgUiConnectToDbg()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
    return (unsigned int)NtCreateDebugObject();
  return v0;
}
