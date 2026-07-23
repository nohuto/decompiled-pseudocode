/*
 * XREFs of MiExpandSharedZeroCluster @ 0x1402F2828
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140269FD0 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiIsPteEvaluated @ 0x1402F2A98 (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiComputeZeroClusterMaximum @ 0x1402F2B40 (MiComputeZeroClusterMaximum.c)
 *     MiUpdatePageTableUseCount @ 0x1402F2C90 (MiUpdatePageTableUseCount.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r14d
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  unsigned __int64 ProtoPteAddress; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edi
  unsigned __int64 v20; // rsi
  unsigned int v21; // r15d
  __int64 *v22; // rbx
  int v23; // ecx
  unsigned __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v27; // [rsp+20h] [rbp-89h]
  unsigned __int64 v28; // [rsp+28h] [rbp-81h]
  unsigned __int64 v29; // [rsp+30h] [rbp-79h]
  __int128 v30; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v31[22]; // [rsp+50h] [rbp-59h] BYREF
  char v32; // [rsp+110h] [rbp+67h]
  unsigned __int64 v33; // [rsp+118h] [rbp+6Fh]
  __int64 v34; // [rsp+120h] [rbp+77h] BYREF
  __int64 v35; // [rsp+128h] [rbp+7Fh] BYREF

  memset(v31, 0, 0x68uLL);
  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 56);
  v30 = 0LL;
  v6 = *(_QWORD **)(v2 + 120);
  v35 = 0LL;
  v32 = 0;
  v28 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x200000) == 0 && MiVadPageSizes[(v8 >> 19) & 3] == 16 )
  {
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v30 + 1) = 0x10000LL;
    *(_QWORD *)&v30 = v4;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    LOWORD(v31[0]) = 2;
    v31[1] = &v30;
    v5 = v31;
    v31[2] = 1LL;
    v31[3] = 0LL;
    v31[4] = 0LL;
    v32 = 1;
  }
  v29 = MiComputeZeroClusterMaximum(
          v5,
          &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
          v2);
  v9 = v4 >> 12;
  v27 = 0LL;
  v10 = 0LL;
  v33 = v4 >> 12;
  v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v29 )
    return 1LL;
  do
  {
    if ( (unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(a1 + 32)) )
      break;
    ProtoPteAddress = MiGetProtoPteAddress(v2, v9, 4, &v35);
    v13 = ProtoPteAddress;
    if ( !ProtoPteAddress )
      break;
    if ( !v35 )
      break;
    v14 = v27;
    if ( v27 )
    {
      if ( v35 != v27 )
        break;
    }
    if ( ((*(_QWORD *)(a1 + 24) ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v27 )
      v14 = v35;
    v27 = v14;
    if ( v33 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v7 )
      break;
    v15 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v34 = v15;
    if ( (v15 & 1) != 0
      || !v15
      || (v15 & 0x400) != 0
      || (v15 & 0x800) != 0
      || (unsigned int)MiGetPagingFileOffset(&v34, v16, v17, v18) )
    {
      break;
    }
    if ( !v3 )
      v10 = v13;
    ++v3;
    v9 = v33 + 1;
    v11 += 8LL;
    ++v33;
  }
  while ( v3 < v29 );
  if ( v3 <= 1 || v32 && v11 <= ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v19 = 0;
  v20 = v3;
  v21 = 0;
  v22 = (__int64 *)(v11 - 8LL * v3);
  do
  {
    v23 = *(_DWORD *)(a1 + 32);
    if ( v23 == 256 )
      v24 = (v10 << 16) | 0x400;
    else
      v24 = 32 * (v23 & 0x1F | 0xFFFFFFFFF8000020uLL);
    v34 = MiSwizzleInvalidPte(v24);
    v25 = v34;
    if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v22) )
    {
      *v22 = v25;
      ++v19;
    }
    ++v21;
    ++v22;
    v10 += 8LL;
  }
  while ( v21 < v20 );
  if ( v19 )
    MiUpdatePageTableUseCount(v28, v19);
  return v20;
}
