/*
 * XREFs of KdpSysCheckLowMemory @ 0x140AB4C74
 * Callers:
 *     KdSystemDebugControl @ 0x1409722F0 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140AB4A78 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
