/*
 * XREFs of RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0036BEC
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C0004190 (RaUnitStartIo.c)
 * Callees:
 *     RaidDmaBuildScatterGatherList @ 0x1C0003BCC (RaidDmaBuildScatterGatherList.c)
 *     RaidDmaGetScatterGatherList @ 0x1C0005B6C (RaidDmaGetScatterGatherList.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004C4B8 (RaidSrbExGetBidirectionalData.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecuteBidirectionalRequest(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  RaidSrbExGetBidirectionalData(*(_QWORD *)(a2 + 168));
  if ( (*(_DWORD *)(a1 + 564) & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    LOBYTE(v4) = 1;
    KeFlushIoBuffers(*(_QWORD *)(a2 + 136), v4);
  }
  result = RaidDmaBuildScatterGatherList((__int64 *)(a1 + 752), *(_QWORD *)(a1 + 8));
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList((__int64 *)(a1 + 752), *(_QWORD *)(a1 + 8));
  return result;
}
