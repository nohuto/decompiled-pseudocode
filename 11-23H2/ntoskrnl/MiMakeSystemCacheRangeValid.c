/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x140267AF0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiAllocateWsle @ 0x14026BA60 (MiAllocateWsle.c)
 *     MiAddWorkingSetEntries @ 0x14026BFB0 (MiAddWorkingSetEntries.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A2680 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     MiStartingOffset @ 0x1402E25A0 (MiStartingOffset.c)
 *     PfSnLogPageFault @ 0x1402E27A0 (PfSnLogPageFault.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140339F60 (MiEmptyDeferredWorkingSetEntries.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, unsigned __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r12
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  char v9; // al
  volatile __int32 *v10; // rdi
  __int64 CurrentIrql; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // r13
  unsigned __int64 v15; // rcx
  char v16; // di
  __int64 v17; // r10
  __int64 v18; // rbx
  __int64 v19; // r14
  unsigned __int64 *v20; // r12
  unsigned __int64 v21; // rbx
  _QWORD *v22; // r15
  unsigned int v23; // eax
  bool v24; // sf
  int v25; // eax
  __int64 result; // rax
  unsigned __int64 *v27; // r15
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned __int8 v40; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v42; // r9
  bool v43; // zf
  signed __int32 v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+40h] [rbp-C0h]
  signed __int32 v46; // [rsp+48h] [rbp-B8h]
  __int64 v47; // [rsp+48h] [rbp-B8h]
  signed __int32 v48; // [rsp+48h] [rbp-B8h]
  __int128 v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h]
  unsigned int v51; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 *v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h]
  _QWORD v57[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v58[16]; // [rsp+120h] [rbp+20h]

  v4 = a3;
  v52 = a2;
  v51 = a3;
  v56 = a4;
  v50 = 0LL;
  v49 = 0LL;
  memset(v57, 0, sizeof(v57));
  v58[0] = 0LL;
  v55 = 0LL;
  v7 = (__int64)(a1 << 25) >> 16;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = byte_140C6F8B8 & 7;
  if ( (byte_140C6F8B8 & 7u) > 4 )
  {
    if ( v9 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v53 = CurrentIrql;
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
          LODWORD(v38) = 4;
        else
          v38 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v38;
      }
      goto LABEL_10;
    }
  }
  else if ( v9 == 2 )
  {
    v10 = (volatile __int32 *)&unk_140C6A180;
    goto LABEL_4;
  }
  v10 = (volatile __int32 *)&unk_140C6F8C0;
LABEL_4:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v39) = 4;
    else
      v39 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v39;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, (unsigned __int8)CurrentIrql);
  }
  else
  {
    _m_prefetchw((const void *)v10);
    v46 = *v10 & 0x7FFFFFFF;
    v44 = _InterlockedCompareExchange(v10, v46 + 1, v46);
    if ( v44 != v46 )
    {
      while ( v44 >= 0 )
      {
        v48 = v44;
        v44 = _InterlockedCompareExchange(v10, v44 + 1, v44);
        if ( v44 == v48 )
          goto LABEL_7;
      }
      ExpWaitForSpinLockSharedAndAcquire(v10, (unsigned __int8)CurrentIrql);
    }
  }
LABEL_7:
  if ( *((_DWORD *)v10 + 1) )
    _InterlockedExchange(v10 + 1, 0);
  v53 = CurrentIrql;
LABEL_10:
  MiLockPageTableInternal(
    (__int64)&unk_140C6F800,
    ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
    0,
    (__int64)SchedulerAssist);
  v12 = *(_QWORD *)(48 * ((*(_QWORD *)(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL
                  + 16);
  if ( v12 )
    v12 += 40 * ((v7 >> 18) & 7);
  v13 = *(_QWORD *)(v12 + 24);
  v14 = WORD5(v49);
  v15 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  BYTE12(v49) = CurrentIrql;
  v50 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (v13 & 1) == 0 )
    v15 = v13;
  v16 = BYTE13(v49) | 4;
  BYTE13(v49) |= 4u;
  v17 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(*(_QWORD *)v15 + 60LL) & 0x3FF)) + 17344LL;
  v45 = v17;
  v18 = v17;
  *(_QWORD *)&v49 = v17;
  if ( (_DWORD)v4 )
  {
    v54 = v4;
    v47 = v4;
    v19 = 0LL;
    v20 = v52;
    while ( 1 )
    {
      v21 = *v20;
      v57[v19] = 0LL;
      if ( v21 )
      {
        if ( (v21 & 1) != 0 )
        {
          if ( (*(_BYTE *)a1 & 1) == 0 )
          {
            v22 = (_QWORD *)(48 * ((v21 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
            v52 = (unsigned __int64 *)v22[2];
            v58[v19] = v52;
            if ( (v16 & 4) == 0 || (v16 & 1) != 0 || (v16 & 2) != 0 )
            {
              v25 = 0;
            }
            else
            {
              if ( !v14 )
              {
                v23 = a1;
                goto LABEL_24;
              }
              if ( v14 + WORD4(v49) != (((unsigned int)a1 >> 3) & 0x1FF) )
                goto LABEL_56;
              if ( (__int64)v22[5] >= 0 )
              {
                if ( (v16 & 0x10) == 0 )
                  goto LABEL_56;
              }
              else
              {
                if ( (v16 & 0x10) == 0 )
                  goto LABEL_46;
LABEL_56:
                MiEmptyDeferredWorkingSetEntries(&v49);
                LODWORD(v17) = v45;
                v14 = WORD5(v49);
                v16 = BYTE13(v49);
              }
LABEL_46:
              v23 = a1;
              if ( v14 )
              {
                WORD5(v49) = ++v14;
              }
              else
              {
LABEL_24:
                v14 = 1;
                WORD5(v49) = 1;
                v24 = (__int64)v22[5] < 0;
                WORD4(v49) = (v23 >> 3) & 0x1FF;
                if ( v24 )
                  v16 &= ~0x10u;
                else
                  v16 |= 0x10u;
                BYTE13(v49) = v16;
              }
              v25 = 4;
            }
            MiAllocateWsle(v17, a1, 48 * (v21 >> 12), 0, v21, v25, 0LL);
            if ( ((unsigned __int16)v52 & 0x400) != 0 && PfSnNumActiveTraces )
              v57[v19] = v22[1] | 0x8000000000000000uLL;
            goto LABEL_31;
          }
        }
        else
        {
          *v20 = v21 | 1;
        }
        v57[v19] = 1LL;
      }
LABEL_31:
      v17 = v45;
      ++v19;
      ++v20;
      a1 += 8LL;
      if ( !--v47 )
      {
        v8 = v50;
        v18 = v49;
        LOBYTE(CurrentIrql) = v53;
        v52 = v20;
        v4 = v54;
        break;
      }
    }
  }
  if ( v8 )
  {
    if ( v14 )
    {
      MiAddWorkingSetEntries(
        v18,
        ((unsigned __int64)WORD4(v49) << 12) + (((((v8 << 25) - v55) >> 16 << 25) - v55) >> 16),
        v14);
      WORD5(v49) = 0;
    }
    MiUnlockPageTableInternal(v18, v8);
    v17 = v45;
    BYTE13(v49) = v16 | 2;
    v50 = 0LL;
  }
  MiUnlockWorkingSetShared(v17, CurrentIrql);
  result = -v4;
  v27 = &v52[-v4];
  if ( v51 )
  {
    v28 = 0LL;
    do
    {
      v29 = v57[v28];
      if ( v29 == 1 )
      {
        v35 = 48 * ((*v27 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v36 = (unsigned __int8)MiLockPageInline(v35);
        MiDecrementShareCount(v35);
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v37 = v56;
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v51);
          while ( *(__int64 *)(v37 + 24) < 0 );
        }
        MiDecrementShareCount(v37);
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = (unsigned int)KiIrqlFlags;
        if ( (_DWORD)KiIrqlFlags )
        {
          v40 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v40 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v42 = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
            v43 = ((unsigned int)result & v42[5]) == 0;
            v42[5] &= result;
            if ( v43 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v36);
      }
      else if ( v29 )
      {
        v30 = v58[v28];
        if ( qword_140C65B40 )
        {
          if ( (v30 & 0x10) == 0 )
            v30 &= ~qword_140C65B40;
        }
        v31 = v30 >> 16;
        v32 = *(_QWORD *)v31;
        v33 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v31, 1666411853LL);
        v34 = MiStartingOffset(v31, v29, 0xFFFFFFFFLL);
        PfSnLogPageFault(v33, v34, 4LL);
        result = ObFastDereferenceObjectDeferDelete(v32 + 64, v33, 1666411853LL);
      }
      ++v28;
      ++v27;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
