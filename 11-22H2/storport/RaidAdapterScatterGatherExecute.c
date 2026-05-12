/*
 * XREFs of RaidAdapterScatterGatherExecute @ 0x1C000AD6C
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C003D760 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     RaidDmaBuildScatterGatherList @ 0x1C000AE68 (RaidDmaBuildScatterGatherList.c)
 *     RaidDmaGetScatterGatherList @ 0x1C003F394 (RaidDmaGetScatterGatherList.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecute(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  int v6; // edi
  unsigned int v7; // ebx
  int v8; // r14d
  char v9; // cl
  char v10; // di
  int v11; // ecx
  __int64 result; // rax
  bool v13; // zf
  __int64 v14; // rcx

  v3 = *(_QWORD *)(a2 + 168);
  v5 = a2;
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    v6 = *(_DWORD *)(v3 + 24);
    v7 = *(_DWORD *)(v3 + 60);
    v8 = *(_DWORD *)(v3 + 20);
  }
  else
  {
    v6 = *(_DWORD *)(v3 + 12);
    v8 = *(unsigned __int8 *)(v3 + 2);
    v7 = *(_DWORD *)(v3 + 16);
  }
  v9 = v6;
  LOBYTE(a3) = 1;
  v10 = (v6 & 0x80) != 0;
  v11 = v9 & 0x40;
  if ( (*(_DWORD *)(a1 + 564) & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    v13 = v11 == 0;
    v14 = *(_QWORD *)(a2 + 104);
    LOBYTE(a2) = !v13;
    KeFlushIoBuffers(v14, a2, a3);
  }
  if ( v8 == 23 && *(_DWORD *)(*(_QWORD *)(v5 + 104) + 40LL) > v7 )
    v7 = *(_DWORD *)(*(_QWORD *)(v5 + 104) + 40LL);
  result = RaidDmaBuildScatterGatherList(
             (int)a1 + 760,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v5 + 104),
             *(_QWORD *)(v5 + 184),
             v7,
             (__int64)RaidpAdapterContinueScatterGather,
             v5,
             v10,
             v5 + 232);
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList(
             (int)a1 + 760,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v5 + 104),
             *(_QWORD *)(v5 + 184),
             v7,
             (__int64)RaidpAdapterContinueScatterGather,
             v5,
             v10);
  return result;
}
