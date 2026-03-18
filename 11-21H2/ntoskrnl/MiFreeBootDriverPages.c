/*
 * XREFs of MiFreeBootDriverPages @ 0x140B05620
 * Callers:
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x140B050A8 (MiHandleBootImage.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiFreeLargePageMemory @ 0x14028CA70 (MiFreeLargePageMemory.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiFreeBootDriverPages(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r14
  __int64 v8; // r15
  char v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  int v13; // r15d
  unsigned __int64 v14; // r13
  __int64 v15; // rbx
  struct _KPRCB *v16; // r9
  unsigned __int64 v17; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v19; // zf
  signed __int32 v20; // eax
  __int64 v21; // r12
  unsigned __int64 v22; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  int v27; // [rsp+20h] [rbp-148h]
  int v28; // [rsp+24h] [rbp-144h]
  unsigned __int64 v30; // [rsp+30h] [rbp-138h]
  _QWORD *v31; // [rsp+38h] [rbp-130h]
  __int64 v32; // [rsp+48h] [rbp-120h] BYREF
  __int64 v33; // [rsp+50h] [rbp-118h]
  __int64 v34; // [rsp+58h] [rbp-110h]
  _QWORD v35[24]; // [rsp+60h] [rbp-108h] BYREF

  v5 = a5;
  v34 = a1;
  v8 = a1;
  v31 = a5;
  v9 = a4;
  memset(v35, 0, 0xB8uLL);
  v28 = v9 & 2;
  if ( !a5 )
  {
    v35[3] = 0LL;
    v5 = v35;
    v31 = v35;
    LODWORD(v35[1]) = 20;
  }
  v10 = a2 + 8 * (a3 - 1);
  v30 = v10;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    v27 = 1;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v30 = v10;
  }
  else
  {
    v27 = 0;
    MiInsertTbFlushEntry((__int64)v5, (__int64)(a2 << 25) >> 16, (8 * (a3 - 1) + 8) >> 3, 0);
  }
  v11 = 0LL;
  if ( a2 <= v10 )
  {
    while ( 1 )
    {
      v12 = ZeroPte;
      v32 = MI_READ_PTE_LOCK_FREE(a2);
      v13 = 0;
      if ( !MiPteInShadowRange(a2) )
        goto LABEL_7;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( HIBYTE(word_140C51864) )
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
        MiWritePteShadow(a2, v12);
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFFLL;
      v15 = 48 * v14 - 0x220000000000LL;
      v33 = 48 * (*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( v27 )
      {
        MiInsertLargeTbFlushEntry((__int64)v5, 1u, a2);
        v21 = 512LL;
        do
        {
          v22 = (unsigned __int8)MiLockPageInline(v15);
          if ( !v28 )
            ++*(_WORD *)(v15 + 32);
          *(_BYTE *)(v15 + 35) &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
                v19 = (v26 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v26;
                if ( v19 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v22);
          v15 += 48LL;
          --v21;
        }
        while ( v21 );
        MiFreeLargePageMemory(v14, 1u, v28 != 0 ? 4 : 6);
        v10 = v30;
        v5 = v31;
        v11 += 512LL;
      }
      else
      {
        *(_BYTE *)(v15 + 35) &= ~8u;
        MiLockAndDecrementShareCount(v15, 1);
        ++v11;
        MiReturnCommit((__int64)&MiSystemPartition, 1LL);
        v16 = KeGetCurrentPrcb();
        v17 = 1LL;
        CachedResidentAvailable = (int)v16->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_49;
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v20 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v16->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v19 = (_DWORD)CachedResidentAvailable == v20;
            LODWORD(CachedResidentAvailable) = v20;
            if ( v19 )
              goto LABEL_13;
          }
          while ( v20 != -1 && (unsigned __int64)(v20 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v16->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v17 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( v17 )
LABEL_49:
          _InterlockedExchangeAdd64(&qword_140C591C0, v17);
      }
LABEL_13:
      MiLockAndDecrementShareCount(v33, 0);
      a2 += 8LL;
      if ( a2 > v10 )
      {
        v8 = v34;
        v9 = a4;
        break;
      }
    }
  }
  if ( v5 == v35 )
    MiFlushTbList((__int64)v5);
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
  {
    qword_140C53528 -= v11;
  }
  else if ( (v9 & 1) != 0 )
  {
    _InterlockedExchangeAdd(&dword_140C53550, -(int)v11);
  }
}
