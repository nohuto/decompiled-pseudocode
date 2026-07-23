/*
 * XREFs of MiPfnShareCountIsZero @ 0x140281B50
 * Callers:
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiDeleteValidSystemPage @ 0x140280AA0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x140281630 (MiWsleFree.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402D6200 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x1402DD110 (MiDeleteTransitionPte.c)
 *     MiUnlockPageTableCharges @ 0x1402E2DD0 (MiUnlockPageTableCharges.c)
 *     MiReduceShareCount @ 0x1403680B4 (MiReduceShareCount.c)
 * Callees:
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x1402F2AF4 (MiGetPagingFileOffset.c)
 *     MiInsertProtectedStandbyPage @ 0x1403352C0 (MiInsertProtectedStandbyPage.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(ULONG_PTR a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // r14
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // al
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned __int64 UltraMapping; // r8
  __int64 v15; // rdi
  _QWORD *v16; // r12
  __int64 v17; // r11
  __int64 v18; // r15
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // eax
  __int64 ValidPte; // rbx
  _QWORD *MmInternal; // rbp
  __int64 *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rbx
  char v29; // al
  char v30; // al
  __int64 v31; // [rsp+70h] [rbp+8h]
  __int64 v32; // [rsp+80h] [rbp+18h] BYREF

  v4 = (_QWORD *)(a1 + 16);
  v5 = a2;
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    UltraMapping = 0LL;
    v15 = *v4 >> 5;
    v16 = (_QWORD *)a1;
    v17 = 0LL;
    v31 = 0LL;
    do
    {
      v18 = ((unsigned int)v16[1] >> 3) & 0x1FF;
      if ( !UltraMapping )
      {
        v19 = 4;
        v20 = v16[5] & 0xFFFFFFFFFFLL;
        v21 = *(unsigned __int8 *)(48 * v20 - 0x220000000000LL + 34) >> 6;
        if ( !v21 || v21 == 3 )
        {
          v19 = 12;
        }
        else if ( v21 == 2 )
        {
          v19 = 28;
        }
        ValidPte = MiMakeValidPte(0LL, v20, v19 | 0xA0000000);
        MmInternal = KeGetCurrentPrcb()->MmInternal;
        UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
        v17 = v31;
        v24 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        MmInternal[1543] = v24;
        *v24 = ValidPte;
      }
      v25 = (*(_QWORD *)(UltraMapping + 8 * v18) >> 12) & 0xFFFFFFFFFFLL;
      if ( (_QWORD *)(48 * v25 - 0x220000000000LL) != v16 )
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v16 + 0x44000000000LL) >> 4),
          v18 + UltraMapping,
          *(_QWORD *)(UltraMapping + 8 * v18));
      a2 = qword_140C65B40;
      a4 = v25 << 7;
      v26 = 32 * (a4 | v15 & 0x1F | 0x40);
      if ( qword_140C65B40 )
      {
        if ( (v26 & qword_140C65B40) != 0 )
          v26 |= 0x10uLL;
        else
          v26 |= qword_140C65B40;
      }
      *(_QWORD *)(UltraMapping + 8 * v18) = v26;
      v31 = ++v17;
      if ( v17 == 1 )
        break;
      v16 = (_QWORD *)(48 * (*v16 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    }
    while ( !v17 );
    a3 = (_QWORD *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
    *a3 = ZeroPte;
  }
  v7 = *(_QWORD *)(a1 + 24);
  --*(_WORD *)(a1 + 32);
  v8 = (v7 >> 62) & 1;
  if ( *(_WORD *)(a1 + 32) )
  {
    v29 = *(_BYTE *)(a1 + 34);
    if ( (_DWORD)v8 )
    {
      v30 = v29 | 7;
    }
    else if ( (v29 & 0x10) != 0 )
    {
      v30 = v29 & 0xF8 | 3;
    }
    else if ( (v29 & 8) != 0 )
    {
      v4 = (_QWORD *)(a1 + 16);
      v30 = v29 & 0xF8 | 3;
    }
    else
    {
      v30 = v29 & 0xF8 | 2;
    }
    *(_BYTE *)(a1 + 34) = v30;
    if ( (*(_DWORD *)v4 & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v4, a2, a3, a4) )
      *(_BYTE *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 715LL) = 1;
    return 3LL;
  }
  else
  {
    if ( (_DWORD)v8 )
    {
      v27 = *(_BYTE *)(a1 + 35);
      if ( (v27 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v27 & 0xEF;
      v28 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      v32 = *v4;
      if ( (v32 & 0x400) == 0 && ((v32 & 4) != 0 || (v32 & 2) != 0) )
      {
        v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32);
        if ( v12 )
          MiReleasePageFileInfo(v28, v12, 0LL);
      }
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
    }
    else
    {
      v9 = -9LL;
      if ( (*v4 & 0x400LL) != 0 )
        v9 = -2049LL;
      *v4 &= v9;
      v10 = *(_BYTE *)(a1 + 34);
      if ( (v10 & 0x10) != 0 )
      {
        v11 = 136;
        if ( v5 != 1 )
          v11 = 8;
        MiInsertPageInList(a1, v11);
      }
      else
      {
        *(_BYTE *)(a1 + 34) = v10 & 0xF8 | 2;
        if ( v5 <= 1 || (unsigned int)MiGetPfnPriority(a1) >= 5 )
          MiInsertPageInList(a1, 4u);
        else
          MiInsertProtectedStandbyPage(v5, a1);
      }
    }
    return 4LL;
  }
}
