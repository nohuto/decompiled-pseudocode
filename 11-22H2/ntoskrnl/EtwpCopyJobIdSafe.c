/*
 * XREFs of EtwpCopyJobIdSafe @ 0x1409E6038
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403A5700 (EtwTraceJobServerSiloMonitorCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobIdSafe(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    result = *(unsigned int *)(a2 + 1452);
  *a1 = result;
  return result;
}
