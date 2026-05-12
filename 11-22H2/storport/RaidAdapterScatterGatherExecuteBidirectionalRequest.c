/*
 * XREFs of RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0038020
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 * Callees:
 *     RaidDmaBuildScatterGatherList @ 0x1C000AE68 (RaidDmaBuildScatterGatherList.c)
 *     RaidDmaGetScatterGatherList @ 0x1C003F394 (RaidDmaGetScatterGatherList.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004FE78 (RaidSrbExGetBidirectionalData.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecuteBidirectionalRequest(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 BidirectionalData; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned int v9; // ebx
  __int64 result; // rax

  v2 = a2[21];
  BidirectionalData = RaidSrbExGetBidirectionalData(v2);
  v7 = *(unsigned int *)(a1 + 564);
  v8 = BidirectionalData;
  if ( (v7 & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    LOBYTE(v7) = 1;
    LOBYTE(v6) = 1;
    KeFlushIoBuffers(a2[17], v6, v7);
  }
  v9 = *(_DWORD *)(v8 + 8);
  if ( *(_DWORD *)(v2 + 20) == 23 && *(_DWORD *)(a2[17] + 40LL) > v9 )
    v9 = *(_DWORD *)(a2[17] + 40LL);
  result = RaidDmaBuildScatterGatherList((__int64 *)(a1 + 760), *(_QWORD *)(a1 + 8));
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList(
             (int)a1 + 760,
             *(_QWORD *)(a1 + 8),
             a2[17],
             a2[24],
             v9,
             (__int64)RaidpAdapterContinueDataBufferScatterGather,
             (__int64)a2,
             0);
  return result;
}
