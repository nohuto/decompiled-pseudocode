/*
 * XREFs of PsCallEnclave @ 0x1409B35D0
 * Callers:
 *     NtCallEnclave @ 0x14042A6B0 (NtCallEnclave.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwTerminateProcess @ 0x14041BCE0 (ZwTerminateProcess.c)
 *     PsGetBaseTrapFrame @ 0x14045ECB0 (PsGetBaseTrapFrame.c)
 *     RtlCreateEnclaveReturnFrame @ 0x14045F202 (RtlCreateEnclaveReturnFrame.c)
 *     RtlPrepareEnclaveCall @ 0x14045F318 (RtlPrepareEnclaveCall.c)
 *     VslCallEnclave @ 0x14088151A (VslCallEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x140882604 (PsDereferenceVsmEnclave.c)
 *     PspFindVsmEnclaveThread @ 0x1408826B4 (PspFindVsmEnclaveThread.c)
 *     PspSelectVsmEnclaveByNumber @ 0x1408826D2 (PspSelectVsmEnclaveByNumber.c)
 *     MmSelectVsmEnclaveByAddress @ 0x14097AC7C (MmSelectVsmEnclaveByAddress.c)
 *     PspPrepareEnclaveThreadWait @ 0x1409B47DC (PspPrepareEnclaveThreadWait.c)
 *     PspReleaseEnclaveThread @ 0x1409B4870 (PspReleaseEnclaveThread.c)
 *     PspRemoveEnclaveThreadWait @ 0x1409B48CC (PspRemoveEnclaveThreadWait.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsCallEnclave(unsigned __int64 a1, __int64 a2, NTSTATUS a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 Process; // rcx
  unsigned __int64 v9; // r13
  char *v10; // r14
  int EnclaveReturnFrame; // r13d
  __int64 BaseTrapFrame; // rax
  bool v13; // zf
  volatile signed __int64 *v14; // r12
  __int64 v15; // rsi
  int v16; // eax
  PVOID v17; // rcx
  int v18; // eax
  _DWORD *v19; // rsi
  unsigned int v20; // eax
  int VsmEnclaveThread; // eax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // r14
  bool v25; // r8
  _QWORD *v26; // rax
  _BYTE v27[8]; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v28; // [rsp+58h] [rbp-A0h] BYREF
  int v29; // [rsp+60h] [rbp-98h] BYREF
  __int64 v30; // [rsp+68h] [rbp-90h] BYREF
  int v31; // [rsp+70h] [rbp-88h]
  PVOID P; // [rsp+78h] [rbp-80h] BYREF
  __int64 v33; // [rsp+80h] [rbp-78h] BYREF
  __int64 v34; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 *v35; // [rsp+90h] [rbp-68h]
  __int64 v36; // [rsp+98h] [rbp-60h]
  __int64 v37; // [rsp+A0h] [rbp-58h]
  _QWORD v38[10]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+100h] [rbp+8h] BYREF
  __int64 v40; // [rsp+108h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+110h] [rbp+18h] BYREF
  __int64 *v42; // [rsp+118h] [rbp+20h]

  v42 = a4;
  ExitStatus = a3;
  v40 = a2;
  v39 = a1;
  v30 = 0LL;
  v28 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v27[0] = 0;
  v38[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v38[1] = CurrentThread;
  v37 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v39 )
  {
    if ( a2 )
      return 3221225712LL;
  }
  else if ( a2 )
  {
    goto LABEL_9;
  }
  if ( (ExitStatus & 0xFFFFFFFE) != 0 )
    return 3221225713LL;
LABEL_9:
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v7 = (__int64)a4;
  *(_QWORD *)v7 = *(_QWORD *)v7;
  v30 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
  {
    result = PspSelectVsmEnclaveByNumber(Process, a2, (__int64 *)&v28);
    v9 = v39;
  }
  else
  {
    v9 = v39;
    result = MmSelectVsmEnclaveByAddress(Process, v39, &v28);
  }
  if ( (int)result < 0 )
    return result;
  v10 = (char *)v28;
  if ( !*((_DWORD *)v28 + 10) )
  {
    EnclaveReturnFrame = -1073741816;
    goto LABEL_100;
  }
  if ( *((_BYTE *)v28 + 76) )
  {
    --CurrentThread->KernelApcDisable;
    v14 = (volatile signed __int64 *)(v10 + 112);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    v35 = (unsigned __int64 *)(v10 + 104);
    v15 = *((_QWORD *)v10 + 13);
    while ( v15 )
    {
      VsmEnclaveThread = PspFindVsmEnclaveThread(v9, v15);
      if ( VsmEnclaveThread >= 0 )
      {
        if ( VsmEnclaveThread <= 0 )
          break;
        v15 = *(_QWORD *)(v15 + 8);
      }
      else
      {
        v15 = *(_QWORD *)v15;
      }
    }
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( !v15 )
    {
      EnclaveReturnFrame = -1073741800;
      goto LABEL_99;
    }
    v36 = v15;
    goto LABEL_64;
  }
  BaseTrapFrame = PsGetBaseTrapFrame((__int64)CurrentThread, 0LL);
  v37 = BaseTrapFrame;
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlPrepareEnclaveCall(
                         BaseTrapFrame,
                         (__int64)a4,
                         qword_140D071D8,
                         qword_140D071E8,
                         (CurrentThread->MiscFlags & 0x100000) != 0,
                         &v34,
                         &v33);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( EnclaveReturnFrame < 0 )
    goto LABEL_100;
  --CurrentThread->KernelApcDisable;
  v14 = (volatile signed __int64 *)(v10 + 112);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
  v35 = (unsigned __int64 *)(v10 + 104);
  v15 = *((_QWORD *)v10 + 13);
  while ( v15 )
  {
    v16 = PspFindVsmEnclaveThread((unsigned __int64)CurrentThread, v15);
    if ( v16 >= 0 )
    {
      if ( v16 <= 0 )
        break;
      v15 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      v15 = *(_QWORD *)v15;
    }
  }
  if ( !v15 )
  {
    v17 = 0LL;
    P = 0LL;
    if ( v40 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v18 = *((_DWORD *)v10 + 18);
      if ( v18 )
      {
        *((_DWORD *)v10 + 18) = v18 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v10, &P);
        v17 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v17 )
      {
LABEL_48:
        v15 = *((_QWORD *)v10 + 16);
        *((_QWORD *)v10 + 16) = *(_QWORD *)v15;
        *(_QWORD *)(v15 + 24) = CurrentThread;
        *(_QWORD *)(v15 + 32) = 0LL;
        goto LABEL_49;
      }
    }
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( EnclaveReturnFrame < 0 )
    {
LABEL_99:
      v10 = (char *)v28;
      goto LABEL_100;
    }
    v19 = P;
    v20 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)v38 & -(__int64)((ExitStatus & 1) != 0)));
    v10 = (char *)v28;
    if ( v20 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v28, v19, v20);
    else
      EnclaveReturnFrame = v19[10];
    ExFreePoolWithTag(v19, 0);
    if ( EnclaveReturnFrame )
    {
      if ( EnclaveReturnFrame != 192
        && EnclaveReturnFrame != -1073740526
        && (unsigned int)(EnclaveReturnFrame - 257) > 1 )
      {
        EnclaveReturnFrame = -1073741749;
      }
      goto LABEL_100;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
    goto LABEL_48;
  }
LABEL_49:
  v36 = v15;
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( *(_DWORD *)(v15 + 36) == -1 )
  {
    EnclaveReturnFrame = -1073741670;
    goto LABEL_99;
  }
LABEL_64:
  --CurrentThread->SpecialApcDisable;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
  v29 = *(_DWORD *)(v15 + 32);
  v10 = (char *)v28;
  EnclaveReturnFrame = VslCallEnclave((__int64)v28, &v29, &v39, ExitStatus, &v30, &v34, &v33, &ExitStatus, v27);
  v31 = EnclaveReturnFrame;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v27[0] )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  if ( EnclaveReturnFrame < 0 )
  {
    if ( !v40 )
      goto LABEL_94;
    v39 = 0LL;
  }
  v22 = v39;
  if ( !v39 )
  {
    *v42 = v30;
    if ( v40 )
    {
      v13 = (*(_DWORD *)(v15 + 36))-- == 1;
      if ( v13 )
      {
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
        RtlAvlRemoveNode((unsigned __int64 *)v10 + 13, (unsigned __int64 *)v15);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10 + 112);
        KeAbPostRelease((ULONG_PTR)(v10 + 112));
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        v10 = (char *)v28;
      }
    }
    goto LABEL_94;
  }
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                         v37,
                         qword_140D071E0,
                         qword_140D071E8,
                         *((_QWORD *)v10 + 1),
                         v22,
                         ExitStatus,
                         v34,
                         v33,
                         v30,
                         (CurrentThread->MiscFlags & 0x100000) != 0);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v40 )
    goto LABEL_94;
  v23 = *(_DWORD *)(v15 + 36);
  if ( v23 )
    goto LABEL_88;
  *(_DWORD *)(v15 + 32) = v29;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
  v24 = (_QWORD *)*v35;
  v25 = 0;
  if ( !*v35 )
    goto LABEL_85;
  while ( (int)PspFindVsmEnclaveThread((unsigned __int64)CurrentThread, (__int64)v24) >= 0 )
  {
    v26 = (_QWORD *)v24[1];
    if ( !v26 )
    {
      v25 = 1;
      goto LABEL_85;
    }
LABEL_83:
    v24 = v26;
  }
  v26 = (_QWORD *)*v24;
  if ( *v24 )
    goto LABEL_83;
  v25 = 0;
LABEL_85:
  RtlAvlInsertNodeEx(v35, (unsigned __int64)v24, v25, (_QWORD *)v15);
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  v23 = *(_DWORD *)(v15 + 36);
  v10 = (char *)v28;
LABEL_88:
  *(_DWORD *)(v15 + 36) = v23 + 1;
LABEL_94:
  if ( !v10[76] && !*(_DWORD *)(v15 + 36) )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    *(_QWORD *)v15 = *((_QWORD *)v10 + 16);
    *((_QWORD *)v10 + 16) = v15;
    PspReleaseEnclaveThread(v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    goto LABEL_99;
  }
LABEL_100:
  PsDereferenceVsmEnclave(v10);
  return (unsigned int)EnclaveReturnFrame;
}
