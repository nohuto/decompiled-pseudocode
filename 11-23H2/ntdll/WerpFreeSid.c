/*
 * XREFs of WerpFreeSid @ 0x1800E91BC
 * Callers:
 *     SendMessageToWERService @ 0x1800E8A8C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E8EAC (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
