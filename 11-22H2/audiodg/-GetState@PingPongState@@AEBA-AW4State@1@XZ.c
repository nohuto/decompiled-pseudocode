/*
 * XREFs of ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14003B6D2
 * Callers:
 *     ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x14003BD90 (-PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ.c)
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14009D1A0 (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 *     ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14009D27C (-CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14009DB44 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14009DC70 (-GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x14009EF04 (-ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ.c)
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14009F6F0 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PingPongState::GetState(__int64 a1)
{
  volatile signed __int32 *v1; // rdx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 136);
  result = 16LL;
  if ( v1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(v1, 0, 0);
    if ( (unsigned int)result > 0x10 )
    {
      _InterlockedExchange(*(volatile __int32 **)(a1 + 136), 16);
      return 16LL;
    }
  }
  return result;
}
