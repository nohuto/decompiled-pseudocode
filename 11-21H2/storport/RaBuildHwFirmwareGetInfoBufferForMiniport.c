/*
 * XREFs of RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0021BE4
 * Callers:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0021688 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0034FE4 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00351AC (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
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
  if ( *(_DWORD *)v4 == 1 )
    v8 = *(_QWORD *)(v4 + 24);
  else
    v8 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1 )
    v4 = 0LL;
  Pool = RaidAllocatePool(64LL, 272LL, 1918067026LL, a1);
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_DWORD *)(Pool + 16) = 1771392;
    *(_QWORD *)(Pool + 4) = 0x455241574D524946LL;
    if ( v4 )
      v10 = *(_DWORD *)(v4 + 1264);
    else
      v10 = *(_DWORD *)(v8 + 3996);
    *(_DWORD *)(Pool + 12) = v10;
    *(_DWORD *)(Pool + 24) = 244;
    *(_DWORD *)(Pool + 28) = 1;
    *(_DWORD *)(Pool + 32) = 24;
    *(_DWORD *)(Pool + 36) = 1;
    *(_DWORD *)(Pool + 40) = v4 == 0;
    *(_DWORD *)(Pool + 44) = 56;
    *(_DWORD *)(Pool + 48) = 216;
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
