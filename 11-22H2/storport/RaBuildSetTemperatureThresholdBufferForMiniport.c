/*
 * XREFs of RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C0056D40
 * Callers:
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0033C08 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C005EC84 (RaUnitSetTemperatureThresholdIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildSetTemperatureThresholdBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  _OWORD *v6; // rbp
  __int64 v9; // rsi
  __int64 Pool; // rax
  int v11; // ecx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_OWORD **)(a2 + 24);
  if ( *(_DWORD *)v4 == 1431193940 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  Pool = RaidAllocatePool(64LL, 44LL, 1918067026LL, a1);
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_QWORD *)(Pool + 4) = 0x54504D4554544553LL;
    *(_DWORD *)(Pool + 16) = 3002880;
    if ( v4 )
      v11 = *(_DWORD *)(v4 + 1320);
    else
      v11 = *(_DWORD *)(v9 + 4060);
    *(_DWORD *)(Pool + 12) = v11;
    *(_DWORD *)(Pool + 24) = 16;
    *(_OWORD *)(Pool + 28) = *v6;
  }
  else
  {
    v5 = -1073741670;
  }
  *a3 = Pool;
  result = v5;
  *a4 = 44;
  return result;
}
