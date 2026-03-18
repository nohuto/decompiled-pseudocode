/*
 * XREFs of InitBootProcessor @ 0x140AFB264
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     KeIsKernelCetEnabled @ 0x14025E490 (KeIsKernelCetEnabled.c)
 *     VslGetNestedPageProtectionFlags @ 0x140294CC0 (VslGetNestedPageProtectionFlags.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1402D9D60 (DbgLoadImageSymbols.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 *     KeAdjustInterruptTime @ 0x140398D58 (KeAdjustInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x140399340 (KeRebaselineSystemTime.c)
 *     RtlStringCbPrintfA @ 0x1403BF7F4 (RtlStringCbPrintfA.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     RtlStringCbCopyExA @ 0x1403DCC38 (RtlStringCbCopyExA.c)
 *     KvfInitFeatureStates @ 0x1403DE7DC (KvfInitFeatureStates.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403DF020 (VslGetSecureSpeculationControlInformation.c)
 *     HvlPhase1Initialize @ 0x1403DF080 (HvlPhase1Initialize.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _strupr @ 0x1403E03F0 (_strupr.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     atol @ 0x1403E0CE0 (atol.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlStringCbCatExA @ 0x140502688 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x140502A3C (__report_rangecheckfailure.c)
 *     RtlControlStackTraceDataBase @ 0x1405E47C4 (RtlControlStackTraceDataBase.c)
 *     ExPreInitializeNls @ 0x140659DD0 (ExPreInitializeNls.c)
 *     RtlGetHostNtSystemRoot @ 0x1406EB3B0 (RtlGetHostNtSystemRoot.c)
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     EtwInitialize @ 0x14082AB94 (EtwInitialize.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140837640 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x1408550E0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140855100 (LdrFindResource_U.c)
 *     RtlNlsInitState @ 0x14086379C (RtlNlsInitState.c)
 *     ExpInitLicensing @ 0x140863E64 (ExpInitLicensing.c)
 *     HalInitSystem @ 0x140A56BD0 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     PsInitSystem @ 0x140B02300 (PsInitSystem.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 *     MmInitSystem @ 0x140B07AB0 (MmInitSystem.c)
 *     PsInitializeQuotaSystem @ 0x140B0A8A8 (PsInitializeQuotaSystem.c)
 *     ExInitSystem @ 0x140B0AA3C (ExInitSystem.c)
 *     CmInitSystem0 @ 0x140B131D4 (CmInitSystem0.c)
 *     SeInitSystem @ 0x140B1E13C (SeInitSystem.c)
 *     DbgkInitialize @ 0x140B233CC (DbgkInitialize.c)
 *     InbvDriverInitialize @ 0x140B25898 (InbvDriverInitialize.c)
 *     WheaInitializeServices @ 0x140B26BAC (WheaInitializeServices.c)
 *     KeInitializeClock @ 0x140B27884 (KeInitializeClock.c)
 *     VerifierInitSystem @ 0x140B27AFC (VerifierInitSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x140B28160 (BootApplicationPersistentDataInitialize.c)
 *     ExpInitializeBootEnvironment @ 0x140B29088 (ExpInitializeBootEnvironment.c)
 *     ExComputeTickCountMultiplier @ 0x140B2A2C4 (ExComputeTickCountMultiplier.c)
 *     PpInitSystem @ 0x140B2F780 (PpInitSystem.c)
 *     KeNumaInitialize @ 0x140B303B4 (KeNumaInitialize.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B30458 (InitializeDynamicPartitioningPolicy.c)
 *     ExpValidateLoader @ 0x140B30DA4 (ExpValidateLoader.c)
 *     WheaSelLogInitialize @ 0x140B31348 (WheaSelLogInitialize.c)
 *     ExInitializeHandleTablePackage @ 0x140B31380 (ExInitializeHandleTablePackage.c)
 *     HeadlessInit @ 0x140B315E8 (HeadlessInit.c)
 *     ExBurnMemory @ 0x140B4B810 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140B4B89C (ExpRevokeBootLoaderPagePrivileges.c)
 *     MmGetInitFailureLocation @ 0x140B51A7C (MmGetInitFailureLocation.c)
 *     RtlInitializeExceptionLog @ 0x140B53444 (RtlInitializeExceptionLog.c)
 */

__int64 __fastcall InitBootProcessor(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  char *v5; // rdi
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // rax
  _QWORD *v13; // rdx
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  NTSTATUS v17; // eax
  UNICODE_STRING *HostNtSystemRoot; // r13
  NTSTATUS v19; // eax
  int v20; // eax
  unsigned int v21; // r14d
  PVOID PoolWithTag; // rax
  void *v23; // rdi
  unsigned int v24; // r15d
  __int64 *i; // rdi
  char *v26; // r8
  unsigned int v27; // r9d
  __int64 v28; // rdx
  char v29; // al
  NTSTATUS v30; // eax
  size_t v31; // rdx
  const char *v32; // r8
  NTSTRSAFE_PSTR *v33; // r9
  int Message; // eax
  NTSTATUS v35; // eax
  size_t v36; // rdx
  const char *v37; // r8
  NTSTATUS v38; // eax
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  PVOID v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  void *v46; // rdi
  __int64 result; // rax
  unsigned int InitFailureLocation; // eax
  size_t *pcbRemaining; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-D0h] BYREF
  char *DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  size_t cbDest; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v56; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v57[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v58[3]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v59[4]; // [rsp+98h] [rbp-70h] BYREF
  char pszDest[256]; // [rsp+B8h] [rbp-50h] BYREF
  char v61[64]; // [rsp+1B8h] [rbp+B0h] BYREF

  dword_140D33974 = -1;
  qword_140D32A68 = (__int64)&PspTimeZoneStateBuffer;
  DestinationString = 0LL;
  v56 = 0LL;
  cbDest = 0LL;
  dword_140D32A9C = 259;
  dword_140D32A98 = 1;
  DestinationString_8 = 0LL;
  word_140D329A8 = -535;
  *(_OWORD *)&v57[1] = 0LL;
  word_140D329E8 = -535;
  ExpValidateLoader();
  MEMORY[0xFFFFF780000002C4] = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2900LL);
  ExpInitLicensing((__int64)&PspHostSiloGlobals);
  RtlNlsInitState(v2);
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  if ( KeIsKernelCetEnabled() )
  {
    if ( (KeKernelCetWrssEnabledScenarios & 4) != 0 && (_BYTE)KdDebuggerNotPresent )
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios & 0xFB;
    if ( (VslGetNestedPageProtectionFlags() & 0x400) != 0 )
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios | 2;
    v3 = __readmsr(0x6A2u);
    if ( (_BYTE)KeKernelCetWrssEnabledScenarios )
      v4 = v3 | 2;
    else
      v4 = v3 & 0xFFFFFFFFFFFFFFFDuLL;
    __writemsr(0x6A2u, v4);
  }
  VslGetSecureSpeculationControlInformation();
  v5 = *(char **)(a1 + 216);
  LODWORD(InitializationPhase) = 0;
  if ( v5 )
  {
    strupr(v5);
    v6 = strstr(v5, "PERFMEM");
    if ( v6 )
    {
      v7 = strstr(v6, "=");
      if ( v7 )
      {
        v8 = (__int64)atol(v7 + 1) << 8;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2856LL) )
        {
          BBTPagesToReserve = v8;
        }
        else if ( v8 )
        {
          BBTPagesToReserve = ExBurnMemory(a1, v8, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v9 = strstr(v5, "BURNMEMORY");
    if ( v9 )
    {
      v10 = strstr(v9, "=");
      if ( v10 )
      {
        v11 = (__int64)atol(v10 + 1) << 8;
        if ( v11 )
          ExBurnMemory(a1, v11, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v5, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v12 = 0LL;
  v13 = *(_QWORD **)(a1 + 32);
  while ( v13 != (_QWORD *)(a1 + 32) )
  {
    v14 = v13[4];
    v15 = v13[5];
    if ( v14 < v12 )
      KeBugCheckEx(0x31u, (ULONG_PTR)v13, v14, v15, v12);
    v13 = (_QWORD *)*v13;
    v12 = v15 + v14;
  }
  v16 = *(_QWORD *)(a1 + 224);
  if ( v16 )
  {
    InitNlsTableBase = *(_QWORD *)(v16 + 16);
    ExPreInitializeNls();
  }
  ExLeapSecondData = *(PVOID *)(*(_QWORD *)(a1 + 240) + 2976LL);
  WheaInitializeServices();
  ((void (__fastcall *)(ULONG_PTR))off_140C01F00[0])(HalIommuDispatch);
  qword_140D687B8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  qword_140D687C0 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  KvfInitFeatureStates(a1);
  if ( !(unsigned __int8)PoEnergyEstimationEnabled() )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000023C] = 0;
  v17 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *(const char **)(a1 + 200));
  if ( v17 < 0 )
    KeBugCheckEx(0x6Eu, v17, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString_8, pszDest);
  DestinationString_8.Buffer[--DestinationString_8.Length] = 0;
  HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
  HostNtSystemRoot->Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&HostNtSystemRoot->Length = 34078720;
  v19 = RtlAnsiStringToUnicodeString(HostNtSystemRoot, &DestinationString_8, 0);
  if ( v19 < 0 )
    KeBugCheckEx(0x6Eu, v19, 1uLL, 0LL, 0LL);
  v59[0] = 11LL;
  v59[1] = 1LL;
  v59[2] = 0LL;
  v57[0] = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( (int)LdrFindResource_U(0x140000000LL, v59, 3u, (unsigned __int64 *)&v56) >= 0
    && (int)LdrAccessResource(0x140000000uLL, v56, v57, &NumberOfBytes) >= 0 )
  {
    KiBugCodeMessages = (void *)v57[0];
  }
  CmNtGlobalFlag2 &= 7u;
  MEMORY[0xFFFFF78000000258] = CmGlobalValidationRunlevel;
  MEMORY[0xFFFFF7800000028B] = 1;
  v20 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v20;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v20 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
    KeRebaselineSystemTime();
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  NtGlobalFlag2 |= CmNtGlobalFlag2;
  MEMORY[0xFFFFF780000003C0] = 1;
  MEMORY[0xFFFFF780000003C4] = 1;
  MEMORY[0xFFFFF7800000036A] = 1;
  if ( !(unsigned __int8)ExInitSystem(0LL) )
    goto LABEL_94;
  WheaSelLogInitialize(a1);
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(0LL, a1) )
  {
    InitFailureLocation = MmGetInitFailureLocation();
    KeBugCheckEx(0x31u, 0LL, 0x64uLL, InitFailureLocation, 0LL);
  }
  qword_140D68768 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwInitialize(0, a1);
  KiHwPolicyDriverImageBase = 0LL;
  HalInitializeBios(0, (_QWORD *)a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v21 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6342694Bu);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v21);
    KiBugCodeMessages = v23;
  }
  if ( *(_DWORD *)(a1 + 12) < 2u )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, *(unsigned int *)(a1 + 12), 2uLL, 0LL, 0LL);
  }
  v24 = 0;
  for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); ++v24 )
  {
    if ( v24 >= 3 )
    {
      v26 = (char *)i[10];
      if ( *(_WORD *)v26 == 92 )
      {
        v27 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v27 + 1 <= 0x100 )
        {
          v28 = 0LL;
          do
          {
            v29 = *v26;
            v26 += 2;
            pszDest[v28] = v29;
            v28 = (unsigned int)(v28 + 1);
          }
          while ( (unsigned int)v28 < v27 );
          if ( (unsigned int)v28 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v28] = 0;
LABEL_64:
          RtlInitString((PSTRING)&v57[1], pszDest);
          DbgLoadImageSymbols((__int64)&v57[1], i[6], 0xFFFFFFFFLL);
        }
      }
      else if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1)
              + ((unsigned __int64)HostNtSystemRoot->Length >> 1)
              + 17 <= 0x100 )
      {
        v30 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", HostNtSystemRoot->Buffer + 2, i + 11);
        if ( v30 < 0 )
          KeBugCheckEx(0x31u, v30, 3uLL, 0LL, 0LL);
        goto LABEL_64;
      }
    }
    i = (__int64 *)*i;
  }
  if ( BYTE1(KdDebuggerEnabled) )
    DbgBreakPointWithStatus(1u);
  ExpInitializeBootEnvironment(a1);
  HvlPhase1Initialize(a1);
  if ( **(_DWORD **)(a1 + 240) >= 0xED8u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage(0x140000000uLL, 0xBu, 0, 0x40000087u, (unsigned __int16 **)&DestinationString);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString_8, DestinationString + 4);
    DestinationString_8.Length -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(pcbRemaining) = BYTE1(CmNtCSDVersion);
    v35 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString_8, pcbRemaining);
    if ( v35 < 0 )
      KeBugCheckEx(0x31u, v35, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      DestinationString = 0LL;
      v38 = RtlStringCbCatExA(pszDest, v36, v37, &DestinationString, &cbDest, dwFlagsa);
      if ( v38 < 0 )
        KeBugCheckEx(0x31u, v38, 6uLL, 0LL, 0LL);
      v39 = RtlStringCbPrintfA(DestinationString, cbDest, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v39 < 0 )
        KeBugCheckEx(0x31u, v39, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v40 = RtlStringCbCopyExA(pszDest, v31, v32, v33, &cbDest, dwFlags);
    if ( v40 < 0 )
      KeBugCheckEx(0x31u, v40, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - cbDest;
  }
  RtlInitAnsiString(&DestinationString_8, pszDest);
  v41 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString_8, 1u);
  if ( v41 < 0 )
    KeBugCheckEx(0x31u, v41, 9uLL, 0LL, 0LL);
  v42 = RtlStringCbPrintfA(v61, 0x40uLL, "%u.%u", 6, 3);
  if ( v42 < 0 )
    KeBugCheckEx(0x31u, v42, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, v61) )
LABEL_94:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v43 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    v46 = v43;
    if ( v43 )
    {
      v58[0] = v43;
      v58[1] = 0x800000LL;
      v58[2] = 0x800000LL;
      if ( (int)RtlControlStackTraceDataBase(v45, v44, v58) < 0 )
        ExFreePoolWithTag(v46, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  ExInitializeHandleTablePackage();
  if ( !(unsigned __int8)ObInitSystem(0LL) )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !(unsigned __int8)PsInitSystem(0LL, a1) || (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 22000;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
