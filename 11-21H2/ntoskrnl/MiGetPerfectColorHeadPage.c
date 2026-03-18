/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x140325830
 * Callers:
 *     MiRemovePageAnyColor @ 0x14022FDA0 (MiRemovePageAnyColor.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 * Callees:
 *     MiReplenishPageSlist @ 0x140264720 (MiReplenishPageSlist.c)
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiIsFreeZeroPfnCold @ 0x140268620 (MiIsFreeZeroPfnCold.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 a1, __int64 a2, unsigned int a3, _DWORD *SchedulerAssist, int a5)
{
  ULONG_PTR v5; // rdi
  unsigned int v6; // esi
  int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // r15
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int32 *v17; // r12
  signed __int8 v18; // al
  volatile LONG *v19; // rcx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r11
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v38; // r8
  int v39; // eax
  unsigned __int8 v40; // al
  _DWORD *v41; // r8
  int v42; // eax
  int v43; // [rsp+24h] [rbp-F4h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+28h] [rbp-F0h]
  __int128 v45; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v46; // [rsp+40h] [rbp-D8h]
  __int128 v47; // [rsp+50h] [rbp-C8h]
  __int128 v48; // [rsp+60h] [rbp-B8h]
  __int128 v49; // [rsp+70h] [rbp-A8h]
  __int128 v50; // [rsp+80h] [rbp-98h]
  __int128 v51; // [rsp+90h] [rbp-88h]
  __int128 v52; // [rsp+A0h] [rbp-78h]
  __int64 v53; // [rsp+B0h] [rbp-68h]
  int v54; // [rsp+B8h] [rbp-60h]

  v5 = *(_QWORD *)(a2 + 16);
  v6 = (unsigned int)SchedulerAssist;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v54 = 0;
  v52 = 0LL;
  if ( v5 == 0x3FFFFFFFFFLL )
    return 0LL;
  v11 = a5;
  v12 = 2LL;
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  v14 = a5 & 1;
  while ( 1 )
  {
    v15 = 48 * v5 - 0x220000000000LL;
    if ( v14 )
    {
      v17 = (volatile signed __int32 *)(v15 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        return 0LL;
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v14 = a5 & 1;
        v13 = 0x7FFFFFFFFFFFFFFFLL;
        SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
        v12 = 2LL;
      }
      v17 = (volatile signed __int32 *)(v15 + 24);
      v18 = _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL);
      if ( (v11 & 0x44000) != 0 )
      {
        v43 = 0;
        if ( v18 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v43, v13, v12, (__int64)SchedulerAssist);
            while ( *(__int64 *)v17 < 0 );
          }
          while ( _interlockedbittestandset64(v17, 0x3FuLL) );
          v14 = a5 & 1;
          v11 = a5;
          v13 = 0x7FFFFFFFFFFFFFFFLL;
          v12 = 2LL;
        }
      }
      else if ( v18 )
      {
        if ( !KiIrqlFlags )
          goto LABEL_31;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_31;
        v40 = KeGetCurrentIrql();
        if ( v40 > 0xFu )
          goto LABEL_31;
        if ( CurrentIrql > 0xFu )
          goto LABEL_31;
        if ( v40 < 2u )
          goto LABEL_31;
        CurrentPrcb = KeGetCurrentPrcb();
        v41 = CurrentPrcb->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( !v23 )
          goto LABEL_31;
        goto LABEL_89;
      }
    }
    if ( (*(_BYTE *)(v15 + 34) & 7) != v6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v20 = KeGetCurrentIrql();
            if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
            {
              v21 = KeGetCurrentPrcb();
              SchedulerAssist = v21->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v23 = (v22 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v22;
              if ( v23 )
              {
                KiRemoveSystemWorkPriorityKick(v21);
                v11 = a5;
              }
              v14 = a5 & 1;
              v12 = 2LL;
              v13 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      goto LABEL_27;
    }
    SpinLock = (PEX_SPIN_LOCK)(a2 + 32);
    v19 = (volatile LONG *)(a2 + 32);
    if ( (v11 & 0x44000) == 0 )
    {
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v19) )
        goto LABEL_11;
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql == 17 )
        return 0LL;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (v36 = KeGetCurrentIrql(), v36 > 0xFu)
        || CurrentIrql > 0xFu
        || v36 < 2u
        || (CurrentPrcb = KeGetCurrentPrcb(),
            v38 = CurrentPrcb->SchedulerAssist,
            v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1)),
            v23 = (v39 & v38[5]) == 0,
            v38[5] &= v39,
            !v23) )
      {
LABEL_31:
        __writecr8(CurrentIrql);
        return 0LL;
      }
LABEL_89:
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_31;
    }
    ExAcquireSpinLockExclusive(v19);
LABEL_11:
    if ( v5 == *(_QWORD *)(a2 + 16) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    v13 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            SchedulerAssist = v25->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v25);
            v13 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v11 = a5;
    v12 = 2LL;
    v14 = a5 & 1;
LABEL_27:
    v5 = *(_QWORD *)(a2 + 16);
    if ( v5 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v5, a2, a5) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a5 & 1) == 0 && *(_QWORD *)(a2 + 16) != 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)&v45 = 1LL;
      DWORD2(v45) = 16;
      if ( (HvlEnlightenments & 0x200000) != 0 )
      {
        LOBYTE(v31) = MiIsFreeZeroPfnCold(48 * v5 - 0x220000000000LL);
        if ( v31 )
        {
          *(_QWORD *)&v46 = v5 << 12;
          DWORD1(v45) = 1;
        }
      }
      MiReplenishPageSlist(a1, v6, a3, (__int64)&v45);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v35 & v34[5]) == 0;
            v34[5] &= v35;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 48 * v5 - 0x220000000000LL;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    MiReturnFreeZeroPage(48 * v5 - 0x220000000000LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 1LL;
  }
}
