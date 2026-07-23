/*
 * XREFs of Phase1InitializationIoReady @ 0x140B4DC38
 * Callers:
 *     Phase1Initialization @ 0x140821230 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyCallback @ 0x14033C1D0 (ExNotifyCallback.c)
 *     MmEncodeExportSection @ 0x14034BE08 (MmEncodeExportSection.c)
 *     InbvSetProgressBarSubset @ 0x140383960 (InbvSetProgressBarSubset.c)
 *     ExLogTimeZoneInformation @ 0x1403B0D00 (ExLogTimeZoneInformation.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B5C30 (RtlpInitializeNonVolatileFlush.c)
 *     KeBugCheck @ 0x14041EDC0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     FsRtlInitSystem2 @ 0x14053CD80 (FsRtlInitSystem2.c)
 *     VfClearVerifierSettings @ 0x1405CE38C (VfClearVerifierSettings.c)
 *     CarInitLogging @ 0x1405D37D0 (CarInitLogging.c)
 *     CarReportUnusualShutdown @ 0x1405D4B20 (CarReportUnusualShutdown.c)
 *     ExInitLicenseData @ 0x14080F248 (ExInitLicenseData.c)
 *     ExQueryBootEntropyInformation @ 0x140821B40 (ExQueryBootEntropyInformation.c)
 *     ExInitializeNls @ 0x140821B84 (ExInitializeNls.c)
 *     VfNotifyVerifierOfEvent @ 0x140AC2140 (VfNotifyVerifierOfEvent.c)
 *     CmInitSystem2 @ 0x140B39668 (CmInitSystem2.c)
 *     MmInitSystem @ 0x140B443B4 (MmInitSystem.c)
 *     CcInitializeCacheManager @ 0x140B49A88 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 *     SmInitSystem @ 0x140B4D6E0 (SmInitSystem.c)
 *     PsInitSystem @ 0x140B4DE90 (PsInitSystem.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 *     VmInitSystem @ 0x140B4ECF8 (VmInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140B4F454 (BootApplicationPersistentDataProcess.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140B60C6C (SeRmInitPhase1.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 *     SaveNodeDistanceInformation @ 0x140B696F8 (SaveNodeDistanceInformation.c)
 *     KeInitializeClock @ 0x140B6AB28 (KeInitializeClock.c)
 *     MmInitSystemDll @ 0x140B75608 (MmInitSystemDll.c)
 *     InitSafeBoot @ 0x140B90AE8 (InitSafeBoot.c)
 *     PfInitializeTraceLogging @ 0x140B96370 (PfInitializeTraceLogging.c)
 *     ExInitTraceLogging @ 0x140B97E74 (ExInitTraceLogging.c)
 */

__int64 __fastcall Phase1InitializationIoReady(ULONG_PTR a1, char a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int inited; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax

  RtlpInitializeNonVolatileFlush();
  v4 = ExInitializeNls();
  if ( v4 < 0 )
    KeBugCheckEx(0x32u, v4, 7uLL, 0LL, 0LL);
  LOBYTE(v5) = CmStateSeparationEnabled != 0;
  v6 = ExpInitializeStateSeparationPhase1(v5);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1LL, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( InitSafeBootMode )
  {
    LOBYTE(v8) = a2;
    InitSafeBoot(v8);
  }
  PfInitializeTraceLogging();
  SmInitSystem(2);
  VmInitSystem(2LL);
  MmInitSystem(2LL, a1, v9);
  CcInitializeCacheManager(2);
  ObInitSystem(2);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  KeInitSystem(3LL);
  ExInitTraceLogging();
  ExLogTimeZoneInformation();
  ExInitLicenseData();
  if ( !(unsigned __int8)PsInitSystem(2LL, a1) )
    goto LABEL_26;
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BootApplicationPersistentDataProcess(2LL);
  if ( !(unsigned __int8)PsInitSystem(3LL, a1) )
LABEL_26:
    KeBugCheck(0x6Bu);
  MmEncodeExportSection();
  FsRtlInitSystem2();
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyCallback(ExCbPhase1InitComplete, 0LL, 0LL);
  if ( ViVerifierEnabled )
  {
    CarInitLogging();
    VfNotifyVerifierOfEvent(5);
  }
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 && !InitSafeBootMode )
    CarReportUnusualShutdown();
  ExQueryBootEntropyInformation(0LL);
  result = KeInitSystem(4LL);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
