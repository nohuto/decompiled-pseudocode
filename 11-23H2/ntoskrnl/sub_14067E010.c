/*
 * XREFs of sub_14067E010 @ 0x14067E010
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312480 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x14034C27C (KeExitRetpoline.c)
 *     CcAdjustBcbDepth @ 0x14042BCE0 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x14054D340 (VslVerifyPage.c)
 */

BOOLEAN __fastcall sub_14067E010(PKDPC Dpc, __int64 a2, __int64 a3)
{
  __int64 ProcessorHistory_low; // r8
  _QWORD *v5; // r10
  __int64 v6; // r15
  char SystemArgument1; // r14
  int v8; // ebx
  __int64 v9; // rbp
  _QWORD *v10; // r9
  const char *v11; // rax
  unsigned __int64 DeferredContext; // rdi
  unsigned int i; // r11d
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rax
  PKDEFERRED_ROUTINE v21; // rdi
  int v22; // edx
  unsigned __int8 *v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned int v26; // eax
  BOOLEAN result; // al
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v30; // rdi
  __int64 v31; // r15
  unsigned __int64 v32; // r14
  int v33; // eax
  unsigned __int64 v34; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  char *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  char v38; // [rsp+78h] [rbp+10h] BYREF

  KeExitRetpoline(Dpc, a2, a3);
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  v5 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  v6 = ProcessorHistory_low;
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  LOBYTE(v8) = SystemArgument1;
  v9 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v5;
  v10 = (_QWORD *)v9;
  v11 = (const char *)v9;
  if ( v9 < (unsigned __int64)(ProcessorHistory_low + v9) )
  {
    do
    {
      _mm_prefetch(v11, 0);
      v11 += 64;
    }
    while ( (unsigned __int64)v11 < ProcessorHistory_low + v9 );
  }
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  for ( i = (unsigned int)ProcessorHistory_low >> 7; i; --i )
  {
    v14 = 8LL;
    do
    {
      v15 = v10[1] ^ __ROL8__(*v10 ^ DeferredContext, v8);
      v10 += 2;
      DeferredContext = __ROL8__(v15, v8);
      --v14;
    }
    while ( v14 );
    v16 = __ROL8__((unsigned __int64)Dpc[2].DeferredContext ^ ((unsigned __int64)v10 - v9), 17) ^ (unsigned __int64)Dpc[2].DeferredContext ^ ((unsigned __int64)v10 - v9);
    v8 = ((unsigned __int8)((((unsigned __int64)v16 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v16) ^ (unsigned __int8)v8) & 0x3F;
    if ( !v8 )
      LOBYTE(v8) = 1;
  }
  v17 = ProcessorHistory_low & 0x7F;
  if ( v17 >= 8 )
  {
    v18 = (unsigned __int64)v17 >> 3;
    do
    {
      DeferredContext = __ROL8__(*v10++ ^ DeferredContext, v8);
      v17 -= 8;
      --v18;
    }
    while ( v18 );
  }
  for ( ; v17; --v17 )
  {
    v19 = *(unsigned __int8 *)v10;
    v10 = (_QWORD *)((char *)v10 + 1);
    DeferredContext = __ROL8__(v19 ^ DeferredContext, v8);
  }
  v20 = *(const char **)&Dpc[2].TargetInfoAsUlong;
  if ( v5 < (_QWORD *)((char *)v5 + 12) )
  {
    do
    {
      _mm_prefetch(v20, 0);
      v20 += 64;
    }
    while ( v20 < (const char *)v5 + 12 );
  }
  v21 = (PKDEFERRED_ROUTINE)__ROL8__(*v5 ^ DeferredContext, SystemArgument1);
  v22 = 4;
  v23 = (unsigned __int8 *)(v5 + 1);
  do
  {
    v24 = *v23++;
    v21 = (PKDEFERRED_ROUTINE)__ROL8__(v24 ^ (unsigned __int64)v21, SystemArgument1);
    --v22;
  }
  while ( v22 );
  v25 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  v26 = ExGenRandom(1);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v25, 0, v26 % 0x2710, Dpc);
  if ( v21 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v6 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v30 = v9 & 0xFFFFFFFFFFFFF000uLL;
        v31 = (v9 + v6 - 1) | 0xFFF;
        v32 = (v9 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v33 = VslVerifyPage(v30, 0);
          v34 = CurrentIrql;
          while ( v33 == -1073741267 )
          {
            if ( !SystemArgument1_high )
              goto LABEL_31;
            if ( CurrentIrql > 1u )
              goto LABEL_28;
            v34 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v33 = VslVerifyPage(v30, 0);
          }
          if ( v33 < 0 )
            break;
LABEL_28:
          result = 0;
          v30 += 4096LL;
          v32 += 4096LL;
          if ( v32 == v31 )
          {
            __writecr8(v34);
            return result;
          }
        }
LABEL_31:
        __writecr8(v34);
      }
    }
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    DpcStack = (char *)CurrentPrcb->DpcStack;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( !CurrentPrcb->DpcRoutineActive || &v38 > DpcStack || &v38 < DpcStack - 24576 )
      DpcStack = (char *)CurrentThread->InitialStack;
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel();
    CcAdjustBcbDepth(
      (unsigned int)__ROL4__(67840, 184),
      __ROR8__(0xD147407EB1239169uLL, 185),
      0LL,
      v9,
      (unsigned int)__ROR4__(1610612752, 188),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      DpcStack);
    JUMPOUT(0x14067E35FLL);
  }
  return result;
}
