/*
 * XREFs of Phase1InitializationDiscard @ 0x140B4FFBC
 * Callers:
 *     Phase1Initialization @ 0x140820F30 (Phase1Initialization.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x1402B0340 (KeSetPriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     ExLocalTimeToSystemTime @ 0x14033B2A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x14033B2F0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeFieldsToTime @ 0x14033B350 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B6B0 (RtlTimeToTimeFields.c)
 *     RtlStringCbCopyA @ 0x140348078 (RtlStringCbCopyA.c)
 *     FsRtlSendModernAppTermination @ 0x14035C320 (FsRtlSendModernAppTermination.c)
 *     RtlStringCbPrintfA @ 0x140384568 (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x140384630 (InbvDisplayString.c)
 *     DisplayBootBitmap @ 0x1403AA048 (DisplayBootBitmap.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1403AA420 (KiCommitGroupSubNodeAssignments.c)
 *     MakeGdtReadOnly @ 0x1403AE4AC (MakeGdtReadOnly.c)
 *     KeSetAffinityProcess @ 0x1403AEA68 (KeSetAffinityProcess.c)
 *     KeSetSystemTime @ 0x1403B5DAC (KeSetSystemTime.c)
 *     HvlDebuggerSupportInitialize @ 0x1403B62F4 (HvlDebuggerSupportInitialize.c)
 *     PoNotifySystemTimeSet @ 0x1403B64C8 (PoNotifySystemTimeSet.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C32D0 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _strupr @ 0x1403D8960 (_strupr.c)
 *     strtoul @ 0x1403D8E38 (strtoul.c)
 *     strncmp @ 0x1403D8E90 (strncmp.c)
 *     _strtoui64 @ 0x1403D91A0 (_strtoui64.c)
 *     strstr @ 0x1403D91D0 (strstr.c)
 *     atol @ 0x1403D9280 (atol.c)
 *     ZwQueryLicenseValue @ 0x14041D920 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x14041E4C0 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x14041EA30 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlStringCbPrintfExA @ 0x1404FDDEC (RtlStringCbPrintfExA.c)
 *     RtlFindMessage @ 0x140755590 (RtlFindMessage.c)
 *     ExReleaseTimeRefreshLock @ 0x14075F930 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x14075F954 (ExAcquireTimeRefreshLock.c)
 *     ExInitializePagedLookasideList @ 0x1407D6C40 (ExInitializePagedLookasideList.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140821BA8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x14083F28C (ExpWriteTimeZoneBias.c)
 *     ExInitializeLeapSecondData @ 0x140853510 (ExInitializeLeapSecondData.c)
 *     AlpcpInitSystem @ 0x14085A348 (AlpcpInitSystem.c)
 *     EtwTimeProfileReset @ 0x140864C68 (EtwTimeProfileReset.c)
 *     ExInitLicenseCallback @ 0x140865A5C (ExInitLicenseCallback.c)
 *     IopInitializeBootLogging @ 0x140944E48 (IopInitializeBootLogging.c)
 *     HalInitSystem @ 0x140A8B550 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x140AEC028 (BgGetDisplayContext.c)
 *     BgDisplayProgressIndicator @ 0x140AEC040 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140AEC07C (BgDisplayBackgroundUpdate.c)
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140B394EC (ExInitializeTimeRefresh.c)
 *     MmInitSystem @ 0x140B443B4 (MmInitSystem.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 *     CcInitializeCacheManager @ 0x140B49A88 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x140B4A2FC (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 *     PspInitPhase1 @ 0x140B4D1F4 (PspInitPhase1.c)
 *     SmInitSystem @ 0x140B4D6E0 (SmInitSystem.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 *     VmInitSystem @ 0x140B4ECF8 (VmInitSystem.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140B4EDBC (SeCodeIntegrityInitializePolicy.c)
 *     ExInitializeExternalBootSupport @ 0x140B4FD04 (ExInitializeExternalBootSupport.c)
 *     HalReportResourceUsage @ 0x140B50B50 (HalReportResourceUsage.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     DbgkInitialize @ 0x140B524F0 (DbgkInitialize.c)
 *     InbvDriverInitialize @ 0x140B52524 (InbvDriverInitialize.c)
 *     VerifierInitSystem @ 0x140B53244 (VerifierInitSystem.c)
 *     SeInitSystem @ 0x140B53278 (SeInitSystem.c)
 *     PpInitSystem @ 0x140B542D0 (PpInitSystem.c)
 *     ExInitSystem @ 0x140B54930 (ExInitSystem.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 *     PfInitializeSuperfetch @ 0x140B617C0 (PfInitializeSuperfetch.c)
 *     ExpComputeCyclesPerYield @ 0x140B66FF0 (ExpComputeCyclesPerYield.c)
 *     ExInitSystemPhase2 @ 0x140B6740C (ExInitSystemPhase2.c)
 *     FsRtlInitSystem @ 0x140B68494 (FsRtlInitSystem.c)
 *     KiPerformGroupConfiguration @ 0x140B69430 (KiPerformGroupConfiguration.c)
 *     KeInitializeClock @ 0x140B6AB28 (KeInitializeClock.c)
 *     CreateSystemRootLink @ 0x140B6E898 (CreateSystemRootLink.c)
 *     PsInitializeBootCpuPartitions @ 0x140B71D74 (PsInitializeBootCpuPartitions.c)
 *     InitSkuSessionParameters @ 0x140B72F5C (InitSkuSessionParameters.c)
 *     GetBootSystemTime @ 0x140B7333C (GetBootSystemTime.c)
 *     BcdInitializeBcdSyncMutant @ 0x140B752A8 (BcdInitializeBcdSyncMutant.c)
 *     MfgInitSystem @ 0x140B75414 (MfgInitSystem.c)
 *     HalAllProcessorsStarted @ 0x140B75DC0 (HalAllProcessorsStarted.c)
 *     CreateMiniNtBootKey @ 0x140B90794 (CreateMiniNtBootKey.c)
 */

char __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // r15d
  __int64 v3; // r12
  __int64 Pool2; // rax
  char *v5; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v7; // rcx
  char *v8; // rax
  const char *v9; // rbx
  const char *v10; // rsi
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  ULONG_PTR v16; // rcx
  char v17; // al
  char v18; // cl
  int v19; // eax
  char v20; // cl
  bool v21; // sf
  int v22; // eax
  char v23; // cl
  int Message; // eax
  NTSTRSAFE_PSTR v25; // rbx
  int v26; // r15d
  size_t v27; // rdi
  char *v28; // rbx
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  __int64 v31; // r15
  _OWORD *v32; // rax
  char *v33; // rcx
  __int64 v34; // rdx
  __int128 v35; // xmm1
  int v36; // eax
  char *v37; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  const char *v44; // rbx
  unsigned int v45; // r9d
  int v46; // eax
  __int64 v47; // r9
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  NTSTATUS v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  int inited; // eax
  int v54; // eax
  int SystemRootLink; // eax
  __int64 v56; // r8
  int v57; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v59; // rbx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  __int64 v63; // rdx
  int v64; // eax
  int v65; // ebx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  char *v70; // rax
  char *v71; // r15
  __int16 v72; // ax
  bool v73; // zf
  int v74; // eax
  int v75; // eax
  char *v77; // rax
  char *v78; // rdi
  __int16 v79; // ax
  int v80; // edx
  char v81; // al
  char *v82; // rax
  const char *v83; // rbx
  unsigned int v84; // eax
  char *v85; // rcx
  __int64 v86; // rdi
  unsigned int v87; // eax
  __int64 v88; // rdi
  __int64 v89; // rax
  char v90; // al
  NTSTATUS v91; // eax
  NTSTATUS v92; // eax
  char *v93; // rax
  __int16 v94; // bx
  char *v95; // rax
  char *v96; // rax
  char *v97; // rax
  char *v98; // rax
  char *v99; // rax
  const char *v100; // rsi
  __int64 v101; // rax
  int v102; // eax
  int v103; // ecx
  unsigned int v104; // r9d
  SIZE_T Size; // [rsp+20h] [rbp-E0h]
  int Tag; // [rsp+28h] [rbp-D8h]
  char v107; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-B8h] BYREF
  int v109; // [rsp+50h] [rbp-B0h]
  const char *v110; // [rsp+58h] [rbp-A8h] BYREF
  int v111; // [rsp+60h] [rbp-A0h]
  int v112; // [rsp+64h] [rbp-9Ch] BYREF
  char *EndPtr; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v115; // [rsp+78h] [rbp-88h] BYREF
  __int64 v116; // [rsp+80h] [rbp-80h]
  int v117; // [rsp+88h] [rbp-78h] BYREF
  size_t pcbRemaining; // [rsp+90h] [rbp-70h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+98h] [rbp-68h] BYREF
  __int64 v120; // [rsp+A0h] [rbp-60h] BYREF
  STRING v121; // [rsp+A8h] [rbp-58h] BYREF
  TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v124[8]; // [rsp+E0h] [rbp-20h] BYREF
  char pszDest[24]; // [rsp+160h] [rbp+60h] BYREF

  v1 = 0;
  SystemTime.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v120 = 0LL;
  v110 = 0LL;
  v121 = 0LL;
  v115 = 0LL;
  TimeFields = 0LL;
  LOBYTE(v109) = 0;
  v117 = 0;
  v111 = 0;
  v112 = 0;
  DestinationString = 0LL;
  memset(v124, 0, 0x74uLL);
  v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 157);
  Pool2 = ExAllocatePool2(64LL, 0x200uLL, 0x74696E49u);
  v5 = (char *)Pool2;
  if ( !Pool2 )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  v107 = 0;
  v116 = Pool2 + 256;
  LODWORD(InitializationPhase) = 1;
  KeSetPriorityThread(CurrentThread, 31);
  v7 = *(char **)(BugCheckParameter3 + 216);
  if ( v7 )
  {
    v8 = strupr(v7);
    v9 = v8;
    v10 = v8;
    if ( v8 )
    {
      v11 = strstr(v8, " HYPERVISORROOTPROC=");
      if ( v11 )
      {
        v77 = strstr(v11, "=");
        if ( v77 )
          KeRootProcSpecified = atol(v77 + 1);
      }
      v12 = strstr(v9, " HYPERVISORROOTPROCNUMANODES=");
      if ( v12 )
      {
        v78 = strstr(v12, "=");
        if ( v78 )
        {
LABEL_107:
          while ( (unsigned int)KeRootProcNumaNodesSpecified < 0x40 )
          {
            v79 = atol(++v78);
            v80 = KeRootProcNumaNodesSpecified;
            *((_WORD *)&KeRootProcNumaNodes + (unsigned int)KeRootProcNumaNodesSpecified) = v79;
            v81 = *v78;
            KeRootProcNumaNodesSpecified = v80 + 1;
            if ( v81 != 44 )
            {
              while ( v81 != 32 && v81 )
              {
                v81 = *++v78;
                if ( *v78 == 44 )
                  goto LABEL_107;
              }
              break;
            }
          }
        }
      }
      v13 = strstr(v10, " HYPERVISORROOTPROCNUMANODELPS=");
      if ( v13 )
      {
        v82 = strstr(v13, "=");
        KeRootProcNumaNodeLpsSpecified = 1;
        v83 = v82;
        KeRootProcNumaNodesSpecified = 0;
        KeRootProcSpecified = 0;
        if ( v82 )
        {
          do
          {
LABEL_117:
            ++v83;
            EndPtr = 0LL;
            v84 = strtoul(v83, &EndPtr, 10);
            v85 = EndPtr;
            v86 = v84;
            if ( v83 != EndPtr )
            {
              if ( *EndPtr == 95 )
              {
                v83 = EndPtr + 1;
                v87 = strtoul(EndPtr + 1, &EndPtr, 10);
                v85 = EndPtr;
                v1 = v87;
              }
              if ( v83 != v85 && *v85 == 61 && (unsigned int)v86 < 0x40 )
              {
                v88 = 2 * v86;
                v83 = v85 + 1;
                if ( !qword_140D24988[v88] )
                {
                  v89 = ExAllocatePool2(64LL, 0x80uLL, 0x400u);
                  if ( !v89 )
                    KeBugCheck(0x31u);
                  KeRootProcNumaNodeLps[v88] = 1024LL;
                  qword_140D24988[v88] = v89;
                }
                if ( v1 < 0x10 )
                  *(_QWORD *)(qword_140D24988[v88] + 8LL * v1) = strtoui64(v83, &EndPtr, 16);
              }
            }
            v90 = *v83;
            v1 = 0;
          }
          while ( *v83 == 44 );
          while ( v90 != 32 && v90 )
          {
            v90 = *++v83;
            if ( *v83 == 44 )
              goto LABEL_117;
          }
        }
      }
    }
  }
  else
  {
    v10 = 0LL;
  }
  v14 = KiSubNodeConfigBlock;
  word_140C6AD64 = 0;
  *(_BYTE *)(KiSubNodeConfigBlock + 5) &= 0xFCu;
  *(_BYTE *)(v14 + 4) = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  v15 = KiSubNodeConfigBlock;
  KiCommitGroupSubNodeAssignments(*(_WORD *)(KiSubNodeConfigBlock + 6));
  v16 = (unsigned int)InitializationPhase;
  *(_QWORD *)(v15 + 16) |= 1uLL;
  if ( !(unsigned __int8)HalInitSystem(v16, BugCheckParameter3) )
    goto LABEL_216;
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( v10 && strstr(v10, "NOGUIBOOT") )
    goto LABEL_219;
  v17 = byte_140C6AB80;
  byte_140C6AB4C = 0;
  if ( byte_140C6AB80 )
  {
    v18 = byte_140C6AB82;
    if ( byte_140C6AB82 )
    {
      v19 = BgDisplayProgressIndicator(1);
      v20 = byte_140C6AB81;
      v21 = v19 < 0;
      v17 = byte_140C6AB80;
      if ( !v21 )
        v20 = 1;
      byte_140C6AB81 = v20;
      v18 = byte_140C6AB82;
    }
    if ( v17 && v18 )
    {
      v22 = BgDisplayBackgroundUpdate(1);
      v23 = byte_140C6AB79;
      if ( v22 >= 0 )
        v23 = 1;
      byte_140C6AB79 = v23;
    }
  }
  qword_140C6AB50 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
  InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
  DisplayBootBitmap(0);
  if ( v10 )
  {
LABEL_219:
    if ( strstr(v10, "MININT") )
    {
      InitIsWinPEMode = 1;
      if ( strstr(v10, "INRAM") )
        InitWinPEModeType |= 0x80000000;
      else
        InitWinPEModeType |= 1u;
    }
  }
  Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x4000007Eu, (unsigned __int16 **)&v110);
  pcbRemaining = 256LL;
  v25 = v5;
  v26 = Message;
  ppszDestEnd = v5;
  if ( CmCSDVersionString.Length )
  {
    v91 = RtlStringCbPrintfExA(v5, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ");
    if ( v91 < 0 )
      KeBugCheckEx(0x32u, v91, 7uLL, 0LL, 0LL);
    v25 = ppszDestEnd;
    v27 = pcbRemaining;
  }
  else
  {
    v27 = 255LL;
    pcbRemaining = 255LL;
  }
  *v25 = 0;
  v28 = v25 + 1;
  ppszDestEnd = v28;
  v29 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v29 < 0 )
    KeBugCheckEx(0x32u, v29, 7uLL, 1uLL, 0LL);
  if ( v26 < 0 )
  {
    v92 = RtlStringCbCopyA(v28, v27, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v92 < 0 )
      KeBugCheckEx(0x32u, v92, 7uLL, 3uLL, 0LL);
  }
  else
  {
    Tag = (int)v5;
    LODWORD(Size) = (unsigned __int16)NtBuildNumber;
    v30 = RtlStringCbPrintfA(v28, v27, v110 + 4, pszDest, Size);
    if ( v30 < 0 )
      KeBugCheckEx(0x32u, v30, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v28);
  v31 = (__int64)(v5 + 256);
  v32 = v5 + 256;
  v33 = v5;
  v34 = 2LL;
  do
  {
    *v32 = *(_OWORD *)v33;
    v32[1] = *((_OWORD *)v33 + 1);
    v32[2] = *((_OWORD *)v33 + 2);
    v32[3] = *((_OWORD *)v33 + 3);
    v32[4] = *((_OWORD *)v33 + 4);
    v32[5] = *((_OWORD *)v33 + 5);
    v32[6] = *((_OWORD *)v33 + 6);
    v32 += 8;
    v35 = *((_OWORD *)v33 + 7);
    v33 += 128;
    *(v32 - 1) = v35;
    --v34;
  }
  while ( v34 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3) )
LABEL_215:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v36 = *(_DWORD *)(v3 + 436);
    if ( v36 == -1 )
    {
      *(_DWORD *)(v3 + 436) = ExpAltTimeZoneBias;
      v36 = ExpAltTimeZoneBias;
      v107 = 1;
    }
    *(_QWORD *)(v3 + 440) = 600000000LL * v36;
    *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
    ExpWriteTimeZoneBias((_DWORD *)(v3 + 440));
  }
  GetBootSystemTime(*(_QWORD *)(BugCheckParameter3 + 240), &SystemTime);
  if ( v10 )
  {
    v37 = strstr(v10, "YEAR");
    if ( v37 )
    {
      v93 = strstr(v37, "=");
      if ( v93 )
      {
        v94 = atol(v93 + 1);
        RtlTimeToTimeFields(&SystemTime, &TimeFields);
        TimeFields.Year = v94;
        RtlTimeFieldsToTime(&TimeFields, &SystemTime);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  KeSetSystemTime((__int64)&SystemTime, (__int64)&v120, 4);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PoNotifySystemTimeSet(
    (__int64 *)&SystemTime,
    &v120,
    0,
    (int)&LocalTime,
    *(_DWORD *)(CurrentServerSiloGlobals[157] + 436LL),
    Tag,
    ExpSystemIsInCmosMode);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v112) < 0 || v111 != 4 || v112 != 4 )
    KeRegisteredProcessors = 1;
  if ( v10 )
  {
    v39 = strstr(v10, " BOOTPROC=");
    if ( v39 )
    {
      v95 = strstr(v39, "=");
      if ( v95 )
        KeBootprocSpecified = atol(v95 + 1);
    }
    v40 = strstr(v10, " NUMPROC=");
    if ( v40 )
    {
      v96 = strstr(v40, "=");
      if ( v96 )
        KeNumprocSpecified = atol(v96 + 1);
    }
    v41 = strstr(v10, " HYPERVISORNUMPROC=");
    if ( v41 )
    {
      v97 = strstr(v41, "=");
      if ( v97 )
        KeHypervisorNumprocSpecified = atol(v97 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v42 = strstr(v10, " HYPERVISORROOTPROCPERNODE=");
      if ( v42 )
      {
        v98 = strstr(v42, "=");
        if ( v98 )
          KeRootProcPerNodeSpecified = atol(v98 + 1);
      }
      v43 = strstr(v10, " HYPERVISORROOTPROCPERCORE=");
      if ( v43 )
      {
        v99 = strstr(v43, "=");
        if ( v99 )
          *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) = atol(v99 + 1);
      }
    }
    if ( strstr(v10, " MAXPROC") )
      KeMaximumProcessors = 2048;
  }
  qword_140D81778 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_140D81780 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwTimeProfileReset();
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v44 = (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000089u, &v115) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const char *)(v115 + 2);
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_216:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v121, v44);
  if ( v121.Length >= 2u )
    v121.Length -= 2;
  v45 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v45 = 1073741981;
  v46 = RtlFindMessage(0x140000000LL, 0xBu, 0, v45, (unsigned __int16 **)&v110);
  v47 = 0LL;
  v48 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v48 )
  {
    v49 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v47 += *v49;
      v49 += 2;
      --v48;
    }
    while ( v48 );
  }
  if ( v46 < 0 )
    v50 = RtlStringCbPrintfA(
            v5,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v47 + 255) >> 8,
            &v121);
  else
    v50 = RtlStringCbPrintfA(
            v5,
            0x100uLL,
            v110 + 4,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v47 + 255) >> 8,
            &v121);
  if ( v50 < 0 )
    KeBugCheckEx(0x32u, v50, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)v5);
  ExFreePoolWithTag(v5, 0);
  if ( !ObInitSystem(1) )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem(BugCheckParameter3) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(0xFFFFFFFFLL);
  if ( !IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !KeInitSystem(1) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v51, v52) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v54 = DbgkInitialize();
  if ( v54 < 0 )
    KeBugCheckEx(0x32u, v54, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PspInitPhase1();
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_140D81798 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !MmInitSystem(1LL, BugCheckParameter3, v56) )
    KeBugCheckEx(0x65u, (unsigned __int8)byte_140C67F42, 0LL, 0LL, 0LL);
  qword_140D817A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !CcInitializeCacheManager(1) )
    KeBugCheck(0x66u);
  if ( !CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  PsInitializeBootCpuPartitions();
  v57 = ExInitializeLeapSecondData();
  if ( v57 < 0 )
    KeBugCheckEx(0x32u, v57, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140D81768 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v124, 0, 0x78uLL);
  *((_QWORD *)&v124[0] + 1) = MmMapLockedRestartPages;
  *(_QWORD *)&v124[1] = MmUnmapLockedRestartPages;
  *((_QWORD *)&v124[1] + 1) = KeRemoveEnclavePage;
  *(_QWORD *)&v124[2] = KdPullRemoteFileEx;
  *((_QWORD *)&v124[2] + 1) = CmSaveKeyToBuffer;
  *(_QWORD *)&v124[3] = KeIsBugCheckActive;
  *((_QWORD *)&v124[3] + 1) = CmOpenKeyForBugCheckRecovery;
  *(_QWORD *)&v124[4] = MiPageToNode;
  *((_QWORD *)&v124[4] + 1) = MmGetNextNode;
  LODWORD(v124[0]) = 120;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_140D81748 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v59 = (int)KsrInitSystem(BugCheckParameter3, v124, DisplayContext);
  qword_140D81770 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v59 + 0x80000000) >= 0 && (_DWORD)v59 != -1073741637 )
    KeBugCheckEx(0x32u, v59, 0LL, 1uLL, 0LL);
  ExKsrInterface = v124[5];
  qword_140C31AC0 = *(_QWORD *)&v124[7];
  *(_OWORD *)&xmmword_140C31AB0 = v124[6];
  v60 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v60 < 0 )
    KeBugCheckEx(0x32u, v60, 8uLL, 0LL, 0LL);
  v61 = MfgInitSystem(BugCheckParameter3);
  if ( v61 < 0 )
    KeBugCheckEx(0x32u, v61, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  v62 = SmInitSystem(0);
  if ( v62 < 0 )
    KeBugCheckEx(0x32u, v62, 0xBuLL, 0LL, 0LL);
  v64 = VmInitSystem(0, v63);
  if ( v64 < 0 )
    KeBugCheckEx(0x32u, v64, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2656LL) & 2) == 0 || strstr(v10, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
  if ( (HvlpFlags & 2) != 0 )
    ZwUpdateWnfStateData((__int64)&WNF_HVL_CPU_MGMT_PARTITION, 0LL);
  FsRtlSendModernAppTermination(&v117, 1u, 1);
  ExInitializeTimeRefresh();
  ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v65 = *(_DWORD *)(v3 + 436);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLock();
  if ( v107 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &SystemTime);
    KeSetSystemTime((__int64)&SystemTime, (__int64)&v120, 4);
  }
  else if ( v65 != *(_DWORD *)(v3 + 436) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v67, v66, v68) )
    KeBugCheck(0x68u);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&RtlLznt1DecompressChunkLookaside,
    0LL,
    0LL,
    512,
    88,
    1667529324,
    0,
    0);
  ExInitializePagedLookasideList(&RtlpRangeListEntryLookasideList, 0LL, 0LL, 0, 0x38uLL, 0x656C5252u, 0x10u);
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v69);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( !v10 )
    goto LABEL_96;
  v70 = strstr(v10, "SAFEBOOT:");
  v71 = v70;
  if ( !v70 )
  {
LABEL_95:
    v31 = v116;
    goto LABEL_96;
  }
  v100 = v70 + 9;
  if ( !strncmp(v70 + 9, "MINIMAL", 7uLL) )
  {
    LODWORD(InitSafeBootMode) = 1;
  }
  else
  {
    if ( strncmp(v100, "NETWORK", 7uLL) )
    {
      if ( !strncmp(v100, "DSREPAIR", 8uLL) )
      {
        LODWORD(InitSafeBootMode) = 3;
        v101 = 17LL;
      }
      else
      {
        LODWORD(InitSafeBootMode) = 0;
        v101 = 9LL;
      }
      goto LABEL_196;
    }
    LODWORD(InitSafeBootMode) = 2;
  }
  v101 = 16LL;
LABEL_196:
  if ( v71[v101] )
  {
    v102 = strncmp(&v71[v101], "(ALTERNATESHELL)", 0x10uLL);
    v103 = (unsigned __int8)v109;
    if ( !v102 )
      v103 = 1;
    v109 = v103;
  }
  if ( !(_DWORD)InitSafeBootMode )
    goto LABEL_95;
  v115 = 0LL;
  v104 = 0;
  switch ( (_DWORD)InitSafeBootMode )
  {
    case 1:
      v104 = 168;
      break;
    case 2:
      v104 = 169;
      break;
    case 3:
      v104 = 170;
      break;
  }
  if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, v104, &v115) >= 0 )
    InbvDisplayString((__int64)(v115 + 2));
  v31 = v116;
LABEL_96:
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0xB7u, (unsigned __int16 **)&v110) >= 0 )
      InbvDisplayString((__int64)(v110 + 4));
    IopInitializeBootLogging(BugCheckParameter3, v31);
  }
  ExInitSystemPhase2();
  v72 = ExpComputeCyclesPerYield();
  v73 = InitIsWinPEMode == 0;
  *(_WORD *)(MmWriteableSharedUserData + 726) = v72;
  if ( !v73 )
    CreateMiniNtBootKey();
  v74 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v74 < 0 )
    KeBugCheckEx(0x32u, v74, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v75 = ExInitializeExternalBootSupport();
  if ( v75 < 0 )
    KeBugCheckEx(0x32u, v75, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3) )
    goto LABEL_215;
  KeWaitForSingleObject(&stru_140C672E8, Executive, 0, 0, 0LL);
  return v109;
}
