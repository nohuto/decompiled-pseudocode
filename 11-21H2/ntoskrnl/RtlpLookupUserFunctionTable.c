/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x14024BAD4
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140296DC0 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     RtlpLookupUserFunctionTableInverted @ 0x14024BB3C (RtlpLookupUserFunctionTableInverted.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlCaptureImageExceptionValues @ 0x1402D8EEC (RtlCaptureImageExceptionValues.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     MmGetImageInformation @ 0x140759008 (MmGetImageInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r8
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  volatile signed __int64 *p_UserCetLogging; // r14
  _DWORD *v9; // r9
  unsigned int v10; // ecx
  int v11; // r11d
  int v12; // r8d
  int v13; // r10d
  unsigned __int64 v14; // rdx
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-78h] BYREF
  __int64 v23; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-68h]
  __int128 v25; // [rsp+48h] [rbp-50h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]
  int v27; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v28; // [rsp+B8h] [rbp+20h] BYREF

  v27 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v4 = RtlpLookupUserFunctionTableInverted();
  v28 = v4;
  if ( v4 )
    return v4;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( !*(_QWORD *)&Process[1].PrimaryGroup )
    goto LABEL_42;
  --CurrentThread->SpecialApcDisable;
  p_UserCetLogging = (volatile signed __int64 *)&Process[1].UserCetLogging;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].UserCetLogging, 0LL);
  v9 = *(_DWORD **)&Process[1].PrimaryGroup;
  if ( !v9
    || *v9 == 1
    || ((KiSpeculationFeatures & 0x20000000000LL) == 0 ? (v10 = 0) : (v10 = dword_140C4F440 << 12),
        v11 = 1,
        v12 = *v9 - 1,
        v12 < 1) )
  {
LABEL_37:
    if ( _InterlockedCompareExchange64(p_UserCetLogging, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_UserCetLogging);
    KeAbPostRelease((ULONG_PTR)p_UserCetLogging);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
LABEL_42:
    if ( (int)MmGetImageInformation(a1, &v22, &v23, &v27) >= 0 )
    {
      v19 = v22;
      RtlCaptureImageExceptionValues(v22, &v28, a2 + 20);
      v4 = v28;
      if ( v28 )
      {
        v21 = *(_DWORD *)(a2 + 20);
        if ( v21 && v21 == 12 * (v21 / 0xCuLL) )
        {
          if ( (v28 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v21 + v28 > 0x7FFFFFFF0000LL || v21 + v28 < v28 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v4 = 0LL;
          v28 = 0LL;
        }
      }
      v20 = v23;
    }
    else
    {
      v19 = 0LL;
      v20 = 0;
      v4 = v28;
    }
    *(_QWORD *)(a2 + 8) = v19;
    *(_DWORD *)(a2 + 16) = v20;
    *(_QWORD *)a2 = v4;
    if ( !v4 )
      *(_DWORD *)(a2 + 20) = 0;
    return v4;
  }
  while ( 1 )
  {
    v13 = (v11 + v12) >> 1;
    v24 = *(_QWORD *)&v9[6 * v13 + 6];
    v14 = v24 + (unsigned int)v9[6 * v13 + 8];
    if ( a1 < v24 )
    {
      if ( !v13 )
        goto LABEL_37;
      v12 = v13 - 1;
      goto LABEL_22;
    }
    if ( a1 > 0x7FFFFFFEFFFFLL && v10 )
    {
      if ( a1 < v14 )
        break;
      if ( a1 < v14 + v10 && v24 != PsNtosImageBase && v24 != PsHalImageBase )
      {
        *(_QWORD *)&v25 = &RtlRetpolineStubsFunctionTable;
        *((_QWORD *)&v25 + 1) = v14;
        v26 = __PAIR64__(RtlRetpolineStubsFunctionTableSize, v10);
        goto LABEL_25;
      }
    }
    if ( a1 < v14 )
      break;
    v11 = v13 + 1;
LABEL_22:
    if ( v12 < v11 )
      goto LABEL_37;
  }
  v25 = *(_OWORD *)&v9[6 * v13 + 4];
  v26 = *(_QWORD *)&v9[6 * v13 + 8];
  v10 = v26;
  v14 = *((_QWORD *)&v25 + 1);
LABEL_25:
  *(_QWORD *)(a2 + 8) = v14;
  *(_DWORD *)(a2 + 16) = v10;
  if ( _InterlockedCompareExchange64(p_UserCetLogging, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_UserCetLogging);
  KeAbPostRelease((ULONG_PTR)p_UserCetLogging);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v16 = *(_QWORD *)(v25 + 16);
  v28 = v16;
  *(_QWORD *)a2 = v16;
  v17 = (unsigned int)(12 * *(_DWORD *)(v25 + 84));
  *(_DWORD *)(a2 + 20) = v17;
  if ( (_DWORD)v17 )
  {
    if ( (v16 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = v16 + v17;
    if ( v18 > 0x7FFFFFFF0000LL || v18 < v16 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return v28;
}
