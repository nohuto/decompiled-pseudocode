/*
 * XREFs of RtlWow64GetCurrentMachine @ 0x180054620
 * Callers:
 *     <none>
 * Callees:
 *     RtlWow64GetCurrentCpuArea @ 0x180054B60 (RtlWow64GetCurrentCpuArea.c)
 */

__int64 RtlWow64GetCurrentMachine()
{
  unsigned __int16 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = -31132;
  if ( NtCurrentTeb()->WowTebOffset > 0 )
    RtlWow64GetCurrentCpuArea(&v1, 0LL, 0LL);
  return v1;
}
