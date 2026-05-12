/*
 * XREFs of RaidSrbExGetBidirectionalData @ 0x1C004C4B8
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0004810 (RaidUnitClaimIrp.c)
 *     RaidXrbSetDataBufferAddress @ 0x1C0005970 (RaidXrbSetDataBufferAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C000BC60 (RaidUnitReleaseIrp.c)
 *     RaidAdapterMapBuffers @ 0x1C00355B4 (RaidAdapterMapBuffers.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0036BEC (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbExGetBidirectionalData(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // r10d
  __int64 i; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // r11

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 2) == 40 && (*(_BYTE *)(a1 + 24) & 0xC0) == 0xC0 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    for ( i = 0LL; (unsigned int)i < v3; v1 = 0LL )
    {
      v5 = *(unsigned int *)(a1 + 4 * i + 120);
      if ( (unsigned int)v5 >= 0x80 )
      {
        v6 = *(unsigned int *)(a1 + 16);
        if ( (unsigned int)v5 <= (unsigned int)v6 )
        {
          v1 = v5 + a1;
          if ( *(_DWORD *)(v5 + a1) == 1 && v5 + 24 <= v6 )
            break;
        }
      }
      i = (unsigned int)(i + 1);
    }
  }
  return v1;
}
