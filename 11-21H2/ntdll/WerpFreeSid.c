/*
 * XREFs of WerpFreeSid @ 0x1800E8FFC
 * Callers:
 *     SendMessageToWERService @ 0x1800E88CC (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E8CEC (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
