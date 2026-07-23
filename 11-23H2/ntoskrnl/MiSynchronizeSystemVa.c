/*
 * XREFs of MiSynchronizeSystemVa @ 0x140261C40
 * Callers:
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x140398C2C (MiLockStealSystemVm.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiFastLockLeafPageTable @ 0x140237350 (MiFastLockLeafPageTable.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiGetSystemCacheReverseMap @ 0x1402626A0 (MiGetSystemCacheReverseMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiFillPteHierarchy @ 0x14028B180 (MiFillPteHierarchy.c)
 *     MiUnlockSystemVa @ 0x1402EEFF0 (MiUnlockSystemVa.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPageTableStillExists @ 0x1403A9200 (MiPageTableStillExists.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  char v8; // al
  unsigned __int8 v9; // al
  volatile __int32 *v10; // rdi
  unsigned __int8 v11; // r15
  unsigned __int8 CurrentIrql; // dl
  int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdi
  __int64 SystemCacheReverseMap; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  char *AnyMultiplexedVm; // rax
  _DWORD *SchedulerAssist; // r10
  __int64 v25; // r8
  int v26; // eax
  unsigned __int64 valid; // rax
  __int64 SharedVm; // rdi
  KIRQL v29; // al
  _DWORD *v30; // r9
  __int64 v31; // r8
  signed __int32 v32; // [rsp+20h] [rbp-58h]
  unsigned __int64 v33; // [rsp+28h] [rbp-50h] BYREF
  __int128 v34; // [rsp+30h] [rbp-48h] BYREF
  __int128 v35; // [rsp+40h] [rbp-38h]
  signed __int32 v36; // [rsp+90h] [rbp+18h]
  signed __int32 v37; // [rsp+90h] [rbp+18h]

  v5 = 0;
  LODWORD(v33) = 0;
  v34 = 0LL;
  v35 = 0LL;
  if ( !(_DWORD)a3 )
    return 0LL;
  *(_DWORD *)(a5 + 16) = 0;
  v8 = *(_BYTE *)(a5 + 37);
  *(_QWORD *)(a5 + 24) = a1;
  if ( (_DWORD)a4 )
  {
    *(_BYTE *)(a5 + 37) = v8 | 1;
    SharedVm = MiGetSharedVm(a1, a2, a3, a4);
    v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    *(_BYTE *)(a5 + 36) = v29;
    MiFillPteHierarchy(a2, &v34);
    if ( !(unsigned int)MiPageTableStillExists(&v34, &v33) )
      goto LABEL_57;
    if ( (_DWORD)v33 )
    {
      if ( (*(_DWORD *)(a5 + 4) & 4) == 0 )
        goto LABEL_57;
      *(_DWORD *)(a5 + 16) = v33;
    }
    goto LABEL_15;
  }
  *(_BYTE *)(a5 + 37) = v8 & 0xFE;
  v9 = *(_BYTE *)(a1 + 184) & 7;
  if ( v9 > 4u )
  {
    if ( v9 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v25) = 4;
        else
          v25 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v25;
      }
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v9 != 2 )
  {
LABEL_5:
    v10 = (volatile __int32 *)(a1 + 192);
    goto LABEL_6;
  }
  v10 = (volatile __int32 *)&unk_140C6A180;
LABEL_6:
  v11 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
  {
    v30 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v11 == 2 )
      LODWORD(v31) = 4;
    else
      v31 = (-1LL << (v11 + 1)) & 4;
    v30[5] |= v31;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, v11);
  }
  else
  {
    _m_prefetchw((const void *)v10);
    v36 = *v10 & 0x7FFFFFFF;
    v32 = _InterlockedCompareExchange(v10, v36 + 1, v36);
    if ( v32 != v36 )
    {
      while ( v32 >= 0 )
      {
        v37 = v32;
        v32 = _InterlockedCompareExchange(v10, v32 + 1, v32);
        if ( v32 == v37 )
          goto LABEL_9;
      }
      ExpWaitForSpinLockSharedAndAcquire(v10, v11);
    }
  }
LABEL_9:
  if ( *((_DWORD *)v10 + 1) )
    _InterlockedExchange(v10 + 1, 0);
  CurrentIrql = v11;
LABEL_12:
  *(_BYTE *)(a5 + 36) = CurrentIrql;
  v33 = 0LL;
  v13 = MiFastLockLeafPageTable(a1, a2, 0);
  v15 = a2 >> 9;
  if ( v13 )
  {
    *(_QWORD *)&v34 = (v15 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v34 + 1) = (((unsigned __int64)v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v35 = ((*((_QWORD *)&v34 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v35 + 1) = (((unsigned __int64)v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = *((_QWORD *)&v34 + v13);
    v17 = *((_QWORD *)&v34 + v13 - 1);
    v33 = v17;
    v18 = v34;
    if ( v16 )
      goto LABEL_14;
  }
  else
  {
    v18 = (v15 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  valid = MiLockLowestValidPageTable(a1, v18, &v33, v14);
  v17 = v33;
  v16 = valid;
LABEL_14:
  *(_QWORD *)(a5 + 40) = v16;
  if ( v17 != v18 )
  {
    if ( (*(_DWORD *)(a5 + 4) & 4) != 0 && (MI_READ_PTE_LOCK_FREE(v17) & 0x81) == 0x81 )
    {
      do
      {
        v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = ++v5;
      }
      while ( v18 != v17 );
      *(_DWORD *)(a5 + 16) = v26;
      return 1LL;
    }
    goto LABEL_57;
  }
LABEL_15:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    if ( *(_DWORD *)(a5 + 48) == 3 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
LABEL_25:
      *(_QWORD *)(a5 + 24) = AnyMultiplexedVm;
      return 1LL;
    }
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2);
    if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 32) >> 62 == 3 )
    {
      v21 = MiGetSystemCacheReverseMap(a2);
      v22 = *(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (*(_QWORD *)(v21 + 24) & 1) == 0 )
        v22 = *(_QWORD *)(v21 + 24);
      AnyMultiplexedVm = (char *)(*(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(*(_QWORD *)v22 + 60LL) & 0x3FF))
                                + 17344LL);
      goto LABEL_25;
    }
LABEL_57:
    MiUnlockSystemVa(a5);
    return 0LL;
  }
  return 1LL;
}
