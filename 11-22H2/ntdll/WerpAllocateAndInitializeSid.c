/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1800E7B7C
 * Callers:
 *     SendMessageToWERService @ 0x1800E775C (SendMessageToWERService.c)
 * Callees:
 *     RtlInitializeSid @ 0x180013050 (RtlInitializeSid.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     WerpFreeSid @ 0x1800E7E8C (WerpFreeSid.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  if ( a11 )
    return (unsigned int)ZwAllocateVirtualMemory();
  else
    return 3221225485LL;
}
