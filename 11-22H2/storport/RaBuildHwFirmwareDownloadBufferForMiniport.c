/*
 * XREFs of RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0056684
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0035E50 (RaidAdapterHwFirmwareDownloadIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 */

__int64 __fastcall RaBuildHwFirmwareDownloadBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rbp
  __int64 Pool; // rax
  int v14; // eax
  BOOL v15; // ecx
  int v16; // eax
  int v17; // eax
  const void *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = v4;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( *(_DWORD *)v4 != 48 )
    v7 = 0LL;
  if ( *(_DWORD *)v6 == 1431193940 )
    v10 = *(_QWORD *)(v6 + 24);
  else
    v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_DWORD *)(v10 + 5300);
  if ( *(_DWORD *)v6 != 1431193940 )
    v6 = 0LL;
  switch ( v11 )
  {
    case 0:
      goto LABEL_34;
    case 1:
      v9 = *(_QWORD *)(v4 + 24) + 80LL;
      goto LABEL_16;
    case 2:
      if ( v7 )
        v12 = *(_QWORD *)(v7 + 24);
      else
        v12 = *(_QWORD *)(v4 + 24);
      v9 = v12 + 88;
LABEL_16:
      if ( v9 > 0xFFFFFFFF )
      {
        v5 = -1073741811;
        goto LABEL_34;
      }
      break;
  }
  Pool = RaidAllocatePool(64LL, (unsigned int)v9, 1918067026LL, a1);
  v8 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_DWORD *)(Pool + 16) = 1771392;
    *(_QWORD *)(Pool + 4) = 0x455241574D524946LL;
    if ( v6 )
      v14 = *(_DWORD *)(v6 + 1320);
    else
      v14 = *(_DWORD *)(v10 + 4060);
    *(_DWORD *)(v8 + 12) = v14;
    *(_DWORD *)(v8 + 24) = v9 - 28;
    v15 = v6 == 0;
    *(_DWORD *)(v8 + 28) = 1;
    *(_DWORD *)(v8 + 32) = 24;
    *(_DWORD *)(v8 + 36) = 2;
    *(_DWORD *)(v8 + 40) = v15;
    *(_DWORD *)(v8 + 44) = 56;
    *(_DWORD *)(v8 + 48) = v9 - 56;
    if ( v7 )
      v16 = *(_DWORD *)(v7 + 8);
    else
      v16 = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v8 + 40) = v16 | v15;
    v17 = *(_DWORD *)(v10 + 5300);
    if ( v17 == 1 )
    {
      *(_DWORD *)(v8 + 56) = 1;
      v18 = (const void *)(v4 + 32);
      v19 = (void *)(v8 + 80);
      *(_DWORD *)(v8 + 60) = *(_DWORD *)(v4 + 24) + 24;
      *(_QWORD *)(v8 + 64) = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v8 + 72) = *(_QWORD *)(v4 + 24);
      v20 = *(unsigned int *)(v4 + 24);
    }
    else
    {
      if ( v17 != 2 )
        goto LABEL_34;
      *(_DWORD *)(v8 + 56) = 2;
      if ( v7 )
      {
        v18 = (const void *)(v7 + 40);
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(v7 + 16);
        *(_BYTE *)(v8 + 80) = *(_BYTE *)(v7 + 12);
        v20 = (unsigned int)*(_QWORD *)(v7 + 24);
        *(_QWORD *)(v8 + 72) = *(_QWORD *)(v7 + 24);
        *(_DWORD *)(v8 + 60) = v20 + 32;
        *(_DWORD *)(v8 + 84) = *(_DWORD *)(v7 + 32);
      }
      else
      {
        v18 = (const void *)(v4 + 32);
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(v4 + 16);
        *(_BYTE *)(v8 + 80) = *(_BYTE *)(v4 + 12);
        v20 = (unsigned int)*(_QWORD *)(v4 + 24);
        *(_QWORD *)(v8 + 72) = *(_QWORD *)(v4 + 24);
        *(_DWORD *)(v8 + 84) = 0;
        *(_DWORD *)(v8 + 60) = v20 + 32;
      }
      v19 = (void *)(v8 + 88);
    }
    memmove(v19, v18, v20);
    goto LABEL_34;
  }
  v5 = -1073741670;
LABEL_34:
  *a3 = v8;
  *a4 = v9;
  return v5;
}
