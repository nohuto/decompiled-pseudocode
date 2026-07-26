/*
 * XREFs of ?ndisPcwInitialize@@YAJXZ @ 0x1C015645C
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C0101134 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

__int64 ndisPcwInitialize(void)
{
  ULONG RecommendedSharedDataAlignment; // eax
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+20h] [rbp-40h] BYREF
  __int64 v3; // [rsp+50h] [rbp-10h]

  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisPcwMutex);
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  Info.Version = 512;
  Info.CounterCount = 25;
  Info.Callback = (PPCW_CALLBACK)ndisCounterSetProviderCallback;
  Info.CallbackContext = (PVOID)1;
  ndisPcwOffsetToPerCpuData = -RecommendedSharedDataAlignment & (RecommendedSharedDataAlignment + 255);
  if ( RecommendedSharedDataAlignment < 0x1C0 )
    RecommendedSharedDataAlignment = 448;
  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  v3 = 0LL;
  ndisPcwPerCpuDataStride = RecommendedSharedDataAlignment;
  Info.Name = (PCUNICODE_STRING)L"Z\\";
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationNetworkInterfaceCounterSet'::`2'::Descriptors;
  PcwRegister(&ndisNetworkInterfaceCounterSet, &Info);
  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  v3 = 0LL;
  Info.Name = (PCUNICODE_STRING)L"JL";
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationNetworkActivityCyclesCounterSet'::`2'::Descriptors;
  Info.Version = 512;
  Info.CounterCount = 13;
  Info.Callback = (PPCW_CALLBACK)ndisCounterSetProviderCallback;
  Info.CallbackContext = (PVOID)2;
  PcwRegister(&ndisNetworkActivityCyclesCounterSet, &Info);
  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  v3 = 0LL;
  Info.Name = (PCUNICODE_STRING)L"PR";
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationPhysicalNICCounterSet'::`2'::Descriptors;
  Info.Callback = (PPCW_CALLBACK)ndisPhysicalNicPcwProviderCallback;
  Info.Version = 512;
  Info.CounterCount = 5;
  Info.CallbackContext = (PVOID)3;
  PcwRegister(&ndisPhysicalNICCounterSet, &Info);
  return 0LL;
}
