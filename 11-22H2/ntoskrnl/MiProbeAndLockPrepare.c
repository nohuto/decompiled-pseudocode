/*
 * XREFs of MiProbeAndLockPrepare @ 0x140234D90
 * Callers:
 *     MmProbeAndLockPages @ 0x140238770 (MmProbeAndLockPages.c)
 *     MiProbeAndLockPages @ 0x1402FC270 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403D4D60 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x14065D30C (MmStoreProbeAndLockPages.c)
 *     MmLockPhysicalPagesByVa @ 0x140A2D764 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B13C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x1402622F0 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockAndDereferenceVad @ 0x140274970 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     MiVadPureReserve @ 0x140277A50 (MiVadPureReserve.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316B90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046AE92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1406F78B0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        signed __int32 a5,
        signed __int32 a6,
        char a7)
{
  char v7; // r15
  signed __int32 v9; // r9d
  __int16 v12; // cx
  int v13; // r8d
  unsigned int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int16 v20; // cx
  __int16 v21; // ax
  __int16 v22; // cx
  __int64 v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // r8
  int v26; // esi
  char *AnyMultiplexedVm; // rdi
  unsigned int v28; // edx
  int v29; // edx
  unsigned __int8 v30; // al
  volatile __int32 *v31; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v33; // dl
  int v34; // ecx
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // edx
  __int64 SystemCacheReverseMap; // rax
  unsigned __int64 v40; // rcx
  _DWORD *v41; // r10
  unsigned __int64 SessionVm; // rax
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // rax
  int v46; // ecx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned int v49; // esi
  unsigned int v50; // edx
  unsigned int v51; // edx
  _DWORD *SchedulerAssist; // r9
  int v53; // [rsp+50h] [rbp+8h] BYREF

  v7 = a7;
  v9 = a6;
  *(_QWORD *)(a1 + 80) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a3;
  v12 = a3;
  v53 = 0;
  if ( (v7 & 2) != 0 )
    v13 = 64;
  else
    v13 = 0;
  v14 = *(_DWORD *)(a1 + 72) & 0xFFFFFFBF;
  *(_QWORD *)(a1 + 16) = a3 + a4;
  v15 = v13 | v14;
  *(_DWORD *)(a1 + 72) = v15;
  if ( (_BYTE)a5 )
  {
    if ( !a4 || (v16 = a4 + a3 - 1, v16 < a3) || v16 > 0x7FFFFFFEFFFFLL )
    {
      ++dword_140C67FF0;
      return 3221225477LL;
    }
  }
  v17 = a3 + a4 - 1;
  if ( (v15 & 0x40) != 0 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = a2 + 48;
    a4 = (v12 & 0xFFF) + *(unsigned int *)(a2 + 40) + 4095LL;
  }
  v19 = a4 >> 12;
  *(_QWORD *)(a1 + 56) = v18;
  *(_QWORD *)(a1 + 24) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 32) = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 144) = 0x3FFFFFFFFFLL;
  v20 = *(_WORD *)(a2 + 10);
  v21 = v20 | 0x80;
  v22 = v20 & 0xFF7F;
  if ( v9 )
    v22 = v21;
  *(_WORD *)(a2 + 10) = v22 | 2;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( *(_QWORD *)(a1 + 8) > 0x7FFFFFFEFFFFuLL )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 184LL);
    *(_QWORD *)(a1 + 88) = v23;
    *(_QWORD *)(a2 + 16) = v23;
    if ( v9 == 3 )
    {
      v43 = MiObtainReferencedVadEx(*(_QWORD *)(a1 + 8), 0LL, &v53);
      v44 = v43;
      if ( !v43 )
        return (unsigned int)v53;
      if ( (unsigned int)MiVadPureReserve(v43)
        || (v45 = *(unsigned int *)(v44 + 52),
            LODWORD(v45) = v45 & 0x7FFFFFFF,
            (v45 | ((unsigned __int64)*(unsigned __int8 *)(v44 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v46 = *(_DWORD *)(v44 + 48), (v46 & 0x70) == 0x10)
        || (v46 & 0x200000) == 0 && (v46 & 0x70) != 0x20 )
      {
        MiUnlockAndDereferenceVad((PVOID)v44);
        return 3221225477LL;
      }
      v47 = (*(unsigned int *)(v44 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v44 + 32) << 32)) << 12;
      if ( a3 < v47
        || (v48 = ((*(unsigned int *)(v44 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v44 + 33) << 32)) << 12) | 0xFFF,
            a3 > v48)
        || v17 < v47
        || v17 > v48 )
      {
        MiUnlockAndDereferenceVad((PVOID)v44);
        return 3221225496LL;
      }
      v53 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 88), v19);
      v49 = v53;
      if ( v53 < 0 )
      {
        MiUnlockAndDereferenceVad((PVOID)v44);
        return v49;
      }
      *(_QWORD *)(a1 + 128) = v44;
      *(_QWORD *)(a1 + 120) = v19;
    }
    if ( (v7 & 1) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 1280LL), v19);
  }
  v24 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 40) = 0LL;
  LODWORD(v25) = 4;
  if ( v24 >= 0xFFFF800000000000uLL )
  {
    v26 = byte_140C6A4D8[((v24 >> 39) & 0x1FF) - 256];
  }
  else
  {
    v26 = 0;
    if ( v24 <= 0x7FFFFFFEFFFFLL )
    {
      AnyMultiplexedVm = (char *)(*(_QWORD *)(a1 + 88) + 1664LL);
      v28 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF1;
      *(_QWORD *)(a1 + 104) = AnyMultiplexedVm;
      v29 = v28 | 1;
      goto LABEL_18;
    }
  }
  switch ( v26 )
  {
    case 1:
      *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0 | 8;
      SessionVm = MiGetSessionVm();
      goto LABEL_56;
    case 6:
      AnyMultiplexedVm = (char *)&unk_140C69D80;
      v36 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF3;
      *(_QWORD *)(a1 + 104) = &unk_140C69D80;
      v29 = v36 | 3;
      break;
    case 8:
      AnyMultiplexedVm = (char *)&unk_140C6F8C0;
      v38 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF2;
      *(_QWORD *)(a1 + 104) = &unk_140C6F8C0;
      v29 = v38 | 2;
      break;
    case 5:
    case 15:
      SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(5);
      v29 = v25 | *(_DWORD *)(a1 + 72) & 0xFFFFFFF4;
LABEL_56:
      *(_QWORD *)(a1 + 104) = SessionVm;
      AnyMultiplexedVm = (char *)SessionVm;
      break;
    case 12:
      AnyMultiplexedVm = (char *)&unk_140C69C40;
      v37 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF6;
      *(_QWORD *)(a1 + 104) = &unk_140C69C40;
      v29 = v37 | 6;
      break;
    default:
      if ( ((v26 - 14) & 0xFFFFFFFD) != 0 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
        v51 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF5;
        *(_QWORD *)(a1 + 104) = AnyMultiplexedVm;
        v29 = v51 | 5;
      }
      else
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
        v50 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF7;
        *(_QWORD *)(a1 + 104) = AnyMultiplexedVm;
        v29 = v50 | 7;
      }
      break;
  }
LABEL_18:
  *(_DWORD *)(a1 + 72) = v29 & 0xFFFFFFCF;
  v30 = AnyMultiplexedVm[184] & 7;
  if ( v30 <= (unsigned __int8)v25 )
  {
    if ( v30 == 2 )
    {
      v31 = (volatile __int32 *)&unk_140C6A280;
LABEL_21:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql != 2 )
          v25 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v25;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v31, CurrentIrql);
      }
      else
      {
        _m_prefetchw((const void *)v31);
        a5 = *v31 & 0x7FFFFFFF;
        a6 = a5 + 1;
        a6 = _InterlockedCompareExchange(v31, a5 + 1, a5);
        if ( a6 != a5 )
        {
          while ( a6 >= 0 )
          {
            a5 = a6++;
            a6 = _InterlockedCompareExchange(v31, a6, a5);
            if ( a6 == a5 )
              goto LABEL_24;
          }
          ExpWaitForSpinLockSharedAndAcquire(v31, CurrentIrql);
        }
      }
LABEL_24:
      if ( *((_DWORD *)v31 + 1) )
        _InterlockedExchange(v31 + 1, 0);
      v33 = CurrentIrql;
      goto LABEL_27;
    }
LABEL_20:
    v31 = (volatile __int32 *)(AnyMultiplexedVm + 192);
    goto LABEL_21;
  }
  if ( v30 == 5 )
    goto LABEL_20;
  v33 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
  {
    v41 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v33 != 2 )
      v25 = (-1LL << (v33 + 1)) & 4;
    v41[5] |= v25;
  }
LABEL_27:
  v34 = *(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 76) = v33;
  if ( (v34 & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 1264LL) )
    *(_DWORD *)(a1 + 72) = v34 | 0x10;
  if ( v26 == 8 )
  {
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(v24);
    v40 = *(_QWORD *)(SystemCacheReverseMap + 24) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (*(_QWORD *)(SystemCacheReverseMap + 24) & 1) == 0 )
      v40 = *(_QWORD *)(SystemCacheReverseMap + 24);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(*(_QWORD *)v40 + 60LL) & 0x3FF)) + 17344LL;
  }
  return 0LL;
}
