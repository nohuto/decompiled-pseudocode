/*
 * XREFs of KeBugCheck2 @ 0x1405660A0
 * Callers:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeQueryCurrentStackInformation @ 0x140294D90 (KeQueryCurrentStackInformation.c)
 *     KiFreezeTargetExecution @ 0x14029AF90 (KiFreezeTargetExecution.c)
 *     KeSaveSupervisorState @ 0x14029B8E8 (KeSaveSupervisorState.c)
 *     KiSendThawExecution @ 0x1402DA5B0 (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x1402DA760 (KiSetDebuggerOwner.c)
 *     KiSendFreeze @ 0x1402DA81C (KiSendFreeze.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     IoNotifyDump @ 0x14038D2E0 (IoNotifyDump.c)
 *     KiFilterBugCheckInfo @ 0x1403EB11C (KiFilterBugCheckInfo.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     HvlLogGuestCrashInformation @ 0x1405434E0 (HvlLogGuestCrashInformation.c)
 *     HvlPrepareForRootCrashdump @ 0x140547AF4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140547EA8 (HvlResumeFromRootCrashdump.c)
 *     IoSaveBugCheckProgress @ 0x140552B40 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x140552D54 (IoSaveInitialBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x140552F34 (IoSetBugCheckProgressFlag.c)
 *     KdDecodeDataBlock @ 0x140564FF8 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1405655BC (KdEnableDebuggerWithLock.c)
 *     KiBugCheckDebugBreak @ 0x1405672C0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405674E0 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiBugCheckUnicodeToAnsi @ 0x140567544 (KiBugCheckUnicodeToAnsi.c)
 *     KiBugCheckWriteCrashDump @ 0x140567588 (KiBugCheckWriteCrashDump.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405675F4 (KiBugcheckUnloadDebugSymbols.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140567630 (KiCollectTriageDumpDataBlocks.c)
 *     KiDisplayBlueScreen @ 0x140567874 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x140567C08 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x140567F5C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x140568024 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x140568220 (KiScanBugCheckCallbackList.c)
 *     KiAttemptBugcheckRecovery @ 0x1405788B0 (KiAttemptBugcheckRecovery.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x14057938C (KiHandleMultipleBugchecksDuringRecovery.c)
 *     MmLocateUnloadedDriver @ 0x1405909B0 (MmLocateUnloadedDriver.c)
 *     MmIsSpecialPoolAddress @ 0x140592348 (MmIsSpecialPoolAddress.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14064331C (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwContextInitialized @ 0x1406528CC (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x140652CAC (IpmiLibAddSelBugcheckRecord.c)
 *     VfNotifyVerifierOfEvent @ 0x140A81780 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  signed __int32 v11; // eax
  unsigned int v12; // edx
  signed __int32 v13; // ecx
  char v14; // r13
  char CurrentStackInformation; // r8
  signed __int32 v16; // eax
  unsigned int v17; // edx
  signed __int32 v18; // ecx
  __int64 ExtendedSupervisorState; // rcx
  char v20; // r13
  int v21; // ecx
  size_t v22; // r8
  __int64 v23; // rbx
  char *v24; // rcx
  __int64 v25; // rdx
  _CONTEXT *Context; // rax
  __int128 v27; // xmm1
  char v28; // r9
  __int64 v29; // rdx
  unsigned int v30; // ecx
  bool v31; // r14
  int v32; // edi
  __int64 v33; // rsi
  __int64 v34; // r15
  bool v35; // di
  int IsEmptyAffinity; // eax
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rbx
  bool v40; // cf
  int v41; // eax
  int IsSpecialPoolAddress; // eax
  __int64 v43; // rax
  __int64 *v44; // rcx
  unsigned __int64 v45; // rsi
  struct _KTHREAD *v46; // rcx
  _KPROCESS *Process; // rcx
  __int64 v48; // rcx
  unsigned __int8 v49; // cl
  _DWORD *v50; // r8
  int v51; // ecx
  bool v52; // di
  unsigned int v53; // eax
  __int64 v54; // rcx
  _OWORD *v55; // rax
  char *v56; // rcx
  __int64 v57; // rdx
  __int128 v58; // xmm1
  unsigned int v59; // ebx
  int v60; // ecx
  char v61; // [rsp+41h] [rbp-BFh]
  _BYTE v62[2]; // [rsp+42h] [rbp-BEh] BYREF
  int v63; // [rsp+44h] [rbp-BCh]
  bool v64; // [rsp+48h] [rbp-B8h]
  bool v65; // [rsp+49h] [rbp-B7h]
  __int64 v66; // [rsp+50h] [rbp-B0h]
  char v67; // [rsp+58h] [rbp-A8h]
  bool v68; // [rsp+59h] [rbp-A7h]
  char v69; // [rsp+5Ah] [rbp-A6h]
  unsigned int v70; // [rsp+60h] [rbp-A0h] BYREF
  int v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  unsigned int v73; // [rsp+78h] [rbp-88h] BYREF
  __int64 v74; // [rsp+80h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v77)(); // [rsp+98h] [rbp-68h]
  unsigned int Number; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h] BYREF
  PCSTR Format; // [rsp+B8h] [rbp-48h]
  PCSTR v82; // [rsp+C0h] [rbp-40h]
  _DWORD v83[68]; // [rsp+D0h] [rbp-30h] BYREF
  char v84[1232]; // [rsp+1E0h] [rbp+E0h] BYREF
  char pszDest[176]; // [rsp+6B0h] [rbp+5B0h] BYREF

  v70 = a1;
  v66 = a6;
  memset(v83, 0, 0x108uLL);
  pszDest[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v74 = 0LL;
  v77 = KiBugCheckProgress;
  v65 = IopAutoReboot != 0;
  v62[0] = 0;
  LOBYTE(v63) = 0;
  v67 = 0;
  v69 = 0;
  Format = 0LL;
  v82 = 0LL;
  v72 = 0LL;
  v64 = 1;
  v68 = 0;
  v71 = 0;
  v79 = 0LL;
  Src = 0LL;
  v73 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    CurrentStackInformation = KeQueryCurrentStackInformation((__int64)&v73, (__int64)&Src, (__int64)&v79);
    v16 = KiBugCheckActive;
    v17 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (v16 & 3) == 3 )
      {
        v14 = 0;
        v61 = 0;
        goto LABEL_18;
      }
      v18 = v16;
      v16 = _InterlockedCompareExchange(&KiBugCheckActive, v17, v16);
    }
    while ( v16 != v18 );
    if ( CurrentStackInformation )
    {
      if ( v73 > 9 || (v21 = 929, !_bittest(&v21, v73)) )
      {
        v22 = v79 - (_QWORD)Src;
        if ( (unsigned __int64)(v79 - (_QWORD)Src) > 0x6000 )
          v22 = 24576LL;
        memmove(&KiPreBugcheckStackSaveArea, Src, v22);
      }
    }
    v14 = 1;
    v61 = 1;
    goto LABEL_29;
  }
  v11 = KiBugCheckActive;
  v12 = (16 * KeGetCurrentPrcb()->Number) | 3;
  do
  {
    if ( (v11 & 3) == 3 )
    {
      v14 = 0;
      goto LABEL_11;
    }
    v13 = v11;
    v11 = _InterlockedCompareExchange(&KiBugCheckActive, v12, v11);
  }
  while ( v11 != v13 );
  v14 = 1;
LABEL_11:
  v61 = v14;
  if ( v14 )
  {
LABEL_29:
    if ( KiRecoveryCallbackCount <= 0 )
      KiBugcheckOwnerKeepsOthersFrozen = 1;
  }
LABEL_18:
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
  Number = CurrentPrcb->Number;
  KeSaveSupervisorState(ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
  if ( !qword_140C22800 )
    goto LABEL_21;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_140C22800 + 3) )
  {
    if ( v14 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v70 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
    }
    v77 = 0LL;
    v20 = 1;
  }
  else
  {
LABEL_21:
    v20 = 0;
  }
  v23 = (__int64)CurrentPrcb;
  v24 = v84;
  v25 = 9LL;
  Context = CurrentPrcb->Context;
  do
  {
    *(_OWORD *)v24 = *(_OWORD *)&Context->P1Home;
    *((_OWORD *)v24 + 1) = *(_OWORD *)&Context->P3Home;
    *((_OWORD *)v24 + 2) = *(_OWORD *)&Context->P5Home;
    *((_OWORD *)v24 + 3) = *(_OWORD *)&Context->ContextFlags;
    *((_OWORD *)v24 + 4) = *(_OWORD *)&Context->SegGs;
    *((_OWORD *)v24 + 5) = *(_OWORD *)&Context->Dr1;
    *((_OWORD *)v24 + 6) = *(_OWORD *)&Context->Dr3;
    v24 += 128;
    v27 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *((_OWORD *)v24 - 1) = v27;
    --v25;
  }
  while ( v25 );
  v28 = v61;
  *(_OWORD *)v24 = *(_OWORD *)&Context->P1Home;
  *((_OWORD *)v24 + 1) = *(_OWORD *)&Context->P3Home;
  *((_OWORD *)v24 + 2) = *(_OWORD *)&Context->P5Home;
  *((_OWORD *)v24 + 3) = *(_OWORD *)&Context->ContextFlags;
  *((_OWORD *)v24 + 4) = *(_OWORD *)&Context->SegGs;
  if ( !v61 )
  {
    v31 = 1;
    v35 = v68;
    v34 = (__int64)v77;
    goto LABEL_154;
  }
  IoNotifyDump(4);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  v30 = v70;
  if ( v70 == 229 )
  {
    KiScanBugCheckCallbackList();
    ((void (__fastcall *)(_QWORD))off_140C01EF8[0])(0LL);
    HalReturnToFirmware(3);
  }
  qword_140C2BD88 = a2;
  qword_140C2BD90 = a3;
  if ( v70 == -1073741103 )
    v30 = 195;
  qword_140C2BD98 = a4;
  KiBugCheckData = v30;
  v70 = v30;
  qword_140C2BDA0 = a5;
  if ( v30 > 0xD8 )
  {
    if ( v30 == 234 )
    {
      KiBugCheckDriver = a4;
      goto LABEL_57;
    }
    if ( v30 == 239 )
    {
      v32 = 1;
    }
    else
    {
      if ( v30 == 252 )
      {
LABEL_123:
        v33 = v66;
        if ( !v66 )
        {
          if ( !a4 || (a4 & 3) != 0 )
            goto LABEL_57;
          v33 = a4;
          v66 = a4;
        }
        if ( v30 != 142 )
        {
          v29 = 1LL;
          v48 = *(_QWORD *)(v33 + 360);
          v72 = v48;
          if ( KeGetCurrentThread()->ApcStateIndex == 1 )
          {
            v32 = 0;
            if ( (unsigned __int64)(v48 - qword_140C50630) < 0x8000000000LL
              && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            {
              LOBYTE(v32) = 1;
              v63 = v32;
              goto LABEL_135;
            }
          }
        }
LABEL_57:
        v31 = 1;
LABEL_58:
        LOBYTE(v32) = v63;
LABEL_59:
        v33 = v66;
        goto LABEL_60;
      }
      if ( v30 == 317 )
      {
        v71 = 8;
        goto LABEL_57;
      }
      if ( v30 != 335 )
      {
        if ( v30 == 456 )
          v69 = 1;
        goto LABEL_57;
      }
      if ( a3 < 0x100 && a5 )
      {
        v46 = CurrentThread;
        if ( *(_QWORD *)(a5 + 8) )
          v46 = *(struct _KTHREAD **)(a5 + 8);
        CurrentThread = v46;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      v32 = HIDWORD(Process[2].Header.WaitListHead.Flink) >> 12;
      LOBYTE(v32) = (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
    }
    v31 = 1;
    v63 = v32;
    goto LABEL_59;
  }
  switch ( v30 )
  {
    case 0xD8u:
      v74 = a2;
      KiBugCheckDriver = a2 + 88;
      goto LABEL_57;
    case 0xAu:
      if ( a5 >= ExPoolCodeStart && a5 < ExPoolCodeEnd )
      {
        KiBugCheckData = 197LL;
        goto LABEL_57;
      }
      KiPcToFileHeader(a5, &v74, 0LL, v62);
      v29 = 1LL;
      if ( v62[0] == 1 )
      {
        if ( KiPcToFileHeader(a2, &v74, 1LL, v62) )
        {
          KiBugCheckData = 211LL;
          KiBugCheckDriver = v74 + 88;
        }
        else
        {
          KiBugCheckDriver = MmLocateUnloadedDriver(a2);
          if ( KiBugCheckDriver )
            KiBugCheckData = 212LL;
        }
        goto LABEL_57;
      }
      KiBugCheckData = 209LL;
LABEL_87:
      v31 = 1;
      goto LABEL_58;
    case 0x4Cu:
      Format = (PCSTR)a4;
      LOBYTE(v63) = 1;
      v44 = &qword_140C2BD88;
      v67 = 1;
      v45 = a3 - (_QWORD)&qword_140C2BD88;
      KiBugCheckData = (unsigned int)a2;
      v82 = (PCSTR)a5;
      do
      {
        *v44 = *(__int64 *)((char *)v44 + v45);
        ++v44;
      }
      while ( (__int64)v44 < (__int64)qword_140C2BDA8 );
      goto LABEL_57;
  }
  if ( v30 != 80 )
  {
    if ( v30 == 123 )
    {
      v29 = 1LL;
      v64 = (a4 & 1) == 0;
      v31 = (a4 & 2) == 0;
      goto LABEL_58;
    }
    if ( v30 != 142 && v30 != 190 )
    {
      if ( v30 == 203 )
        v72 = a2;
      goto LABEL_57;
    }
    goto LABEL_123;
  }
  v37 = v66;
  v38 = 0LL;
  if ( !v66 )
  {
    if ( !a4 || (a4 & 3) != 0 )
    {
      v62[0] = 1;
      goto LABEL_83;
    }
    v37 = a4;
    v66 = a4;
  }
  v72 = *(_QWORD *)(v37 + 360);
  v39 = v72;
  qword_140C2BD98 = v72;
  v38 = KiPcToFileHeader(v72, &v74, 0LL, v62);
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v40 = (unsigned __int64)(v39 - qword_140C50630) < 0x8000000000LL;
    v23 = (__int64)CurrentPrcb;
    if ( v40 )
    {
      v41 = (unsigned __int8)v63;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        v41 = 1;
      v63 = v41;
    }
  }
  else
  {
    v23 = (__int64)CurrentPrcb;
  }
LABEL_83:
  IsSpecialPoolAddress = MmIsSpecialPoolAddress(a2);
  v29 = 1LL;
  if ( IsSpecialPoolAddress == 1 )
  {
    v43 = 213LL;
    if ( v62[0] == 1 )
      v43 = 204LL;
    KiBugCheckData = v43;
    goto LABEL_87;
  }
  if ( v72 == a2
    && (unsigned __int64)(a2 - qword_140C50630) < 0x8000000000LL
    && (unsigned __int64)CurrentThread->Teb - 1 > 0xFFFF7FFFFFFFFFFEuLL )
  {
    KiBugCheckData = 207LL;
    goto LABEL_87;
  }
  if ( !v38 )
  {
    KiBugCheckDriver = MmLocateUnloadedDriver(a2);
    if ( KiBugCheckDriver )
      KiBugCheckData = 206LL;
    goto LABEL_57;
  }
  LOBYTE(v32) = v63;
  v33 = v66;
LABEL_135:
  v31 = 1;
LABEL_60:
  if ( !WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
  {
    WheapSelLogSetNtSchedulerAvailabilityNoLock();
    if ( (unsigned __int8)IpmiHwContextInitialized(&WheaIpmiContext) )
      IpmiLibAddSelBugcheckRecord();
  }
  BugCheckProgressEfiSafeToCall = KiBugCheckData != 265;
  if ( v31 )
  {
    LOBYTE(v29) = v20;
    KiCollectTriageDumpDataBlocks(KiBugCheckData, v29);
  }
  v34 = (__int64)v77;
  if ( v65 )
  {
    qword_140C2BDD0 = (__int64)v77;
    KiCrashDumpContext = (__int64)v84;
    qword_140C2BDC8 = (__int64)CurrentThread;
    qword_140C2BDD8 = v33;
    byte_140C2BDE0 = v32;
    KiAttemptBugcheckRecovery();
  }
  v35 = 1;
  KiBugcheckOwnerKeepsOthersFrozen = 1;
  off_140C01F18[0]();
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(96);
  IsEmptyAffinity = KeIsEmptyAffinityEx(KiNmiInProgress);
  ((void (__fastcall *)(bool))off_140C01CE8[0])(IsEmptyAffinity == 0);
  KiFilterBugCheckInfo(&v70, (__int64)&KiBugCheckData);
  if ( CrashdmpDumpBlock )
    v35 = !v31;
  HvlLogGuestCrashInformation(KiBugCheckData, qword_140C2BD88, qword_140C2BD90, qword_140C2BD98, qword_140C2BDA0, v35);
  if ( KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
  }
  else if ( v72 )
  {
    KiDumpParameterImages(pszDest);
  }
  if ( !KdPitchDebugger )
    qword_140C021B8 = (__int64)v84;
  if ( (unsigned __int8)KiBugCheckShouldEnterPostBugCheckDebugger(v70, 0LL) )
  {
    if ( !*(_BYTE *)(v23 + 32422) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
        KiBugCheckData,
        (const void *)qword_140C2BD88,
        (const void *)qword_140C2BD90,
        (const void *)qword_140C2BD98,
        (const void *)qword_140C2BDA0);
      if ( KiBugCheckDriver )
        DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
      if ( v67 )
      {
        if ( Format )
          DbgPrintEx(0x65u, 0, Format);
        if ( v82 )
          DbgPrintEx(0x65u, 0, v82);
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      KiBugCheckDebugBreak(3u);
  }
  v28 = v61;
LABEL_154:
  _disable();
  v49 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
  {
    v50 = KeGetCurrentPrcb()->SchedulerAssist;
    v50[5] |= (-1 << (v49 + 1)) & 0xFFFC;
  }
  if ( v28 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiHypervisorInitiatedCrashDump )
    {
      KiSetDebuggerOwner(v23);
      v83[0] = 2097153;
      memset(&v83[1], 0, 0x104uLL);
      KiCopyAffinityEx((__int64)v83, 0x20u, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx((unsigned __int16 *)v83, *(_DWORD *)(v23 + 36));
      KiSendFreeze((__int64)v83, 0);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoSaveInitialBugCheckProgress(KiBugCheckData, qword_140C2BD88);
    IoSaveBugCheckProgress(1);
    if ( v20 )
    {
      v52 = v64;
    }
    else
    {
      v51 = v71;
      if ( v35 )
        v51 = v71 | 4;
      v52 = v64;
      v53 = v51 | 2;
      if ( v65 )
        v53 = v51;
      v54 = v53 | 1;
      if ( v64 )
        v54 = v53;
      KiDisplayBlueScreen(v54);
    }
    HvlPrepareForRootCrashdump(1u);
    if ( !v20 )
    {
      KiInvokeBugCheckEntryCallbacks(1LL, 0LL, 0LL);
      KiInvokeBugCheckEntryCallbacks(8LL, 0LL, 0LL);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v55 = *(_OWORD **)(v23 + 35264);
    v56 = v84;
    v57 = 9LL;
    do
    {
      *v55 = *(_OWORD *)v56;
      v55[1] = *((_OWORD *)v56 + 1);
      v55[2] = *((_OWORD *)v56 + 2);
      v55[3] = *((_OWORD *)v56 + 3);
      v55[4] = *((_OWORD *)v56 + 4);
      v55[5] = *((_OWORD *)v56 + 5);
      v55[6] = *((_OWORD *)v56 + 6);
      v55 += 8;
      v58 = *((_OWORD *)v56 + 7);
      v56 += 128;
      *(v55 - 1) = v58;
      --v57;
    }
    while ( v57 );
    *v55 = *(_OWORD *)v56;
    v55[1] = *((_OWORD *)v56 + 1);
    v55[2] = *((_OWORD *)v56 + 2);
    v55[3] = *((_OWORD *)v56 + 3);
    v55[4] = *((_OWORD *)v56 + 4);
    if ( v31 )
    {
      KdDecodeDataBlock();
      qword_140C2BDC8 = (__int64)CurrentThread;
      qword_140C2BDD8 = v66;
      byte_140C2BDE0 = v63;
      KiCrashDumpContext = (__int64)v84;
      qword_140C2BDD0 = v34;
      KiBugCheckWriteCrashDump(&KiCrashDumpContext);
    }
  }
  else
  {
    v59 = KiBugCheckActive;
    KiHandleMultipleBugchecksDuringRecovery((unsigned int)KiBugCheckActive);
    if ( Number != v59 >> 4 )
    {
      while ( 1 )
      {
        if ( KeGetPcr()->Prcb.CombinedNmiMceActive && KeGetCurrentPrcb()->IpiFrozen == 5 )
          KiFreezeTargetExecution(0LL, 0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump || (v59 & 0xC) >= 8 )
    {
      while ( 1 )
        off_140C01C28();
    }
    IoSetBugCheckProgressFlag(0x20000);
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( (v59 & 0xC) != 0 )
      KiBugCheckDebugBreak(4u);
    v52 = v64;
  }
  HvlResumeFromRootCrashdump(0);
  IoSaveBugCheckProgress(99);
  if ( !v20 )
    KiScanBugCheckCallbackList();
  off_140C01F08[0]();
  IoSaveBugCheckProgress(4);
  if ( v65 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0);
    KiBugcheckUnloadDebugSymbols();
    ((void (__fastcall *)(_QWORD))off_140C01EF8[0])(0LL);
    if ( PoPowerDownActionInProgress && !PoPowerResetActionInProgress
      || PoModernStandbyActionInProgress
      || v69
      || (v60 = 3, !v52) )
    {
      v60 = 1;
    }
    HalReturnToFirmware(v60);
  }
  KiBugCheckDebugBreak(4u);
}
