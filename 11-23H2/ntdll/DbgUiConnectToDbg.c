/*
 * XREFs of DbgUiConnectToDbg @ 0x1800D79F0
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateDebugObject @ 0x1800A23C0 (NtCreateDebugObject.c)
 */

__int64 DbgUiConnectToDbg()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
    return (unsigned int)NtCreateDebugObject();
  return v0;
}
