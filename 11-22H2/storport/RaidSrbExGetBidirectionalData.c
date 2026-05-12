/*
 * XREFs of RaidSrbExGetBidirectionalData @ 0x1C004FE78
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 *     RaidXrbSetDataBufferAddress @ 0x1C0008D40 (RaidXrbSetDataBufferAddress.c)
 *     RaidUnitClaimIrp @ 0x1C00094D0 (RaidUnitClaimIrp.c)
 *     RaidUnitReleaseIrp @ 0x1C0016EE4 (RaidUnitReleaseIrp.c)
 *     RaidAdapterMapBuffers @ 0x1C003677C (RaidAdapterMapBuffers.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0038020 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbExGetBidirectionalData(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 2) == 40 && (*(_BYTE *)(a1 + 24) & 0xC0) == 0xC0 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    v4 = 0LL;
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = *(unsigned int *)(a1 + 4 * v4 + 120);
        v1 = 0LL;
        if ( (unsigned int)v5 >= 0x80 )
        {
          v6 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v5 <= (unsigned int)v6 && *(_DWORD *)(v5 + a1) == 1 && v5 + 24 <= v6 )
            break;
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= v3 )
          return v1;
      }
      return v5 + a1;
    }
  }
  return v1;
}
