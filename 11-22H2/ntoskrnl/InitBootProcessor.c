/*
 * XREFs of InitBootProcessor @ 0x140B52774
 * Callers:
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x14020AAA0 (DbgLoadImageSymbols.c)
 *     PoEnergyEstimationEnabled @ 0x1402C0B20 (PoEnergyEstimationEnabled.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     VslGetNestedPageProtectionFlags @ 0x14033FE30 (VslGetNestedPageProtectionFlags.c)
 *     RtlStringCbPrintfA @ 0x140383768 (RtlStringCbPrintfA.c)
 *     HvlPhase1Initialize @ 0x1403872A4 (HvlPhase1Initialize.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140387354 (VslGetSecureSpeculationControlInformation.c)
 *     RtlStringCbCopyExA @ 0x1403873B4 (RtlStringCbCopyExA.c)
 *     KeIsKernelCetEnabled @ 0x140387454 (KeIsKernelCetEnabled.c)
 *     KvfInitFeatureStates @ 0x14038748C (KvfInitFeatureStates.c)
 *     HalInitializeBios @ 0x14039ED70 (HalInitializeBios.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _strupr @ 0x1403D8300 (_strupr.c)
 *     strstr @ 0x1403D8B70 (strstr.c)
 *     atol @ 0x1403D8C20 (atol.c)
 *     KeBugCheck @ 0x14041E370 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140428770 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     RtlStringCbCatExA @ 0x1404FDE48 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x1404FE1FC (__report_rangecheckfailure.c)
 *     KeRebaselineSystemTime @ 0x14056AF7C (KeRebaselineSystemTime.c)
 *     KeAdjustInterruptTime @ 0x14056C214 (KeAdjustInterruptTime.c)
 *     RtlControlStackTraceDataBase @ 0x1405A9554 (RtlControlStackTraceDataBase.c)
 *     RtlFindMessage @ 0x140755AA0 (RtlFindMessage.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1408100F0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     EtwInitialize @ 0x14081F5AC (EtwInitialize.c)
 *     LdrAccessResource @ 0x140822C20 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140822C40 (LdrFindResource_U.c)
 *     ExPreInitializeNls @ 0x140822C60 (ExPreInitializeNls.c)
 *     RtlNlsInitState @ 0x140863E0C (RtlNlsInitState.c)
 *     ExpInitLicensing @ 0x140864904 (ExpInitLicensing.c)
 *     HalInitSystem @ 0x140A8BDB0 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     MmInitSystem @ 0x140B47AB4 (MmInitSystem.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B52464 (InitializeDynamicPartitioningPolicy.c)
 *     DbgkInitialize @ 0x140B524F0 (DbgkInitialize.c)
 *     InbvDriverInitialize @ 0x140B52524 (InbvDriverInitialize.c)
 *     ExComputeTickCountMultiplier @ 0x140B531AC (ExComputeTickCountMultiplier.c)
 *     WheaSelLogInitialize @ 0x140B5320C (WheaSelLogInitialize.c)
 *     VerifierInitSystem @ 0x140B53244 (VerifierInitSystem.c)
 *     SeInitSystem @ 0x140B53278 (SeInitSystem.c)
 *     PsInitSystem @ 0x140B53504 (PsInitSystem.c)
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 *     CmInitSystem0 @ 0x140B5DFB8 (CmInitSystem0.c)
 *     ExInitSystem @ 0x140B617A4 (ExInitSystem.c)
 *     PsInitializeQuotaSystem @ 0x140B68CC8 (PsInitializeQuotaSystem.c)
 *     WheaInitializeServices @ 0x140B69138 (WheaInitializeServices.c)
 *     BootApplicationPersistentDataInitialize @ 0x140B69300 (BootApplicationPersistentDataInitialize.c)
 *     KeInitializeClock @ 0x140B6BA78 (KeInitializeClock.c)
 *     ExpInitializeBootEnvironment @ 0x140B6DD60 (ExpInitializeBootEnvironment.c)
 *     PpInitSystem @ 0x140B75180 (PpInitSystem.c)
 *     KeNumaInitialize @ 0x140B75B44 (KeNumaInitialize.c)
 *     ExpValidateLoader @ 0x140B765C4 (ExpValidateLoader.c)
 *     ExInitializeHandleTablePackage @ 0x140B76B88 (ExInitializeHandleTablePackage.c)
 *     HeadlessInit @ 0x140B76EC4 (HeadlessInit.c)
 *     ExBurnMemory @ 0x140B919CC (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140B91A6C (ExpRevokeBootLoaderPagePrivileges.c)
 *     RtlInitializeExceptionLog @ 0x140B97B90 (RtlInitializeExceptionLog.c)
 *     MmGetInitFailureLocation @ 0x140B9A3A8 (MmGetInitFailureLocation.c)
 */

__int64 __fastcall InitBootProcessor(ULONG_PTR a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  char *v4; // rdi
  char *v5; // rax
  char *v6; // rax
  ULONG_PTR v7; // rax
  _QWORD *v8; // rdx
  ULONG_PTR v9; // r8
  ULONG_PTR v10; // r9
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  ULONG v19; // esi
  void *Pool2; // rax
  void *v21; // rdi
  unsigned int v22; // r15d
  __int64 *i; // rsi
  char *v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rcx
  NTSTATUS v30; // eax
  size_t v31; // rdx
  const char *v32; // r8
  NTSTRSAFE_PSTR *v33; // r9
  __int64 v34; // rax
  NTSTATUS Message; // eax
  NTSTATUS v36; // eax
  size_t v37; // rdx
  const char *v38; // r8
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  void *v47; // rdi
  __int64 v48; // rcx
  __int64 result; // rax
  unsigned int InitFailureLocation; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG ResourceLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  PMESSAGE_RESOURCE_ENTRY v55; // [rsp+40h] [rbp-C8h] BYREF
  size_t DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  PVOID ResourceBuffer[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v59[3]; // [rsp+80h] [rbp-88h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+98h] [rbp-70h] BYREF
  CHAR SourceString[64]; // [rsp+B8h] [rbp-50h] BYREF
  CHAR pszDest[256]; // [rsp+F8h] [rbp-10h] BYREF

  dword_140D4ADF4 = -1;
  qword_140D49EA8 = (__int64)&PspTimeZoneStateBuffer;
  v55 = 0LL;
  ResourceDataEntry = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  dword_140D49EDC = 259;
  dword_140D49ED8 = 1;
  word_140D49DE8 = -535;
  *(_OWORD *)&ResourceBuffer[1] = 0LL;
  word_140D49E28 = -535;
  ExpValidateLoader();
  *(_DWORD *)(MmWriteableSharedUserData + 708) = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2900LL);
  ExpInitLicensing(PspHostSiloGlobals);
  RtlNlsInitState((__int64)PspHostSiloGlobals);
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  if ( KeIsKernelCetEnabled() )
  {
    if ( (KeKernelCetWrssEnabledScenarios & 4) != 0 && (_BYTE)KdDebuggerNotPresent )
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios & 0xFB;
    if ( (VslGetNestedPageProtectionFlags() & 0x400) != 0 )
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios | 2;
    v2 = __readmsr(0x6A2u);
    if ( (_BYTE)KeKernelCetWrssEnabledScenarios )
      v3 = v2 | 2;
    else
      v3 = v2 & 0xFFFFFFFFFFFFFFFDuLL;
    __writemsr(0x6A2u, v3);
  }
  VslGetSecureSpeculationControlInformation();
  v4 = *(char **)(a1 + 216);
  LODWORD(InitializationPhase) = 0;
  if ( v4 )
  {
    strupr(v4);
    v5 = strstr(v4, "BURNMEMORY");
    if ( v5 )
    {
      v6 = strstr(v5, "=");
      if ( v6 )
      {
        if ( (__int64)atol(v6 + 1) << 8 )
          ExBurnMemory(a1);
      }
    }
    if ( strstr(v4, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v7 = 0LL;
  v8 = *(_QWORD **)(a1 + 32);
  while ( v8 != (_QWORD *)(a1 + 32) )
  {
    v9 = v8[4];
    v10 = v8[5];
    if ( v9 < v7 )
      KeBugCheckEx(0x31u, (ULONG_PTR)v8, v9, v10, v7);
    v8 = (_QWORD *)*v8;
    v7 = v10 + v9;
  }
  v11 = *(_QWORD *)(a1 + 224);
  if ( v11 )
  {
    InitNlsTableBase = *(_QWORD *)(v11 + 16);
    ExPreInitializeNls();
  }
  ExLeapSecondData = *(PVOID *)(*(_QWORD *)(a1 + 240) + 2976LL);
  WheaInitializeServices();
  ((void (__fastcall *)(ULONG_PTR))off_140C01CC0[0])(HalIommuDispatch);
  qword_140D817A8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  qword_140D817B0 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  KvfInitFeatureStates(a1);
  if ( !(unsigned __int8)PoEnergyEstimationEnabled() )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  v12 = ExComputeTickCountMultiplier();
  v13 = MmWriteableSharedUserData;
  ExpTickCountMultiplier = v12;
  ResourceBuffer[0] = 0LL;
  ResourceLength[0] = 0;
  *(_DWORD *)(MmWriteableSharedUserData + 4) = v12;
  *(_DWORD *)(v13 + 572) = 0;
  ResourceInfo.Type = 11LL;
  ResourceInfo.Name = 1LL;
  ResourceInfo.Language = 0LL;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &ResourceInfo, 3u, &ResourceDataEntry) >= 0
    && LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, ResourceBuffer, ResourceLength) >= 0 )
  {
    KiBugCodeMessages = ResourceBuffer[0];
  }
  CmNtGlobalFlag2 &= 7u;
  v14 = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 600) = CmGlobalValidationRunlevel;
  *(_BYTE *)(v14 + 651) = 1;
  v15 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v15;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v15 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
    KeRebaselineSystemTime();
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  NtGlobalFlag2 |= CmNtGlobalFlag2;
  v16 = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 960) = 1;
  *(_BYTE *)(v16 + 964) = 1;
  *(_WORD *)(v16 + 874) = 1;
  if ( !(unsigned __int8)ExInitSystem(0LL) )
    goto LABEL_88;
  WheaSelLogInitialize(a1);
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy(v17);
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !MmInitSystem(0LL, a1, v18) )
  {
    InitFailureLocation = MmGetInitFailureLocation();
    KeBugCheckEx(0x31u, 0LL, 0x64uLL, InitFailureLocation, 0LL);
  }
  qword_140D81758 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwInitialize(0, a1);
  KiHwPolicyDriverImageBase = 0LL;
  HalInitializeBios(0, (_QWORD *)a1);
  InbvDriverInitialize(0, a1, 0);
  if ( KiBugCodeMessages )
  {
    v19 = ResourceLength[0];
    Pool2 = (void *)ExAllocatePool2(64LL, ResourceLength[0], 0x6342694Bu);
    v21 = Pool2;
    if ( !Pool2 )
      KeBugCheck(0x7Du);
    memmove(Pool2, KiBugCodeMessages, v19);
    KiBugCodeMessages = v21;
  }
  if ( *(_DWORD *)(a1 + 12) < 2u )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, *(unsigned int *)(a1 + 12), 2uLL, 0LL, 0LL);
  }
  v22 = 0;
  for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); ++v22 )
  {
    if ( v22 >= 3 )
    {
      v24 = (char *)i[10];
      if ( *(_WORD *)v24 != 92 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *(_BYTE *)(*(_QWORD *)(a1 + 200) + v29) );
        if ( v29 + ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1) + 18 > 0x100 )
          goto LABEL_59;
        v30 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%sSystem32\\Drivers\\%wZ");
        if ( v30 < 0 )
          KeBugCheckEx(0x31u, v30, 3uLL, 0LL, 0LL);
        goto LABEL_58;
      }
      v25 = *((unsigned __int16 *)i + 36) >> 1;
      if ( (unsigned __int64)v25 + 1 <= 0x100 )
      {
        LODWORD(v26) = 0;
        do
        {
          v27 = *v24;
          v24 += 2;
          v28 = (unsigned int)v26;
          v26 = (unsigned int)(v26 + 1);
          pszDest[v28] = v27;
        }
        while ( (unsigned int)v26 < v25 );
        if ( (unsigned int)v26 >= 0x100uLL )
          _report_rangecheckfailure();
        pszDest[v26] = 0;
LABEL_58:
        RtlInitAnsiString((PSTRING)&ResourceBuffer[1], pszDest);
        DbgLoadImageSymbols((__int64)&ResourceBuffer[1], (void *)i[6], 0xFFFFFFFFLL);
      }
    }
LABEL_59:
    i = (__int64 *)*i;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  ExpInitializeBootEnvironment(a1);
  HvlPhase1Initialize(a1);
  if ( **(_DWORD **)(a1 + 240) >= 0xF28u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  v34 = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 692) = 2147418111;
  *(_DWORD *)(v34 + 696) = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &v55);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString((PSTRING)&DestinationString[1], (PCSZ)v55->Text);
    LOWORD(DestinationString[1]) -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(MessageEntry) = BYTE1(CmNtCSDVersion);
    v36 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString[1], MessageEntry);
    if ( v36 < 0 )
      KeBugCheckEx(0x31u, v36, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v55 = 0LL;
      v39 = RtlStringCbCatExA(pszDest, v37, v38, (NTSTRSAFE_PSTR *)&v55, DestinationString, dwFlagsa);
      if ( v39 < 0 )
        KeBugCheckEx(0x31u, v39, 6uLL, 0LL, 0LL);
      v40 = RtlStringCbPrintfA((NTSTRSAFE_PSTR)v55, DestinationString[0], "v.%u", HIWORD(CmNtCSDVersion));
      if ( v40 < 0 )
        KeBugCheckEx(0x31u, v40, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v41 = RtlStringCbCopyExA(pszDest, v31, v32, v33, DestinationString, dwFlags);
    if ( v41 < 0 )
      KeBugCheckEx(0x31u, v41, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - LOWORD(DestinationString[0]);
  }
  RtlInitAnsiString((PSTRING)&DestinationString[1], pszDest);
  v42 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, (PCANSI_STRING)&DestinationString[1], 1u);
  if ( v42 < 0 )
    KeBugCheckEx(0x31u, v42, 9uLL, 0LL, 0LL);
  v43 = RtlStringCbPrintfA(SourceString, 0x40uLL, "%u.%u", 6, 3);
  if ( v43 < 0 )
    KeBugCheckEx(0x31u, v43, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, SourceString) )
LABEL_88:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v44 = ExAllocatePool2(64LL, 0x800000uLL, 0x63617453u);
    v47 = (void *)v44;
    if ( v44 )
    {
      v59[0] = v44;
      v59[1] = 0x800000LL;
      v59[2] = 0x800000LL;
      if ( (int)RtlControlStackTraceDataBase(v46, v45, v59) < 0 )
        ExFreePoolWithTag(v47, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  ExInitializeHandleTablePackage();
  if ( !ObInitSystem(0) )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !(unsigned __int8)PsInitSystem(0LL, a1) || (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  v48 = MmWriteableSharedUserData;
  *(_WORD *)(MmWriteableSharedUserData + 618) = KeProcessorArchitecture;
  result = 0LL;
  *(_QWORD *)(v48 + 620) = 10LL;
  *(_DWORD *)(v48 + 608) = 22621;
  *(_DWORD *)(v48 + 44) = -2040232348;
  *(_DWORD *)(v48 + 932) = 0;
  return result;
}
