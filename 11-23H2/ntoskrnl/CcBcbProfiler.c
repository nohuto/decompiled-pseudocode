/*
 * XREFs of CcBcbProfiler @ 0x1403E3520
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312480 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x14034C27C (KeExitRetpoline.c)
 *     CcAdjustBcbDepth @ 0x14042BCE0 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x14054D340 (VslVerifyPage.c)
 */

void __fastcall CcBcbProfiler(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // r10
  __int64 v6; // r12
  char v7; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  _QWORD *v10; // r9
  const char *v11; // rax
  __int64 v12; // rdi
  unsigned int i; // r11d
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rax
  __int64 v21; // rdi
  int v22; // edx
  unsigned __int8 *v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned int v26; // eax
  int v27; // r13d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v29; // rdi
  __int64 v30; // r12
  unsigned __int64 v31; // r15
  int v32; // eax
  unsigned __int64 v33; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  char *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  _BYTE v37[16]; // [rsp+40h] [rbp-38h] BYREF

  KeExitRetpoline(a1, a2, a3);
  if ( *(_DWORD *)(a2 + 172) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 184), DelayedWorkQueue);
  }
  else
  {
    v4 = *(unsigned int *)(a2 + 144);
    v5 = *(_QWORD **)(a2 + 128);
    v6 = v4;
    v7 = *(_BYTE *)(a2 + 168);
    LOBYTE(v8) = v7;
    v9 = *(_QWORD *)(a2 + 136) + *(unsigned int *)v5;
    v10 = (_QWORD *)v9;
    v11 = (const char *)v9;
    if ( v9 < v4 + v9 )
    {
      do
      {
        _mm_prefetch(v11, 0);
        v11 += 64;
      }
      while ( (unsigned __int64)v11 < v4 + v9 );
    }
    v12 = *(_QWORD *)(a2 + 160);
    for ( i = (unsigned int)v4 >> 7; i; --i )
    {
      v14 = 8LL;
      do
      {
        v15 = v10[1] ^ __ROL8__(*v10 ^ v12, v8);
        v10 += 2;
        v12 = __ROL8__(v15, v8);
        --v14;
      }
      while ( v14 );
      v16 = __ROL8__(*(_QWORD *)(a2 + 160) ^ ((unsigned __int64)v10 - v9), 17) ^ *(_QWORD *)(a2 + 160) ^ ((unsigned __int64)v10 - v9);
      v8 = ((unsigned __int8)(((v16 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v16) ^ (unsigned __int8)v8) & 0x3F;
      if ( !v8 )
        LOBYTE(v8) = 1;
    }
    v17 = v4 & 0x7F;
    if ( v17 >= 8 )
    {
      v18 = (unsigned __int64)v17 >> 3;
      do
      {
        v12 = __ROL8__(*v10++ ^ v12, v8);
        v17 -= 8;
        --v18;
      }
      while ( v18 );
    }
    for ( ; v17; --v17 )
    {
      v19 = *(unsigned __int8 *)v10;
      v10 = (_QWORD *)((char *)v10 + 1);
      v12 = __ROL8__(v19 ^ v12, v8);
    }
    v20 = *(const char **)(a2 + 128);
    if ( v5 < (_QWORD *)((char *)v5 + 12) )
    {
      do
      {
        _mm_prefetch(v20, 0);
        v20 += 64;
      }
      while ( v20 < (const char *)v5 + 12 );
    }
    v21 = __ROL8__(*v5 ^ v12, v7);
    v22 = 4;
    v23 = (unsigned __int8 *)(v5 + 1);
    do
    {
      v24 = *v23++;
      v21 = __ROL8__(v24 ^ v21, v7);
      --v22;
    }
    while ( v22 );
    v25 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
    v26 = ExGenRandom(1);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v25, 0, v26 % 0x2710, (PKDPC)a2);
    if ( v21 != *(_QWORD *)(a2 + 152) )
    {
      if ( *(_DWORD *)(a2 + 176) )
      {
        v27 = *(_DWORD *)(a2 + 172);
        if ( v6 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v29 = v9 & 0xFFFFFFFFFFFFF000uLL;
          v30 = (v9 + v6 - 1) | 0xFFF;
          v31 = (v9 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v32 = VslVerifyPage(v29, 0LL);
            v33 = CurrentIrql;
            while ( v32 == -1073741267 )
            {
              if ( !v27 )
                goto LABEL_33;
              if ( CurrentIrql > 1u )
                goto LABEL_31;
              v33 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v32 = VslVerifyPage(v29, 0LL);
            }
            if ( v32 < 0 )
              break;
LABEL_31:
            v29 += 4096LL;
            v31 += 4096LL;
            if ( v31 == v30 )
            {
              __writecr8(v33);
              return;
            }
          }
LABEL_33:
          __writecr8(v33);
        }
      }
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      DpcStack = (char *)CurrentPrcb->DpcStack;
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( !CurrentPrcb->DpcRoutineActive || v37 > DpcStack || v37 < DpcStack - 24576 )
        DpcStack = (char *)CurrentThread->InitialStack;
      CurrentThread[1].QuantumTarget = 0LL;
      CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
      ExTryAcquireSpinLockExclusiveAtDpcLevel();
      CcAdjustBcbDepth(
        __ROL4__(67840, 184),
        __ROR8__(0xD147407EB1239169uLL, 185),
        0,
        v9,
        (unsigned int)__ROR4__(1610612752, 188),
        (__int64)KeBugCheckEx,
        (__int64)DpcStack);
      JUMPOUT(0x1403E38A4LL);
    }
  }
}
