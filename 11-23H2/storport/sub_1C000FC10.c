/*
 * XREFs of sub_1C000FC10 @ 0x1C000FC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FE18 @ 0x1C000FE18 (sub_1C000FE18.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0032BA4 @ 0x1C0032BA4 (sub_1C0032BA4.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 */

void __fastcall sub_1C000FC10(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rsi
  LARGE_INTEGER v5; // rbx
  char v6; // r14
  unsigned int v7; // r12d
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  USHORT CurrentNodeNumber; // ax
  KAFFINITY Mask; // rdx
  BYTE v18; // cl
  BYTE v19; // cl
  LARGE_INTEGER v20; // rax
  LARGE_INTEGER v21; // rdx
  DWORD LowPart; // ecx
  LARGE_INTEGER v23; // r8
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r9
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp-9h] BYREF
  int v27; // [rsp+70h] [rbp-1h]
  int v28; // [rsp+74h] [rbp+3h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp+Fh]
  __int64 v31; // [rsp+88h] [rbp+17h]
  _GROUP_AFFINITY Affinity; // [rsp+90h] [rbp+1Fh] BYREF

  v4 = DeferredContext[8];
  ProcNumber = 0;
  v5.QuadPart = 0LL;
  Affinity = 0LL;
  v6 = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 280), 1, 0) == 1 )
    return;
  v7 = 0;
  v30 = MEMORY[0xFFFFF78000000320];
  if ( byte_1C0093BE8 && (byte_1C0093A03 & 4) != 0 )
  {
    if ( byte_1C0093BA0 )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v5 = PerformanceCounter;
  }
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 272);
  v31 = v9;
  if ( dword_1C00933D0 )
  {
    do
    {
      if ( !*(_QWORD *)(v4 + 272) && !v8 )
      {
        *(_QWORD *)(v4 + 272) = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 256));
        v8 = 1;
      }
      v10 = *(_QWORD *)(v4 + 272);
      if ( !v10 )
        break;
      *(_QWORD *)(v4 + 272) = *(_QWORD *)v10;
      if ( (*(_BYTE *)(v10 - 15) & 1) != 0 )
      {
        sub_1C0037008(v4, *(unsigned int *)(v10 + 716));
        *(_BYTE *)(v10 - 15) &= ~1u;
      }
      (*(void (__fastcall **)(__int64, _QWORD *, PVOID, PVOID))(v10 + 624))(
        v10 - 32,
        DeferredContext,
        SystemArgument1,
        SystemArgument2);
      ++v7;
    }
    while ( v7 < dword_1C00933D0 );
    v9 = v31;
  }
  v11 = *(_QWORD *)(v4 + 272);
  *(_DWORD *)(v4 + 280) = 0;
  if ( v11 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    KeQueryNodeActiveAffinity(CurrentNodeNumber, &Affinity, 0LL);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    Mask = Affinity.Mask;
    v18 = ProcNumber.Number + 1;
    ProcNumber.Number = v18;
    if ( v18 >= 0x40u )
      goto LABEL_58;
    do
    {
      if ( _bittest64((const __int64 *)&Mask, v18) )
        break;
      ++v18;
    }
    while ( v18 < 0x40u );
    ProcNumber.Number = v18;
    if ( v18 >= 0x40u )
    {
LABEL_58:
      v19 = 0;
      ProcNumber.Number = 0;
      if ( (Affinity.Mask & 1) == 0 )
      {
        do
          ++v19;
        while ( !_bittest64((const __int64 *)&Mask, v19) );
        ProcNumber.Number = v19;
      }
    }
    v12 = v4 + 8;
    KeSetTargetProcessorDpcEx((PKDPC)(*(_QWORD *)(v4 + 8) + 200LL), &ProcNumber);
  }
  else
  {
    if ( !v9 )
      *(_WORD *)(*(_QWORD *)(v4 + 8) + 202LL) = 0;
    v12 = v4 + 8;
    if ( !ExQueryDepthSList((PSLIST_HEADER)(v4 + 256)) && (unsigned int)sub_1C000FE18(v4, v13, v14) < 0xFFFF )
      goto LABEL_18;
  }
  KeInsertQueueDpc((PRKDPC)(*(_QWORD *)v12 + 200LL), 0LL, 0LL);
LABEL_18:
  v28 = MEMORY[0xFFFFF78000000324];
  v27 = MEMORY[0xFFFFF78000000320] - v30;
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v30) > *(_DWORD *)(v4 + 4648) )
  {
    *(_DWORD *)(v4 + 4648) = v27;
    *(_DWORD *)(v4 + 4652) = v7;
  }
  if ( v7 > *(_DWORD *)(v4 + 4644) )
    *(_DWORD *)(v4 + 4644) = v7;
  if ( byte_1C0093BE8 && (byte_1C0093A03 & 4) != 0 && v7 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( byte_1C0093BA0 )
      v20 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v20.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v20.QuadPart <= 0 || v20.QuadPart >= v5.QuadPart )
      v24 = v20.QuadPart - v5.QuadPart;
    else
      v24 = v20.QuadPart - v5.QuadPart - 1;
    if ( byte_1C0093BA0 )
    {
      LowPart = PerformanceFrequency.LowPart;
      v25 = 0LL;
      if ( PerformanceFrequency.QuadPart && v24 )
      {
        v23.QuadPart = 1000 * (v24 % PerformanceFrequency.QuadPart);
        v21.QuadPart = 10000 * (v23.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                     % PerformanceFrequency.QuadPart;
        v25 = 10000 * (v23.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 10000
            * (1000 * (v24 / PerformanceFrequency.QuadPart)
             + v23.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      v25 = v24;
    }
    v30 = v25;
    if ( (byte_1C0093A03 & 4) != 0 )
    {
      if ( v11 || v31 )
        v6 = 0;
      sub_1C0032BA4(
        LowPart,
        v21.LowPart,
        v23.LowPart,
        (unsigned int)sub_1C000FC10,
        (__int64)L"RaidpAdapterDpcRoutine",
        *(_DWORD *)(v4 + 56),
        v7,
        v24,
        v30,
        v11 != 0,
        v6);
    }
  }
}
