/*
 * XREFs of RtlpHpFixedVsFree @ 0x14025BC50
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x1405F1BBC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpFixedVsFree(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // r11d
  __int64 v8; // r12
  int v9; // r13d
  int v10; // r15d
  unsigned __int8 v11; // r14
  __m128i v12; // xmm0
  const signed __int64 *v13; // rdx
  signed __int64 v14; // r8
  const signed __int64 *v15; // r9
  bool v16; // zf
  __int64 result; // rax
  bool i; // zf
  unsigned __int8 v19; // al
  __int32 v20; // eax
  ULONG_PTR v21; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r8d
  struct _KTHREAD *v28; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v32; // eax
  unsigned __int64 v33; // [rsp+30h] [rbp-38h] BYREF
  const signed __int64 *v34; // [rsp+38h] [rbp-30h]

  v4 = (unsigned __int64)a3 >> 12;
  v6 = (a2 - a1) >> 12;
  v7 = a3;
  v8 = a4;
  v9 = a2;
  v10 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v11 = -1;
  }
  else
  {
    v19 = RtlpHpAcquireLockExclusive(a1 + 24, *(unsigned int *)(a1 + 32));
    v7 = a3;
    v11 = v19;
  }
  v12 = *(__m128i *)(a1 + 48);
  v33 = *(_QWORD *)(a1 + 48);
  v34 = (const signed __int64 *)(a1 ^ _mm_srli_si128(v12, 8).m128i_u64[0]);
  if ( v6 >= v33 )
    goto LABEL_19;
  if ( v4 <= 1 )
  {
    if ( v4 == 1 && _bittest64(v34, v6) )
      goto LABEL_9;
LABEL_19:
    RtlpLogHeapFailure(8, a1, v9, v7, v8, 0LL);
    __fastfail(0x32u);
  }
  if ( v33 - v6 < v4 )
    goto LABEL_19;
  v13 = &v34[v6 >> 6];
  v14 = *v13;
  v15 = &v34[(v6 + v4 - 1) >> 6];
  if ( v13 == v15 )
  {
    v16 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v6) & v14) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v6;
  }
  else
  {
    for ( i = ((-1LL << v6) & v14) == -1LL << v6; ; i = *v13 == -1 )
    {
      if ( !i )
        goto LABEL_19;
      if ( ++v13 == v15 )
        break;
    }
    v16 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 + (unsigned __int8)v4 - 1)) & *v13) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 + (unsigned __int8)v4 - 1);
  }
  if ( !v16 )
    goto LABEL_19;
LABEL_9:
  result = RtlClearBitsEx(&v33, v6, v4);
  if ( !v10 )
  {
    v20 = *(_DWORD *)(a1 + 32);
    v21 = a1 + 24;
    if ( v20 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v21);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v16 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v11;
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v21);
      CurrentThread = KeGetCurrentThread();
      if ( v21 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      _disable();
      p_Process = (char *)&CurrentThread[1].Process;
      v25 = 0LL;
      v26 = v21 & 0x7FFFFFFFFFFFFFFCLL;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v26
           || !p_Process[18]
           || (*(_DWORD *)p_Process & 1) != 0
           || *((_DWORD *)p_Process + 2) != SessionId )
      {
        v25 = (unsigned int)(v25 + 1);
        p_Process += 96;
        if ( (unsigned int)v25 >= 6 )
          goto LABEL_37;
      }
      p_Process[18] = 0;
      if ( p_Process )
      {
        if ( *(__int64 *)p_Process < 0 )
        {
          *p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process, v25, v26);
          _disable();
        }
        v27 = *((_DWORD *)p_Process + 22);
        *((_DWORD *)p_Process + 22) = 0;
        p_Process[17] = 0;
        *(_QWORD *)p_Process = 0LL;
        result = (unsigned __int8)p_Process[16];
        CurrentThread->AbEntrySummary |= 1 << result;
        _enable();
        if ( v27 )
          result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v21, v27);
        goto LABEL_40;
      }
LABEL_37:
      result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
      if ( (result & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v21, SessionId, 0LL);
      _enable();
LABEL_40:
      v28 = KeGetCurrentThread();
      v16 = v28->SpecialApcDisable++ == -1;
      if ( v16 )
      {
        result = (__int64)&v28->152;
        if ( *(_QWORD *)result != result )
          return KiCheckForKernelApcDelivery();
      }
    }
  }
  return result;
}
