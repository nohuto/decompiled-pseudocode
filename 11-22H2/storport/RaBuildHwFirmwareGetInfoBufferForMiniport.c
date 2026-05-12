/*
 * XREFs of RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001EBE4
 * Callers:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001EA0C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0035E50 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0036018 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildHwFirmwareGetInfoBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v8; // rsi
  __int64 Pool; // rax
  int v10; // ecx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( *(_DWORD *)v4 == 1431193940 )
    v8 = *(_QWORD *)(v4 + 24);
  else
    v8 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  Pool = RaidAllocatePool(64LL, 272LL, 1918067026LL, a1);
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_DWORD *)(Pool + 16) = 1771392;
    *(_QWORD *)(Pool + 4) = 0x455241574D524946LL;
    if ( v4 )
      v10 = *(_DWORD *)(v4 + 1320);
    else
      v10 = *(_DWORD *)(v8 + 4060);
    *(_DWORD *)(Pool + 12) = v10;
    *(_DWORD *)(Pool + 24) = 244;
    *(_DWORD *)(Pool + 28) = 1;
    *(_DWORD *)(Pool + 36) = 1;
    *(_DWORD *)(Pool + 44) = 56;
    *(_DWORD *)(Pool + 48) = 216;
    *(_DWORD *)(Pool + 32) = 24;
    *(_DWORD *)(Pool + 40) = v4 == 0;
    *(_DWORD *)(Pool + 56) = 2;
    *(_DWORD *)(Pool + 60) = 24;
  }
  else
  {
    v5 = -1073741670;
  }
  *a3 = Pool;
  result = v5;
  *a4 = 272;
  return result;
}
