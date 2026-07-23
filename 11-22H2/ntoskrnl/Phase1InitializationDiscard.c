/*
 * XREFs of Phase1InitializationDiscard @ 0x140B4FF9C
 * Callers:
 *     Phase1Initialization @ 0x140822CA0 (Phase1Initialization.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x1402B0310 (KeSetPriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     ExLocalTimeToSystemTime @ 0x14033B0A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x14033B0F0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeFieldsToTime @ 0x14033B150 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B4B0 (RtlTimeToTimeFields.c)
 *     RtlStringCbCopyA @ 0x140347B88 (RtlStringCbCopyA.c)
 *     FsRtlSendModernAppTermination @ 0x14035BCD0 (FsRtlSendModernAppTermination.c)
 *     RtlStringCbPrintfA @ 0x140383768 (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x140383830 (InbvDisplayString.c)
 *     DisplayBootBitmap @ 0x1403A9958 (DisplayBootBitmap.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1403A9D30 (KiCommitGroupSubNodeAssignments.c)
 *     MakeGdtReadOnly @ 0x1403ADE1C (MakeGdtReadOnly.c)
 *     KeSetAffinityProcess @ 0x1403AE3D8 (KeSetAffinityProcess.c)
 *     KeSetSystemTime @ 0x1403B571C (KeSetSystemTime.c)
 *     HvlDebuggerSupportInitialize @ 0x1403B5C64 (HvlDebuggerSupportInitialize.c)
 *     PoNotifySystemTimeSet @ 0x1403B5E38 (PoNotifySystemTimeSet.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C2C70 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _strupr @ 0x1403D8300 (_strupr.c)
 *     strtoul @ 0x1403D87D8 (strtoul.c)
 *     strncmp @ 0x1403D8830 (strncmp.c)
 *     _strtoui64 @ 0x1403D8B40 (_strtoui64.c)
 *     strstr @ 0x1403D8B70 (strstr.c)
 *     atol @ 0x1403D8C20 (atol.c)
 *     ZwQueryLicenseValue @ 0x14041D260 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x14041DE00 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x14041E370 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlStringCbPrintfExA @ 0x1404FDEFC (RtlStringCbPrintfExA.c)
 *     RtlFindMessage @ 0x140755AA0 (RtlFindMessage.c)
 *     ExReleaseTimeRefreshLock @ 0x14075FE40 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FE64 (ExAcquireTimeRefreshLock.c)
 *     ExInitializePagedLookasideList @ 0x1407D71C0 (ExInitializePagedLookasideList.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x14084101C (ExpWriteTimeZoneBias.c)
 *     ExInitializeLeapSecondData @ 0x140854420 (ExInitializeLeapSecondData.c)
 *     AlpcpInitSystem @ 0x14085AB18 (AlpcpInitSystem.c)
 *     EtwTimeProfileReset @ 0x140865088 (EtwTimeProfileReset.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140865B90 (ExInitializeUtcTimeZoneBias.c)
 *     ExInitLicenseCallback @ 0x140865F2C (ExInitLicenseCallback.c)
 *     IopInitializeBootLogging @ 0x140944EF8 (IopInitializeBootLogging.c)
 *     HalInitSystem @ 0x140A8BDB0 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x140AED028 (BgGetDisplayContext.c)
 *     BgDisplayBackgroundUpdate @ 0x140AED040 (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140AF06AC (BgDisplayProgressIndicator.c)
 *     ExInitSystemPhase2 @ 0x140B37968 (ExInitSystemPhase2.c)
 *     GetBootSystemTime @ 0x140B37C28 (GetBootSystemTime.c)
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140B3CBEC (ExInitializeTimeRefresh.c)
 *     MmInitSystem @ 0x140B47AB4 (MmInitSystem.c)
 *     KeStartAllProcessors @ 0x140B4AC90 (KeStartAllProcessors.c)
 *     CcInitializeCacheManager @ 0x140B4D188 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x140B4D9FC (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 *     HalReportResourceUsage @ 0x140B4FE70 (HalReportResourceUsage.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     DbgkInitialize @ 0x140B524F0 (DbgkInitialize.c)
 *     InbvDriverInitialize @ 0x140B52524 (InbvDriverInitialize.c)
 *     VerifierInitSystem @ 0x140B53244 (VerifierInitSystem.c)
 *     SeInitSystem @ 0x140B53278 (SeInitSystem.c)
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 *     VmInitSystem @ 0x140B5436C (VmInitSystem.c)
 *     SmInitSystem @ 0x140B54430 (SmInitSystem.c)
 *     PspInitPhase1 @ 0x140B54658 (PspInitPhase1.c)
 *     EmInitSystem @ 0x140B54E68 (EmInitSystem.c)
 *     ExInitSystem @ 0x140B617A4 (ExInitSystem.c)
 *     PfInitializeSuperfetch @ 0x140B65330 (PfInitializeSuperfetch.c)
 *     ExpComputeCyclesPerYield @ 0x140B68390 (ExpComputeCyclesPerYield.c)
 *     FsRtlInitSystem @ 0x140B693F0 (FsRtlInitSystem.c)
 *     KiPerformGroupConfiguration @ 0x140B6A38C (KiPerformGroupConfiguration.c)
 *     KeInitializeClock @ 0x140B6BA78 (KeInitializeClock.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140B6D928 (SeCodeIntegrityInitializePolicy.c)
 *     CreateSystemRootLink @ 0x140B6F884 (CreateSystemRootLink.c)
 *     PsInitializeBootCpuPartitions @ 0x140B72D1C (PsInitializeBootCpuPartitions.c)
 *     InitSkuSessionParameters @ 0x140B73D08 (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x140B75180 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140B76138 (BcdInitializeBcdSyncMutant.c)
 *     MfgInitSystem @ 0x140B76340 (MfgInitSystem.c)
 *     ExInitializeExternalBootSupport @ 0x140B76474 (ExInitializeExternalBootSupport.c)
 *     HalAllProcessorsStarted @ 0x140B76D50 (HalAllProcessorsStarted.c)
 *     CreateMiniNtBootKey @ 0x140B91794 (CreateMiniNtBootKey.c)
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
  NTSTATUS Message; // eax
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
  const CHAR *v44; // rbx
  ULONG v45; // r9d
  NTSTATUS v46; // eax
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
  int v63; // eax
  int v64; // ebx
  __int64 v65; // r9
  char *v66; // rax
  char *v67; // r15
  __int16 v68; // ax
  bool v69; // zf
  int v70; // eax
  int v71; // eax
  char *v73; // rax
  char *v74; // rdi
  __int16 v75; // ax
  int v76; // edx
  char v77; // al
  char *v78; // rax
  const char *v79; // rbx
  unsigned int v80; // eax
  char *v81; // rcx
  __int64 v82; // rdi
  unsigned int v83; // eax
  __int64 v84; // rdi
  __int64 v85; // rax
  char v86; // al
  NTSTATUS v87; // eax
  NTSTATUS v88; // eax
  char *v89; // rax
  __int16 v90; // bx
  char *v91; // rax
  char *v92; // rax
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  const char *v96; // rsi
  __int64 v97; // rax
  int v98; // eax
  int v99; // ecx
  ULONG v100; // r9d
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+20h] [rbp-E0h]
  int Tag; // [rsp+28h] [rbp-D8h]
  char v103; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-B8h] BYREF
  int v105; // [rsp+50h] [rbp-B0h]
  PMESSAGE_RESOURCE_ENTRY v106; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Type; // [rsp+64h] [rbp-9Ch] BYREF
  char *EndPtr; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+70h] [rbp-90h] BYREF
  PMESSAGE_RESOURCE_ENTRY v111; // [rsp+78h] [rbp-88h] BYREF
  __int64 v112; // [rsp+80h] [rbp-80h]
  int Buffer; // [rsp+88h] [rbp-78h] BYREF
  size_t pcbRemaining; // [rsp+90h] [rbp-70h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+98h] [rbp-68h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-60h] BYREF
  STRING v117; // [rsp+A8h] [rbp-58h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v120[8]; // [rsp+E0h] [rbp-20h] BYREF
  char pszDest[24]; // [rsp+160h] [rbp+60h] BYREF

  v1 = 0;
  SystemTime.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v116 = 0LL;
  v106 = 0LL;
  v117 = 0LL;
  v111 = 0LL;
  TimeFields = 0LL;
  LOBYTE(v105) = 0;
  Buffer = 0;
  ResultDataSize = 0;
  Type = 0;
  DestinationString = 0LL;
  memset(v120, 0, 0x74uLL);
  v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 157);
  Pool2 = ExAllocatePool2(64LL, 0x200uLL, 0x74696E49u);
  v5 = (char *)Pool2;
  if ( !Pool2 )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  v103 = 0;
  v112 = Pool2 + 256;
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
        v73 = strstr(v11, "=");
        if ( v73 )
          KeRootProcSpecified = atol(v73 + 1);
      }
      v12 = strstr(v9, " HYPERVISORROOTPROCNUMANODES=");
      if ( v12 )
      {
        v74 = strstr(v12, "=");
        if ( v74 )
        {
LABEL_107:
          while ( (unsigned int)KeRootProcNumaNodesSpecified < 0x40 )
          {
            v75 = atol(++v74);
            v76 = KeRootProcNumaNodesSpecified;
            *((_WORD *)&KeRootProcNumaNodes + (unsigned int)KeRootProcNumaNodesSpecified) = v75;
            v77 = *v74;
            KeRootProcNumaNodesSpecified = v76 + 1;
            if ( v77 != 44 )
            {
              while ( v77 != 32 && v77 )
              {
                v77 = *++v74;
                if ( *v74 == 44 )
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
        v78 = strstr(v13, "=");
        KeRootProcNumaNodeLpsSpecified = 1;
        v79 = v78;
        KeRootProcNumaNodesSpecified = 0;
        KeRootProcSpecified = 0;
        if ( v78 )
        {
          do
          {
LABEL_117:
            ++v79;
            EndPtr = 0LL;
            v80 = strtoul(v79, &EndPtr, 10);
            v81 = EndPtr;
            v82 = v80;
            if ( v79 != EndPtr )
            {
              if ( *EndPtr == 95 )
              {
                v79 = EndPtr + 1;
                v83 = strtoul(EndPtr + 1, &EndPtr, 10);
                v81 = EndPtr;
                v1 = v83;
              }
              if ( v79 != v81 && *v81 == 61 && (unsigned int)v82 < 0x40 )
              {
                v84 = 2 * v82;
                v79 = v81 + 1;
                if ( !qword_140D24988[v84] )
                {
                  v85 = ExAllocatePool2(64LL, 0x80uLL, 0x400u);
                  if ( !v85 )
                    KeBugCheck(0x31u);
                  KeRootProcNumaNodeLps[v84] = 1024LL;
                  qword_140D24988[v84] = v85;
                }
                if ( v1 < 0x10 )
                  *(_QWORD *)(qword_140D24988[v84] + 8LL * v1) = strtoui64(v79, &EndPtr, 16);
              }
            }
            v86 = *v79;
            v1 = 0;
          }
          while ( *v79 == 44 );
          while ( v86 != 32 && v86 )
          {
            v86 = *++v79;
            if ( *v79 == 44 )
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
  word_140C6AE64 = 0;
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
  v17 = byte_140C6AC88;
  byte_140C6AC4C = 0;
  if ( byte_140C6AC88 )
  {
    v18 = byte_140C6AC8A;
    if ( byte_140C6AC8A )
    {
      v19 = BgDisplayProgressIndicator(1);
      v20 = byte_140C6AC89;
      v21 = v19 < 0;
      v17 = byte_140C6AC88;
      if ( !v21 )
        v20 = 1;
      byte_140C6AC89 = v20;
      v18 = byte_140C6AC8A;
    }
    if ( v17 && v18 )
    {
      v22 = BgDisplayBackgroundUpdate(1);
      v23 = byte_140C6AC70;
      if ( v22 >= 0 )
        v23 = 1;
      byte_140C6AC70 = v23;
    }
  }
  qword_140C6AC50 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v106);
  pcbRemaining = 256LL;
  v25 = v5;
  v26 = Message;
  ppszDestEnd = v5;
  if ( CmCSDVersionString.Length )
  {
    v87 = RtlStringCbPrintfExA(v5, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ");
    if ( v87 < 0 )
      KeBugCheckEx(0x32u, v87, 7uLL, 0LL, 0LL);
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
    v88 = RtlStringCbCopyA(v28, v27, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v88 < 0 )
      KeBugCheckEx(0x32u, v88, 7uLL, 3uLL, 0LL);
  }
  else
  {
    Tag = (int)v5;
    LODWORD(MessageEntry) = (unsigned __int16)NtBuildNumber;
    v30 = RtlStringCbPrintfA(v28, v27, (NTSTRSAFE_PCSTR)v106->Text, pszDest, MessageEntry);
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
      v103 = 1;
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
      v89 = strstr(v37, "=");
      if ( v89 )
      {
        v90 = atol(v89 + 1);
        RtlTimeToTimeFields(&SystemTime, &TimeFields);
        TimeFields.Year = v90;
        RtlTimeFieldsToTime(&TimeFields, &SystemTime);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  KeSetSystemTime((__int64)&SystemTime, (__int64)&v116, 4);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PoNotifySystemTimeSet(
    (__int64 *)&SystemTime,
    &v116,
    0,
    (int)&LocalTime,
    *(_DWORD *)(CurrentServerSiloGlobals[157] + 436LL),
    Tag,
    ExpSystemIsInCmosMode);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &KeRegisteredProcessors, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type != 4 )
  {
    KeRegisteredProcessors = 1;
  }
  if ( v10 )
  {
    v39 = strstr(v10, " BOOTPROC=");
    if ( v39 )
    {
      v91 = strstr(v39, "=");
      if ( v91 )
        KeBootprocSpecified = atol(v91 + 1);
    }
    v40 = strstr(v10, " NUMPROC=");
    if ( v40 )
    {
      v92 = strstr(v40, "=");
      if ( v92 )
        KeNumprocSpecified = atol(v92 + 1);
    }
    v41 = strstr(v10, " HYPERVISORNUMPROC=");
    if ( v41 )
    {
      v93 = strstr(v41, "=");
      if ( v93 )
        KeHypervisorNumprocSpecified = atol(v93 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v42 = strstr(v10, " HYPERVISORROOTPROCPERNODE=");
      if ( v42 )
      {
        v94 = strstr(v42, "=");
        if ( v94 )
          KeRootProcPerNodeSpecified = atol(v94 + 1);
      }
      v43 = strstr(v10, " HYPERVISORROOTPROCPERCORE=");
      if ( v43 )
      {
        v95 = strstr(v43, "=");
        if ( v95 )
          *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) = atol(v95 + 1);
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
  v44 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v111) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const CHAR *)v111->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_216:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v117, v44);
  if ( v117.Length >= 2u )
    v117.Length -= 2;
  v45 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v45 = 1073741981;
  v46 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v45, &v106);
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
            &v117);
  else
    v50 = RtlStringCbPrintfA(
            v5,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v106->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v47 + 255) >> 8,
            &v117);
  if ( v50 < 0 )
    KeBugCheckEx(0x32u, v50, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)v5);
  ExFreePoolWithTag(v5, 0);
  if ( !ObInitSystem(1) )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem(BugCheckParameter3) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(-1);
  if ( !IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !(unsigned __int8)KeInitSystem(1LL) )
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
    KeBugCheckEx(0x65u, (unsigned __int8)byte_140C68042, 0LL, 0LL, 0LL);
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
  memset(v120, 0, 0x78uLL);
  *((_QWORD *)&v120[0] + 1) = MmMapLockedRestartPages;
  *(_QWORD *)&v120[1] = MmUnmapLockedRestartPages;
  *((_QWORD *)&v120[1] + 1) = KeRemoveEnclavePage;
  *(_QWORD *)&v120[2] = KdPullRemoteFileEx;
  *((_QWORD *)&v120[2] + 1) = CmSaveKeyToBuffer;
  *(_QWORD *)&v120[3] = KeIsBugCheckActive;
  *((_QWORD *)&v120[3] + 1) = CmOpenKeyForBugCheckRecovery;
  *(_QWORD *)&v120[4] = MiPageToNode;
  *((_QWORD *)&v120[4] + 1) = MmGetNextNode;
  LODWORD(v120[0]) = 120;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_140D81748 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v59 = (int)KsrInitSystem(BugCheckParameter3, v120, DisplayContext);
  qword_140D81770 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v59 + 0x80000000) >= 0 && (_DWORD)v59 != -1073741637 )
    KeBugCheckEx(0x32u, v59, 0LL, 1uLL, 0LL);
  ExKsrInterface = v120[5];
  qword_140C31AA0 = *(__int64 (__fastcall **)(_QWORD))&v120[7];
  *(_OWORD *)&xmmword_140C31A90 = v120[6];
  v60 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v60 < 0 )
    KeBugCheckEx(0x32u, v60, 8uLL, 0LL, 0LL);
  v61 = MfgInitSystem(BugCheckParameter3);
  if ( v61 < 0 )
    KeBugCheckEx(0x32u, v61, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  v62 = SmInitSystem(0LL);
  if ( v62 < 0 )
    KeBugCheckEx(0x32u, v62, 0xBuLL, 0LL, 0LL);
  v63 = VmInitSystem(0LL);
  if ( v63 < 0 )
    KeBugCheckEx(0x32u, v63, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2656LL) & 2) == 0 || strstr(v10, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (HvlpFlags & 2) != 0 )
    ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0, 0LL, 0LL, 0, 0);
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeTimeRefresh();
  ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v64 = *(_DWORD *)(v3 + 436);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLock();
  if ( v103 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &SystemTime);
    KeSetSystemTime((__int64)&SystemTime, (__int64)&v116, 4);
  }
  else if ( v64 != *(_DWORD *)(v3 + 436) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem() )
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
  HalReportResourceUsage(0);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v65);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( !v10 )
    goto LABEL_96;
  v66 = strstr(v10, "SAFEBOOT:");
  v67 = v66;
  if ( !v66 )
  {
LABEL_95:
    v31 = v112;
    goto LABEL_96;
  }
  v96 = v66 + 9;
  if ( !strncmp(v66 + 9, "MINIMAL", 7uLL) )
  {
    InitSafeBootMode = 1;
  }
  else
  {
    if ( strncmp(v96, "NETWORK", 7uLL) )
    {
      if ( !strncmp(v96, "DSREPAIR", 8uLL) )
      {
        InitSafeBootMode = 3;
        v97 = 17LL;
      }
      else
      {
        InitSafeBootMode = 0;
        v97 = 9LL;
      }
      goto LABEL_196;
    }
    InitSafeBootMode = 2;
  }
  v97 = 16LL;
LABEL_196:
  if ( v67[v97] )
  {
    v98 = strncmp(&v67[v97], "(ALTERNATESHELL)", 0x10uLL);
    v99 = (unsigned __int8)v105;
    if ( !v98 )
      v99 = 1;
    v105 = v99;
  }
  if ( !InitSafeBootMode )
    goto LABEL_95;
  v111 = 0LL;
  v100 = 0;
  switch ( InitSafeBootMode )
  {
    case 1:
      v100 = 168;
      break;
    case 2:
      v100 = 169;
      break;
    case 3:
      v100 = 170;
      break;
  }
  if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v100, &v111) >= 0 )
    InbvDisplayString((__int64)v111->Text);
  v31 = v112;
LABEL_96:
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v106) >= 0 )
      InbvDisplayString((__int64)v106->Text);
    IopInitializeBootLogging(BugCheckParameter3, v31);
  }
  ExInitSystemPhase2();
  v68 = ExpComputeCyclesPerYield();
  v69 = InitIsWinPEMode == 0;
  *(_WORD *)(MmWriteableSharedUserData + 726) = v68;
  if ( !v69 )
    CreateMiniNtBootKey();
  v70 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v70 < 0 )
    KeBugCheckEx(0x32u, v70, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v71 = ExInitializeExternalBootSupport();
  if ( v71 < 0 )
    KeBugCheckEx(0x32u, v71, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3) )
    goto LABEL_215;
  KeWaitForSingleObject(&stru_140C673E8, Executive, 0, 0, 0LL);
  return v105;
}
