/*
 * XREFs of RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C0056BC8
 * Callers:
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C003D5B0 (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0060354 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 */

__int64 __fastcall RaBuildSetProtocolSpecificPropertyBufferForMiniport(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v4; // r14
  _DWORD *v6; // r15
  _DWORD *v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // r13
  size_t v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 Pool; // rax
  int v17; // eax

  v4 = *(_QWORD *)(a1 + 64);
  v6 = (_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  v7 = 0LL;
  v8 = 0;
  v9 = *(unsigned int *)(*(_QWORD *)(a2 + 24) + 24LL);
  v10 = *(unsigned int *)(*(_QWORD *)(a2 + 24) + 28LL);
  if ( *(_DWORD *)v4 == 1431193940 )
    v11 = *(_QWORD *)(v4 + 24);
  else
    v11 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  v12 = v10 + 80;
  if ( (unsigned int)v9 < 0x28 )
  {
    if ( v12 < 0x50 )
      goto LABEL_9;
    v8 = v10 + 80;
  }
  else
  {
    v13 = v9 - 40;
    if ( v12 < 0x50 )
    {
LABEL_10:
      v14 = -1073741675;
      goto LABEL_11;
    }
    v8 = v12 + v13;
    if ( v12 + v13 < v13 )
    {
LABEL_9:
      v8 = -1;
      goto LABEL_10;
    }
  }
  v14 = 0;
  Pool = RaidAllocatePool(64LL, v8, 1918067026LL, a1);
  v7 = (_DWORD *)Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_DWORD *)(Pool + 16) = 2987004;
    *(_QWORD *)(Pool + 4) = 0x4F544F5250544553LL;
    if ( v4 )
      v17 = *(_DWORD *)(v4 + 1320);
    else
      v17 = *(_DWORD *)(v11 + 4060);
    v7[3] = v17;
    v7[6] = v8 - 28;
    v7[7] = 72;
    v7[8] = 72;
    v7[9] = *v6;
    v7[10] = v6[1];
    v7[11] = v6[2];
    v7[12] = v6[3];
    v7[16] = v6[7];
    v7[17] = v6[8];
    v7[18] = v6[9];
    v7[19] = v6[10];
    v7[13] = (unsigned int)v9 >= 0x40 ? 0x44 : 0;
    v7[14] = v10;
    memmove((char *)v7 + ((unsigned int)v9 >= 0x40 ? 104LL : 36LL), (char *)v6 + v9, v10);
  }
  else
  {
    v14 = -1073741670;
    v8 = 0;
  }
LABEL_11:
  *a3 = v7;
  *a4 = v8;
  return v14;
}
