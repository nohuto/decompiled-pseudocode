/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x14023CDE0
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x14023CD70 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x14023CCE0 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeCreate @ 0x14023D3C8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14023D570 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeFind @ 0x14023D5F4 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrFree @ 0x14023DADC (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x14023DC8C (RtlpHpVaMgrRangeSplit.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpEnvFreeVA @ 0x140366D64 (RtlpHpEnvFreeVA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  char v8; // dl
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned int v13; // r13d
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // r12
  struct _KTHREAD *v17; // rsi
  char *v18; // rbx
  ULONG_PTR v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  struct _KTHREAD *CurrentThread; // r14
  unsigned int SessionId; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  int v33; // r8d
  struct _KTHREAD *v34; // rcx
  char *p_Process; // rsi
  __int64 v36; // rdx
  ULONG_PTR v37; // r8
  int v38; // r8d
  struct _KTHREAD *v39; // rcx
  __int64 v40; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-38h] BYREF
  __int64 v42; // [rsp+40h] [rbp-30h] BYREF
  __int128 v43; // [rsp+48h] [rbp-28h] BYREF
  __int64 v44; // [rsp+58h] [rbp-18h]
  unsigned __int64 v45; // [rsp+60h] [rbp-10h]

  v3 = *a2;
  *(_QWORD *)&v43 = 0x10000000100000LL;
  *((_QWORD *)&v43 + 1) = 0x20000000200000LL;
  v4 = a3;
  v42 = 0LL;
  LODWORD(v44) = 0x40000000;
  if ( !v3 )
    __int2c();
  if ( v3 <= (unsigned __int64)(*(unsigned __int16 *)(BugCheckParameter2 + 40) << 20) >> 1 )
  {
    v9 = v3 >> 20;
    v10 = a3 >> 20;
    v11 = (unsigned __int8)RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    v12 = RtlpHpVaMgrRangeFind(BugCheckParameter2, (unsigned __int16)v9, (unsigned __int16)v10, &v42);
    v13 = -1;
    v14 = v12;
    if ( v12 )
    {
      RtlRbRemoveNode(BugCheckParameter2 + 8, v12);
      v15 = v42;
      if ( v42 != v14 )
      {
        *(_OWORD *)v14 = 0LL;
        *(_QWORD *)(v14 + 16) = 0LL;
        *(_BYTE *)v14 = 1;
        *(_BYTE *)(v14 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
        RtlpHpVaMgrRangeSplit(BugCheckParameter2, v14, (v15 - v14) >> 5);
        RtlpHpVaMgrFree(BugCheckParameter2, v14);
        v14 = v15;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v26 = (v32 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v32;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(BugCheckParameter2);
        CurrentThread = KeGetCurrentThread();
        if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        _disable();
        p_Process = (char *)&CurrentThread[1].Process;
        v36 = 0LL;
        v37 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
        while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v37
             || !p_Process[18]
             || (*(_DWORD *)p_Process & 1) != 0
             || *((_DWORD *)p_Process + 2) != SessionId )
        {
          v36 = (unsigned int)(v36 + 1);
          p_Process += 96;
          if ( (unsigned int)v36 >= 6 )
            goto LABEL_71;
        }
        p_Process[18] = 0;
        if ( !p_Process )
        {
LABEL_71:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
          _enable();
          goto LABEL_77;
        }
        if ( *(__int64 *)p_Process < 0 )
        {
          *p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process, v36, v37);
          _disable();
        }
        v38 = *((_DWORD *)p_Process + 22);
        *((_DWORD *)p_Process + 22) = 0;
        p_Process[17] = 0;
        *(_QWORD *)p_Process = 0LL;
        CurrentThread->AbEntrySummary |= 1 << p_Process[16];
        _enable();
        if ( v38 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, BugCheckParameter2, v38);
LABEL_77:
        v39 = KeGetCurrentThread();
        v26 = v39->SpecialApcDisable++ == -1;
        if ( v26 && ($CEA84C04E3712D858E5667A507841A2A *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
          KiCheckForKernelApcDelivery();
      }
      v14 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
      if ( !v14 )
        return 0LL;
      LOBYTE(v11) = RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    }
    v16 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
        + ((unsigned __int64)(v14 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 24LL) << 20);
    *(_OWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_BYTE *)v14 = 1;
    *(_BYTE *)(v14 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
    if ( *(_WORD *)(v14 + 24) > (unsigned __int16)v9 )
    {
      v21 = RtlpHpVaMgrRangeSplit(BugCheckParameter2, v14, (unsigned __int16)v9);
      RtlpHpVaMgrFree(BugCheckParameter2, v21);
    }
    v40 = v16;
    if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v26 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
      }
      __writecr8((unsigned __int8)v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v17 = KeGetCurrentThread();
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        v13 = MmGetSessionIdEx(v17->ApcState.Process);
      _disable();
      v18 = (char *)&v17[1].Process;
      v19 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      v20 = 0;
      while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != v19
           || !v18[18]
           || (*(_DWORD *)v18 & 1) != 0
           || *((_DWORD *)v18 + 2) != v13 )
      {
        ++v20;
        v18 += 96;
        if ( v20 >= 6 )
          goto LABEL_52;
      }
      v18[18] = 0;
      if ( !v18 )
      {
LABEL_52:
        if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v17, BugCheckParameter2, v13, 0LL);
        _enable();
        goto LABEL_58;
      }
      if ( *(__int64 *)v18 < 0 )
      {
        *v18 |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(v18, v19, 0x7FFFFFFFFFFFFFFCLL);
        _disable();
      }
      v33 = *((_DWORD *)v18 + 22);
      *((_DWORD *)v18 + 22) = 0;
      v18[17] = 0;
      *(_QWORD *)v18 = 0LL;
      v17->AbEntrySummary |= 1 << v18[16];
      _enable();
      if ( v33 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v17, BugCheckParameter2, v33);
LABEL_58:
      v34 = KeGetCurrentThread();
      v26 = v34->SpecialApcDisable++ == -1;
      if ( v26 && ($CEA84C04E3712D858E5667A507841A2A *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery();
    }
    return v40;
  }
  if ( a3 <= *((unsigned int *)&v43 + (((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 7)) )
    v4 = *((unsigned int *)&v43 + (((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 7));
  v41 = v3 - ((v4 - 1) & (v4 + v3 - 1)) + v4 - 1;
  result = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v41);
  v40 = result;
  if ( result )
  {
    v8 = *(_BYTE *)(BugCheckParameter2 + 44);
    v43 = 0LL;
    BYTE1(v43) = v8;
    v45 = v41 >> 20;
    v44 = 0LL;
    LOBYTE(v43) = 5;
    if ( RtlpHpVaMgrRangeCreate(BugCheckParameter2, result, &v43) )
    {
      *a2 = v41;
      return v40;
    }
    RtlpHpEnvFreeVA(&v40, &v41, 0x8000LL);
    return 0LL;
  }
  return result;
}
