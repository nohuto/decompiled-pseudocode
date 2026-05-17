/*
 * XREFs of WerpFreeSid @ 0x1800E7E8C
 * Callers:
 *     SendMessageToWERService @ 0x1800E775C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E7B7C (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
