/*
 * XREFs of ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14003B692
 * Callers:
 *     ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x14003BD50 (-PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ.c)
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14009D150 (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 *     ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14009D22C (-CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14009DAF4 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14009DC20 (-GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x14009EEB4 (-ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ.c)
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14009F6A0 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
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
