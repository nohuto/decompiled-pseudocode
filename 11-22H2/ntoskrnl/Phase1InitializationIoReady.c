/*
 * XREFs of Phase1InitializationIoReady @ 0x140B532AC
 * Callers:
 *     Phase1Initialization @ 0x140822CA0 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyCallback @ 0x14033BD40 (ExNotifyCallback.c)
 *     MmEncodeExportSection @ 0x14034B668 (MmEncodeExportSection.c)
 *     InbvSetProgressBarSubset @ 0x1403874BC (InbvSetProgressBarSubset.c)
 *     ExLogTimeZoneInformation @ 0x1403B0490 (ExLogTimeZoneInformation.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B53C0 (RtlpInitializeNonVolatileFlush.c)
 *     KeBugCheck @ 0x14041E370 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     FsRtlInitSystem2 @ 0x14053C8E0 (FsRtlInitSystem2.c)
 *     VfClearVerifierSettings @ 0x1405CDEAC (VfClearVerifierSettings.c)
 *     CarInitLogging @ 0x1405D32F0 (CarInitLogging.c)
 *     CarReportUnusualShutdown @ 0x1405D4640 (CarReportUnusualShutdown.c)
 *     ExInitLicenseData @ 0x1408114F8 (ExInitLicenseData.c)
 *     ExQueryBootEntropyInformation @ 0x140822DA8 (ExQueryBootEntropyInformation.c)
 *     ExInitializeNls @ 0x140822DEC (ExInitializeNls.c)
 *     VfNotifyVerifierOfEvent @ 0x140AC3120 (VfNotifyVerifierOfEvent.c)
 *     BootApplicationPersistentDataProcess @ 0x140B38D8C (BootApplicationPersistentDataProcess.c)
 *     CmInitSystem2 @ 0x140B3CD68 (CmInitSystem2.c)
 *     MmInitSystem @ 0x140B47AB4 (MmInitSystem.c)
 *     CcInitializeCacheManager @ 0x140B4D188 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     PsInitSystem @ 0x140B53504 (PsInitSystem.c)
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 *     VmInitSystem @ 0x140B5436C (VmInitSystem.c)
 *     SmInitSystem @ 0x140B54430 (SmInitSystem.c)
 *     EmInitSystem @ 0x140B54E68 (EmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140B647DC (SeRmInitPhase1.c)
 *     StartFirstUserProcess @ 0x140B69B90 (StartFirstUserProcess.c)
 *     SaveNodeDistanceInformation @ 0x140B6A654 (SaveNodeDistanceInformation.c)
 *     KeInitializeClock @ 0x140B6BA78 (KeInitializeClock.c)
 *     MmInitSystemDll @ 0x140B76620 (MmInitSystemDll.c)
 *     InitSafeBoot @ 0x140B91AE8 (InitSafeBoot.c)
 *     PfInitializeTraceLogging @ 0x140B97370 (PfInitializeTraceLogging.c)
 *     ExInitTraceLogging @ 0x140B98E74 (ExInitTraceLogging.c)
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
  SmInitSystem(2LL);
  VmInitSystem(2LL);
  MmInitSystem(2LL, a1, v9);
  CcInitializeCacheManager(2);
  ObInitSystem(2);
  SaveNodeDistanceInformation();
  if ( !PoInitSystem(3, a1) )
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
  BootApplicationPersistentDataProcess(2);
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
