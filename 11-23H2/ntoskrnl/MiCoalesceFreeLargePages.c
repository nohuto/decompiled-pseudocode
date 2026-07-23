/*
 * XREFs of MiCoalesceFreeLargePages @ 0x140333050
 * Callers:
 *     MiRebuildLargeZeroPage @ 0x140332E30 (MiRebuildLargeZeroPage.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     MiLargePagePromote @ 0x1402D7A60 (MiLargePagePromote.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiLargePfnPromoteCandidate @ 0x140333600 (MiLargePfnPromoteCandidate.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064EFF4 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiChangePageHeatImmediate @ 0x14065433C (MiChangePageHeatImmediate.c)
 */

char __fastcall MiCoalesceFreeLargePages(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3; // r14d
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // r10
  unsigned __int64 v12; // r15
  int v13; // ebx
  struct _KTHREAD *v14; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v16; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v20; // r9
  unsigned __int64 v21; // r13
  unsigned int v22; // ebp
  __int64 v23; // r15
  _QWORD *v24; // r14
  _QWORD *v25; // rax
  unsigned __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // r15d
  BOOL v29; // edx
  __int64 v30; // r10
  __int64 v31; // r8
  unsigned int v32; // ebp
  __int64 v33; // r14
  __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  __int64 v36; // r14
  _QWORD *v37; // rsi
  unsigned __int8 v38; // di
  unsigned int v39; // r15d
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int64 i; // rax
  $C71981A45BEB2B45F82C232A7085991E *v43; // rax
  struct _KTHREAD *v44; // rcx
  bool v45; // zf
  signed __int32 v46; // eax
  signed __int32 v47; // ett
  signed __int64 *v48; // rbx
  struct _KTHREAD *v49; // rcx
  __int64 v50; // rbx
  unsigned int v51; // edi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  unsigned __int8 v56; // cl
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  char v61; // [rsp+30h] [rbp-B8h]
  __int64 v64; // [rsp+48h] [rbp-A0h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+50h] [rbp-98h]
  unsigned int v66; // [rsp+58h] [rbp-90h]
  unsigned int v67; // [rsp+5Ch] [rbp-8Ch]
  int v68; // [rsp+60h] [rbp-88h] BYREF
  struct _KTHREAD *v69; // [rsp+68h] [rbp-80h]
  __int64 v70; // [rsp+78h] [rbp-70h]
  __int64 v71; // [rsp+80h] [rbp-68h]
  __int128 v72; // [rsp+90h] [rbp-58h]

  v3 = a3;
  v71 = a1;
  v5 = MiLargePageSizes[a3];
  v6 = MiLargePageSizes[a3 - 1];
  v7 = a2;
  v67 = a3 - 1;
  v72 = 0LL;
  v70 = 48 * a2;
  v8 = 48 * a2 - 0x220000000000LL;
  v64 = v8;
  v9 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * a2) >> 4));
  CurrentThread = KeGetCurrentThread();
  v11 = a1 + 216;
  v61 = 17;
  v69 = CurrentThread;
  v12 = 0LL;
  v13 = *((_DWORD *)v9 + 2);
  --CurrentThread->SpecialApcDisable;
  v14 = KeGetCurrentThread();
  v68 = 0;
  BugCheckParameter2 = (volatile signed __int64 *)v11;
  _disable();
  AbEntrySummary = v14->AbEntrySummary;
  if ( v14->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)CurrentThread, (__int64)v14),
        v11 = (__int64)BugCheckParameter2,
        AbEntrySummary) )
  {
    _BitScanForward(&v16, AbEntrySummary);
    v66 = v16;
    v14->AbEntrySummary = AbEntrySummary & ~(1 << v16);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v46 = *SchedulerAssist;
      do
      {
        v47 = v46;
        v46 = _InterlockedCompareExchange(SchedulerAssist, v46 & 0xFFDFFFFF, v46);
      }
      while ( v47 != v46 );
      if ( (v46 & 0x200000) != 0 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v11 = (__int64)BugCheckParameter2;
      }
    }
    _enable();
    v12 = (unsigned __int64)(&v14[1].Process + 12 * v66);
    if ( (unsigned __int64)(v11 - qword_140C659E8) < 0x8000000000LL )
    {
      SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
      v11 = (__int64)BugCheckParameter2;
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v12 + 8) = SessionId;
    *(_QWORD *)v12 = v11 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v11, 0LL, v12, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  v20 = 0x40000000000000LL;
  v21 = v6 / v5;
  v22 = 0;
  if ( v21 )
  {
    v23 = 48 * v5;
    v24 = (_QWORD *)(v70 - 0x21FFFFFFFFD8LL);
    while ( v7 <= qword_140C65BA0 && (*v24 & 0x40000000000000LL) != 0 )
    {
      if ( !(unsigned int)MiLargePfnPromoteCandidate(v71, v8, a3, 0x40000000000000LL) )
      {
        v20 = 0x40000000000000LL;
        break;
      }
      v25 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4));
      v20 = 0x40000000000000LL;
      if ( v13 == *((_DWORD *)v25 + 2) )
      {
        ++v22;
        v26 = (unsigned __int64)*(unsigned __int8 *)(v8 + 34) >> 6;
        v8 += v23;
        v7 += v5;
        v24 = (_QWORD *)((char *)v24 + v23);
        ++*((_DWORD *)&v72 + v26);
        if ( v22 < v21 )
          continue;
      }
      break;
    }
    v3 = a3;
  }
  if ( v22 == v21 )
  {
    v27 = 0;
    v28 = 1;
    if ( (_DWORD)v72 )
    {
      v27 = v72;
      v28 = 0;
    }
    v29 = 0;
    if ( DWORD1(v72) )
      v29 = v27 != 0;
    if ( v27 < DWORD1(v72) )
    {
      v27 = DWORD1(v72);
      v28 = 1;
    }
    if ( DWORD2(v72) && v27 )
      v29 = 1;
    if ( v27 < DWORD2(v72) )
    {
      v27 = DWORD2(v72);
      v28 = 2;
    }
    if ( HIDWORD(v72) && v27 )
      v29 = 1;
    v30 = v64;
    v31 = 3LL;
    if ( v27 < HIDWORD(v72) )
      v28 = 3;
    v32 = 0;
    if ( v29 )
    {
      v50 = v64;
      v51 = 0;
      if ( v21 )
      {
        while ( (unsigned int)MiChangePageAttributeLargeFreeZeroPage(v50, v3, v28, v20) )
        {
          ++v51;
          v50 += 48 * v5;
          if ( v51 >= v21 )
          {
            v30 = v64;
            v20 = 0x40000000000000LL;
            v35 = a2;
            v34 = v64;
            goto LABEL_33;
          }
        }
        v48 = (signed __int64 *)BugCheckParameter2;
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
          goto LABEL_73;
        goto LABEL_74;
      }
    }
    v33 = a2;
    v34 = v64;
    v35 = a2;
    if ( v21 )
    {
LABEL_33:
      v36 = 48 * v5;
      v37 = (_QWORD *)(v70 - 0x21FFFFFFFFD8LL);
      while ( 1 )
      {
        if ( v35 > qword_140C65BA0 || (*v37 & 0x40000000000000LL) == 0 )
          goto LABEL_42;
        if ( v34 == v30 )
        {
          v61 = MiLockPageInline(v34);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          goto LABEL_42;
        }
        if ( !(unsigned int)MiLargePfnPromoteCandidate(v71, v34, a3, v20) || *(unsigned __int8 *)(v34 + 34) >> 6 != v28 )
          break;
        ++v32;
        v34 += v36;
        v35 += v5;
        v37 = (_QWORD *)((char *)v37 + v36);
        if ( v32 >= v21 )
          goto LABEL_42;
        v20 = 0x40000000000000LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v34 != v30 )
      {
LABEL_42:
        v33 = a2;
        v38 = v61;
        goto LABEL_43;
      }
      if ( (_DWORD)KiIrqlFlags
        && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
        && CurrentIrql <= 0xFu )
      {
        v38 = v61;
        if ( (unsigned __int8)v61 <= 0xFu && CurrentIrql >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v55 = ~(unsigned __int16)(-1LL << (v61 + 1));
          v45 = (v55 & v54[5]) == 0;
          v31 = (unsigned int)v55 & v54[5];
          v54[5] = v31;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick(v53);
          v30 = v64;
        }
      }
      else
      {
        v38 = v61;
      }
      __writecr8(v38);
      v33 = a2;
    }
    else
    {
      v38 = 17;
    }
LABEL_43:
    if ( v32 == v21 )
    {
      v39 = v67;
      MiLargePagePromote(v33, v67, v31, 0, &v68);
      v30 = v64;
      v40 = 48 * v5;
      v41 = 48 * v5 + v64;
      if ( !v32 )
      {
LABEL_49:
        if ( v68 )
          MiChangePageHeatImmediate(v33, v39, 0LL);
LABEL_51:
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        LOBYTE(v43) = KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
        v44 = v69;
        v45 = v69->SpecialApcDisable++ == -1;
        if ( v45 )
        {
          v43 = &v44->152;
          if ( ($C71981A45BEB2B45F82C232A7085991E *)v43->ApcState.ApcListHead[0].Flink != v43 )
            goto LABEL_67;
        }
        return (char)v43;
      }
    }
    else
    {
      if ( !v32 )
        goto LABEL_51;
      v39 = v67;
      v40 = 48 * v5;
      v41 = v30;
    }
    for ( i = v30 + v5 * (48LL * v32 - 48); i != v41; i -= v40 )
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v56 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v56 <= 0xFu && v38 <= 0xFu && v56 >= 2u )
      {
        v57 = KeGetCurrentPrcb();
        v58 = v57->SchedulerAssist;
        v59 = ~(unsigned __int16)(-1LL << (v38 + 1));
        v45 = (v59 & v58[5]) == 0;
        v58[5] &= v59;
        if ( v45 )
          KiRemoveSystemWorkPriorityKick(v57);
      }
    }
    __writecr8(v38);
    goto LABEL_49;
  }
  v48 = (signed __int64 *)BugCheckParameter2;
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
LABEL_73:
    ExfReleasePushLockShared(v48);
LABEL_74:
  LOBYTE(v43) = KeAbPostRelease((ULONG_PTR)v48);
  v49 = v69;
  v45 = v69->SpecialApcDisable++ == -1;
  if ( v45 )
  {
    v43 = &v49->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v43->ApcState.ApcListHead[0].Flink != v43 )
LABEL_67:
      LOBYTE(v43) = KiCheckForKernelApcDelivery();
  }
  return (char)v43;
}
