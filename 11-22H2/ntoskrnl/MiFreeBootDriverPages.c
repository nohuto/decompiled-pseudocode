/*
 * XREFs of MiFreeBootDriverPages @ 0x140B4A754
 * Callers:
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x140B4A1A8 (MiHandleBootImage.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BCC (MiLockAndDecrementShareCount.c)
 *     MiInsertLargeTbFlushEntry @ 0x140211C4C (MiInsertLargeTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284790 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiFreeLargePageMemory @ 0x1402E7498 (MiFreeLargePageMemory.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiFreeBootDriverPages(void *a1, unsigned __int64 a2, __int64 a3, char a4, int *a5)
{
  int *v5; // r14
  PVOID v8; // r15
  char v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  int v13; // r15d
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  __int64 v16; // rbx
  struct _KPRCB *v17; // r9
  unsigned __int64 v18; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v20; // zf
  signed __int32 v21; // eax
  __int64 v22; // r12
  unsigned __int64 v23; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  int v28; // [rsp+20h] [rbp-148h]
  int v29; // [rsp+24h] [rbp-144h]
  unsigned __int64 v31; // [rsp+30h] [rbp-138h]
  int *v32; // [rsp+38h] [rbp-130h]
  __int64 v33; // [rsp+48h] [rbp-120h] BYREF
  __int64 v34; // [rsp+50h] [rbp-118h]
  void *v35; // [rsp+58h] [rbp-110h]
  _QWORD v36[24]; // [rsp+60h] [rbp-108h] BYREF

  v5 = a5;
  v35 = a1;
  v8 = a1;
  v32 = a5;
  v9 = a4;
  memset(v36, 0, 0xB8uLL);
  v29 = v9 & 2;
  if ( !a5 )
  {
    v36[3] = 0LL;
    v5 = (int *)v36;
    v32 = (int *)v36;
    LODWORD(v36[1]) = 20;
  }
  v10 = a2 + 8 * (a3 - 1);
  v31 = v10;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    v28 = 1;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v31 = v10;
  }
  else
  {
    v28 = 0;
    MiInsertTbFlushEntry((__int64)v5, (__int64)(a2 << 25) >> 16, (8 * (a3 - 1) + 8) >> 3, 0);
  }
  v11 = 0LL;
  if ( a2 <= v10 )
  {
    while ( 1 )
    {
      v12 = ZeroPte;
      v33 = MI_READ_PTE_LOCK_FREE(a2);
      v13 = 0;
      if ( !MiPteInShadowRange(a2) )
        goto LABEL_7;
      if ( MiPteHasShadow() )
      {
        v13 = 1;
        if ( HIBYTE(word_140C66DFC) )
          goto LABEL_7;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_7;
      }
      if ( (ZeroPte & 1) != 0 )
        v12 = ZeroPte | 0x8000000000000000uLL;
LABEL_7:
      *(_QWORD *)a2 = v12;
      if ( v13 )
        MiWritePteShadow(a2, v12, v14);
      v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 12) & 0xFFFFFFFFFFLL;
      v16 = 48 * v15 - 0x220000000000LL;
      v34 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( v28 )
      {
        MiInsertLargeTbFlushEntry((__int64)v5, 1, a2);
        v22 = 512LL;
        do
        {
          v23 = (unsigned __int8)MiLockPageInline(v16);
          if ( !v29 )
            ++*(_WORD *)(v16 + 32);
          *(_BYTE *)(v16 + 35) &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && (unsigned __int8)v23 <= 0xFu
              && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
              v20 = (v27 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v27;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(v23);
          v16 += 48LL;
          --v22;
        }
        while ( v22 );
        MiFreeLargePageMemory(v15, 1u, v29 != 0 ? 4 : 6);
        v10 = v31;
        v5 = v32;
        v11 += 512LL;
      }
      else
      {
        *(_BYTE *)(v16 + 35) &= ~8u;
        MiLockAndDecrementShareCount(v16, 1);
        ++v11;
        MiReturnCommit((__int64)MiSystemPartition, 1LL);
        v17 = KeGetCurrentPrcb();
        v18 = 1LL;
        CachedResidentAvailable = (int)v17->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_49;
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v21 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v17->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v20 = (_DWORD)CachedResidentAvailable == v21;
            LODWORD(CachedResidentAvailable) = v21;
            if ( v20 )
              goto LABEL_13;
          }
          while ( v21 != -1 && (unsigned __int64)(v21 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v17->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v18 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( v18 )
LABEL_49:
          _InterlockedExchangeAdd64(&qword_140C6F880, v18);
      }
LABEL_13:
      MiLockAndDecrementShareCount(v34, 0);
      a2 += 8LL;
      if ( a2 > v10 )
      {
        v8 = v35;
        v9 = a4;
        break;
      }
    }
  }
  if ( v5 == (int *)v36 )
    MiFlushTbList(v5);
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
  {
    qword_140C69AA8 -= v11;
  }
  else if ( (v9 & 1) != 0 )
  {
    _InterlockedExchangeAdd(&dword_140C69AD0, -(int)v11);
  }
}
