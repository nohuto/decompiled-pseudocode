/*
 * XREFs of RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C005652C
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0035D20 (RaidAdapterHwFirmwareActivateIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildHwFirmwareActivateBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebx
  __int64 v8; // r10
  int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 Pool; // rax
  int v13; // eax
  int v14; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( (*(_DWORD *)(v4 + 8) & 0xC0000000) == 0xC0000000 )
  {
    v5 = -1073741811;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v10 == 1431193940 )
      v11 = *(_QWORD *)(v10 + 24);
    else
      v11 = *(_QWORD *)(a1 + 64);
    v9 = 68;
    if ( *(_DWORD *)v10 != 1431193940 )
      v10 = 0LL;
    Pool = RaidAllocatePool(64LL, 68LL, 1918067026LL, a1);
    v8 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 1771392;
      *(_QWORD *)(Pool + 4) = 0x455241574D524946LL;
      if ( v10 )
        v13 = *(_DWORD *)(v10 + 1320);
      else
        v13 = *(_DWORD *)(v11 + 4060);
      *(_DWORD *)(v8 + 12) = v13;
      *(_DWORD *)(v8 + 24) = 40;
      *(_DWORD *)(v8 + 28) = 1;
      *(_DWORD *)(v8 + 32) = 24;
      *(_DWORD *)(v8 + 36) = 3;
      *(_DWORD *)(v8 + 40) = v10 == 0;
      *(_DWORD *)(v8 + 48) = 12;
      *(_DWORD *)(v8 + 44) = 56;
      *(_DWORD *)(v8 + 56) = 1;
      *(_DWORD *)(v8 + 60) = 12;
      *(_BYTE *)(v8 + 64) = *(_BYTE *)(v4 + 12);
      v14 = *(_DWORD *)(v4 + 8);
      if ( v14 >= 0 )
      {
        if ( (v14 & 0x40000000) != 0 )
          *(_DWORD *)(v8 + 40) |= 0x40000000u;
      }
      else
      {
        *(_DWORD *)(v8 + 40) |= 0x80000000;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  result = v5;
  *a4 = v9;
  *a3 = v8;
  return result;
}
