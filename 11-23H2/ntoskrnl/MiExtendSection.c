/*
 * XREFs of MiExtendSection @ 0x1407069E4
 * Callers:
 *     MmExtendSection @ 0x140706714 (MmExtendSection.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     MiGetControlAreaPartition @ 0x140275940 (MiGetControlAreaPartition.c)
 *     MiIncrementSubsectionViewCount @ 0x140289480 (MiIncrementSubsectionViewCount.c)
 *     MiAppendSubsectionChain @ 0x140293568 (MiAppendSubsectionChain.c)
 *     MiDecrementSubsectionViewCount @ 0x14029FD60 (MiDecrementSubsectionViewCount.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiSetSubsectionBase @ 0x14036AC7C (MiSetSubsectionBase.c)
 *     MiSubsectionNeedsExtents @ 0x140636090 (MiSubsectionNeedsExtents.c)
 *     MiGetSubsectionCharges @ 0x14066B6F8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B904 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14066B9E4 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiInitializePrototypePtes @ 0x1406B0F14 (MiInitializePrototypePtes.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, ...)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int128 *v6; // rbp
  unsigned int v8; // r12d
  unsigned __int64 v9; // rdx
  char v10; // al
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned __int64 v13; // r14
  __int128 v14; // xmm1
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  int v18; // r13d
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned __int64 v23; // rbx
  unsigned int v24; // edi
  _QWORD *Pool; // rax
  _QWORD *v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rbp
  __int16 v33; // cx
  int appended; // eax
  __int16 v35; // r8
  unsigned __int64 v36; // rdx
  ULONG_PTR v38; // rbx
  ULONG_PTR v39; // rdi
  unsigned __int64 v40; // r14
  unsigned int v41; // eax
  unsigned __int64 v42; // rbp
  PVOID v43; // r12
  __int64 v44; // rbp
  unsigned __int64 v45; // r14
  int SubsectionCharges; // edi
  __int64 ControlAreaPartition; // rax
  ULONG_PTR v48; // rbp
  __int64 v49; // [rsp+20h] [rbp-108h]
  unsigned __int64 v50; // [rsp+28h] [rbp-100h]
  __int64 v51; // [rsp+30h] [rbp-F8h]
  __int128 v52; // [rsp+40h] [rbp-E8h] BYREF
  __int128 Privileges; // [rsp+50h] [rbp-D8h]
  __int128 v54; // [rsp+60h] [rbp-C8h]
  __int128 v55; // [rsp+70h] [rbp-B8h]
  __int128 v56; // [rsp+80h] [rbp-A8h]
  __int128 v57; // [rsp+90h] [rbp-98h]
  __int128 v58; // [rsp+A0h] [rbp-88h]
  __int128 v59; // [rsp+B0h] [rbp-78h]
  __int128 v60; // [rsp+C0h] [rbp-68h]
  __int64 v61; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v62; // [rsp+130h] [rbp+8h]
  __int64 v66; // [rsp+148h] [rbp+20h]
  _QWORD *v67; // [rsp+150h] [rbp+28h] BYREF
  va_list va; // [rsp+150h] [rbp+28h]
  va_list va1; // [rsp+158h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v67 = va_arg(va1, _QWORD *);
  v4 = 8 * a4;
  v6 = &v52;
  v49 = *(_QWORD *)a1;
  v5 = *(_QWORD *)a1;
  v8 = a3;
  *v67 = 0LL;
  v9 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v51 = *(_QWORD *)v5;
  v10 = *(_BYTE *)(v5 + 62);
  v11 = *(_OWORD *)(a1 + 16);
  v62 = v9;
  v52 = *(_OWORD *)a1;
  v12 = *(_OWORD *)(a1 + 32);
  Privileges = v11;
  v13 = 0LL;
  v14 = *(_OWORD *)(a1 + 48);
  v15 = (-(__int64)((v10 & 0xC) != 0) & 0x100000) + 0x100000;
  v16 = *(_QWORD *)(a1 + 144);
  v54 = v12;
  v17 = 0LL;
  v18 = 0;
  v50 = v15;
  v19 = *(_OWORD *)(a1 + 64);
  v55 = v14;
  v20 = *(_OWORD *)(a1 + 80);
  v56 = v19;
  v21 = *(_OWORD *)(a1 + 96);
  v57 = v20;
  v22 = *(_OWORD *)(a1 + 128);
  v58 = v21;
  v59 = *(_OWORD *)(a1 + 112);
  v60 = v22;
  v61 = v16;
  if ( v8 )
    DWORD1(v55) ^= (DWORD1(v55) ^ (DWORD1(v55) - v8)) & 0x3FFFFFFF;
  v23 = 0LL;
  while ( 1 )
  {
    if ( v9 - v13 > v15 )
      v24 = v15;
    else
      v24 = v9 - v13;
    Pool = MiAllocatePool(64, 0x98uLL, 0x64536D4Du);
    v26 = Pool;
    if ( !Pool )
    {
      v38 = Privileges;
LABEL_48:
      SubsectionCharges = -1073741670;
      goto LABEL_49;
    }
    v27 = v24 >> 3;
    Pool[11] = Pool + 10;
    Pool[10] = Pool + 10;
    *((_QWORD *)v6 + 2) = Pool;
    *Pool = v49;
    *((_DWORD *)Pool + 11) = v24 >> 3;
    v13 += v24;
    if ( v13 > 8 * a4 )
      *((_DWORD *)Pool + 13) ^= (*((_DWORD *)Pool + 13) ^ ((v13 >> 3) - a4)) & 0x3FFFFFFF;
    v28 = v51;
    *((_WORD *)Pool + 16) = Pool[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v51 + 14) >> 1) & 0x1F));
    if ( v6 == &v52 )
    {
      v29 = *((_DWORD *)v6 + 11);
      v30 = *((unsigned __int16 *)v6 + 16);
      *((_WORD *)v6 + 17) &= 0xFu;
      *((_DWORD *)v6 + 10) = v29;
      v23 = *((unsigned int *)v6 + 9) | ((v30 & 0xFFFFFFFFFFFFFFC0uLL) << 26);
    }
    v31 = *((unsigned int *)v6 + 10);
    v32 = v62;
    v23 += v31;
    v33 = v26[4] & 0x3F | (WORD2(v23) << 6);
    *((_DWORD *)v26 + 9) = v23;
    *((_WORD *)v26 + 16) = v33;
    if ( v13 >= v62 )
      break;
    *((_DWORD *)v26 + 10) = v27;
    v6 = (__int128 *)v26;
    v9 = v62;
    v15 = v50;
  }
  *((_DWORD *)v26 + 10) = (*a2 >> 12) - v23;
  *((_WORD *)v26 + 17) = *((_WORD *)v26 + 17) & 0xF | (16 * *(_WORD *)a2);
  if ( v8 && (*(_BYTE *)(v49 + 62) & 0xC) != 0 && *(_QWORD *)(a1 + 8) )
  {
    MiSubsectionNeedsExtents((_DWORD *)a1);
    *v67 = a1;
  }
  appended = MiAppendSubsectionChain((__int64 *)a1, (__int64)&v52, 0);
  if ( !appended )
  {
LABEL_14:
    v35 = *(_WORD *)(v28 + 12);
    v36 = (*(unsigned int *)(v28 + 8) | ((unsigned __int64)(v35 & 0x3FF) << 32)) + a4 + v8;
    *(_DWORD *)(v28 + 8) += a4 + v8;
    *(_WORD *)(v28 + 12) = v35 ^ (v35 ^ WORD2(v36)) & 0x3FF;
    return 0LL;
  }
  v38 = Privileges;
LABEL_16:
  if ( (appended & 1) != 0 )
  {
    v18 |= 1u;
    v39 = v38;
    v40 = 0LL;
    while ( 1 )
    {
      v41 = v32 - v40;
      if ( v32 - v40 > v50 )
        v41 = v50;
      v42 = v41;
      v40 += v41;
      v43 = MiAllocatePool(274, v41, 0x74536D4Du);
      if ( !v43 )
        goto LABEL_48;
      MiInitializePrototypePtes((ULONG_PTR)v43, v42 >> 3, (unsigned __int16 *)v39, (*(_BYTE *)(v49 + 62) & 0xC) != 4);
      if ( (*(_BYTE *)(v49 + 62) & 0xC) != 0 )
      {
        if ( !*v67 )
          *v67 = v39;
      }
      else if ( (v18 & 2) != 0 )
      {
        MiDecrementSubsectionViewCount((__int64 *)v39, 0);
      }
      MiSetSubsectionBase(v39, (__int64)v43, 0xFFFFFFFF, 0LL);
      MiUpdateSystemProtoPtesTree(v39 + 120, 1);
      v32 = v62;
      v39 = *(_QWORD *)(v39 + 16);
      if ( v40 >= v62 )
      {
        v8 = a3;
        goto LABEL_26;
      }
    }
  }
  v18 |= 2u;
  v44 = v38;
  while ( 1 )
  {
    v45 = *(_DWORD *)(v44 + 44) - (*(_DWORD *)(v44 + 52) & 0x3FFFFFFFu);
    SubsectionCharges = MiGetSubsectionCharges(v44, v45);
    if ( SubsectionCharges < 0 )
      break;
    if ( (int)MiIncrementSubsectionViewCount((__int64 *)v44, 56) <= 1 )
    {
      v17 += v45;
      break;
    }
    if ( (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
      MiUpdateSubsectionCrossPartitionRefs((_DWORD *)v44, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
    v44 = *(_QWORD *)(v44 + 16);
    if ( !v44 )
    {
      if ( v8 )
      {
        SubsectionCharges = MiGetSubsectionCharges(a1, v8);
        if ( SubsectionCharges < 0 )
          break;
        v17 += v8;
      }
      v32 = v62;
LABEL_26:
      appended = MiAppendSubsectionChain((__int64 *)a1, (__int64)&v52, v18);
      if ( !appended )
      {
        v28 = v51;
        goto LABEL_14;
      }
      goto LABEL_16;
    }
  }
LABEL_49:
  ControlAreaPartition = MiGetControlAreaPartition(v49);
  v66 = ControlAreaPartition;
  if ( v17 )
  {
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1, v17);
    v17 = 0LL;
  }
  if ( v38 )
  {
    do
    {
      v48 = *(_QWORD *)(v38 + 16);
      if ( (*(_BYTE *)(v49 + 62) & 0xC) != 0 )
      {
        if ( *(_QWORD *)(v38 + 8) )
        {
          v67 = 0LL;
          MiDeleteSubsectionPages((_QWORD *)v38, (__int64)va);
        }
      }
      else
      {
        if ( (v18 & 2) != 0 && (*(_DWORD *)(v38 + 48) & 0x3FFFFFFF) != 0 )
          v17 += MiDecrementSubsectionViewCount((__int64 *)v38, 24);
        if ( *(_QWORD *)(v38 + 8) )
        {
          MiUpdateSystemProtoPtesTree(v38 + 120, 0);
          ExFreePoolWithTag(*(PVOID *)(v38 + 8), 0);
        }
      }
      CmSiFreeMemory((PPRIVILEGE_SET)v38);
      v38 = v48;
    }
    while ( v48 );
    if ( v17 )
      MiReturnCrossPartitionSectionCharges(v66, 1, v17);
  }
  return (unsigned int)SubsectionCharges;
}
