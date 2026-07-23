/*
 * XREFs of KeQueryDpcWatchdogInformation @ 0x14021ACE0
 * Callers:
 *     sub_1403AAA5C @ 0x1403AAA5C (sub_1403AAA5C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeQueryDpcWatchdogInformation(PKDPC_WATCHDOG_INFORMATION WatchdogInformation)
{
  struct _KPRCB *CurrentPrcb; // rdx
  ULONG v2; // eax
  unsigned int v3; // r8d
  ULONG v4; // eax
  unsigned int v5; // r8d

  CurrentPrcb = KeGetCurrentPrcb();
  if ( KeGetCurrentIrql() < 2u )
    return -1073741823;
  *(_OWORD *)&WatchdogInformation->DpcTimeLimit = 0LL;
  WatchdogInformation->Reserved = 0;
  v2 = *((_DWORD *)CurrentPrcb + 3315);
  if ( v2 || (v2 = *((_DWORD *)CurrentPrcb + 8280)) != 0 )
  {
    WatchdogInformation->DpcTimeLimit = v2;
    v3 = *((_DWORD *)CurrentPrcb + 8279);
    if ( v2 > v3 )
      WatchdogInformation->DpcTimeCount = v2 - v3;
  }
  v4 = *((_DWORD *)CurrentPrcb + 3318);
  if ( v4 || (v4 = *((_DWORD *)CurrentPrcb + 8106)) != 0 )
  {
    WatchdogInformation->DpcWatchdogLimit = v4;
    v5 = *((_DWORD *)CurrentPrcb + 8107);
    if ( v4 <= v5 )
      WatchdogInformation->DpcWatchdogCount = 0;
    else
      WatchdogInformation->DpcWatchdogCount = v4 - v5;
  }
  return 0;
}
