/*
 * XREFs of RaidpAdapterDpcRoutine @ 0x1C0014300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x1C003204C (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

void __fastcall RaidpAdapterDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  LARGE_INTEGER v5; // rbx
  char v6; // r12
  unsigned int v7; // r14d
  char v8; // si
  bool v9; // r15
  _QWORD *p_Next; // rcx
  PSLIST_ENTRY v11; // rax
  _QWORD *v12; // rbp
  char v13; // si
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  USHORT CurrentNodeNumber; // ax
  unsigned __int64 Mask; // rdx
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // cl
  LARGE_INTEGER v21; // rax
  LARGE_INTEGER v22; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rtt
  __int64 v27; // r8
  unsigned __int64 v28; // rtt
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-68h] BYREF
  int v30; // [rsp+68h] [rbp-60h]
  int v31; // [rsp+6Ch] [rbp-5Ch]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-50h]
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp-48h] BYREF

  v4 = DeferredContext[8];
  ProcNumber = 0;
  v5.QuadPart = 0LL;
  Affinity = 0LL;
  v6 = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 280), 1, 0) == 1 )
    return;
  v7 = 0;
  v33 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && (byte_1C00799E3 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v5 = PerformanceCounter;
  }
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 272) != 0LL;
  if ( DpcCompletionLimit )
  {
    do
    {
      p_Next = *(_QWORD **)(v4 + 272);
      if ( !p_Next )
      {
        if ( v8 )
          break;
        v11 = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 256));
        *(_QWORD *)(v4 + 272) = v11;
        v8 = 1;
        p_Next = &v11->Next;
        if ( !v11 )
          break;
      }
      v12 = p_Next - 4;
      *(_QWORD *)(v4 + 272) = *p_Next;
      if ( (*((_BYTE *)p_Next - 15) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(v4, *((unsigned int *)v12 + 187));
        *((_BYTE *)v12 + 17) &= ~1u;
      }
      ((void (__fastcall *)(_QWORD *, _QWORD *, PVOID, PVOID))v12[82])(
        v12,
        DeferredContext,
        SystemArgument1,
        SystemArgument2);
      ++v7;
    }
    while ( v7 < DpcCompletionLimit );
  }
  v13 = *(_QWORD *)(v4 + 272) != 0LL;
  *(_DWORD *)(v4 + 280) = 0;
  if ( v13 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    KeQueryNodeActiveAffinity(CurrentNodeNumber, &Affinity, 0LL);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    Mask = Affinity.Mask;
    v19 = ProcNumber.Number + 1;
    ProcNumber.Number = v19;
    if ( v19 >= 0x40u )
    {
LABEL_35:
      v20 = 0;
      ProcNumber.Number = 0;
      if ( (Affinity.Mask & 1) == 0 )
      {
        do
          ++v20;
        while ( !_bittest64((const __int64 *)&Mask, v20) );
        ProcNumber.Number = v20;
      }
    }
    else
    {
      while ( !_bittest64((const __int64 *)&Mask, v19) )
      {
        ProcNumber.Number = ++v19;
        if ( v19 >= 0x40u )
          goto LABEL_35;
      }
    }
    KeSetTargetProcessorDpcEx((PKDPC)(*(_QWORD *)(v4 + 8) + 200LL), &ProcNumber);
  }
  else
  {
    if ( !v9 )
      *(_WORD *)(*(_QWORD *)(v4 + 8) + 202LL) = 0;
    if ( !ExQueryDepthSList((PSLIST_HEADER)(v4 + 256)) )
    {
      v14 = 0;
      v15 = 0;
      if ( !*(_DWORD *)(v4 + 840) )
        goto LABEL_18;
      do
        v14 += _InterlockedCompareExchange(
                 (volatile signed __int32 *)(*(_QWORD *)(v4 + 832) + 320LL * v15++ + 192),
                 0,
                 0);
      while ( v15 < *(_DWORD *)(v4 + 840) );
      if ( v14 < 0xFFFF )
        goto LABEL_18;
    }
  }
  KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
LABEL_18:
  v31 = MEMORY[0xFFFFF78000000324];
  v30 = MEMORY[0xFFFFF78000000320] - v33;
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v33) > *(_DWORD *)(v4 + 4584) )
  {
    *(_DWORD *)(v4 + 4584) = v30;
    *(_DWORD *)(v4 + 4588) = v7;
  }
  if ( v7 > *(_DWORD *)(v4 + 4580) )
    *(_DWORD *)(v4 + 4580) = v7;
  if ( StorEtwLoggingEnabled && (byte_1C00799E3 & 4) != 0 && v7 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v21 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v21.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v21.QuadPart <= 0 || v21.QuadPart >= v5.QuadPart )
      v24 = v21.QuadPart - v5.QuadPart;
    else
      v24 = v21.QuadPart - v5.QuadPart - 1;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      v25 = 0LL;
      if ( PerformanceFrequency.QuadPart && v24 )
      {
        v26 = 1000 * (v24 % PerformanceFrequency.QuadPart);
        v27 = 10000 * (v26 / PerformanceFrequency.QuadPart + 1000 * (v24 / PerformanceFrequency.QuadPart));
        v28 = 10000 * (v26 % PerformanceFrequency.QuadPart);
        v22.QuadPart = v28 % PerformanceFrequency.QuadPart;
        v25 = v28 / PerformanceFrequency.QuadPart + v27;
      }
    }
    else
    {
      v25 = v24;
    }
    v33 = v25;
    if ( (byte_1C00799E3 & 4) != 0 )
    {
      if ( v13 || v9 )
        v6 = 0;
      McTemplateK0pzqqxxtt_EtwWriteTransfer(
        LowPart,
        v22.LowPart,
        v25,
        (unsigned int)RaidpAdapterDpcRoutine,
        (__int64)L"RaidpAdapterDpcRoutine",
        *(_DWORD *)(v4 + 56),
        v7,
        v24,
        v33,
        v13,
        v6);
    }
  }
}
