/*
 * XREFs of ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0034CA4
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     <none>
 */

void ndisRegisterPDCounterSets(void)
{
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+20h] [rbp-40h] BYREF
  __int64 v1; // [rsp+50h] [rbp-10h]

  *(_QWORD *)&Info.Version = 512LL;
  Info.Name = (PCUNICODE_STRING)L"<>";
  *(_QWORD *)&Info.CounterCount = 4LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationPDRxFilterCounterSet'::`2'::Descriptors;
  v1 = 0LL;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwCallback;
  Info.CallbackContext = (PVOID)2;
  PcwRegister(&ndisPDTxQueueCounterSet, &Info);
  *(_QWORD *)&Info.Version = 512LL;
  Info.Name = (PCUNICODE_STRING)L":<";
  *(_QWORD *)&Info.CounterCount = 6LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationPDRxQueueCounterSet'::`2'::Descriptors;
  v1 = 0LL;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwCallback;
  Info.CallbackContext = (PVOID)1;
  PcwRegister(&ndisPDRxQueueCounterSet, &Info);
  *(_QWORD *)&Info.Version = 512LL;
  Info.Name = (PCUNICODE_STRING)L"8:";
  *(_QWORD *)&Info.CounterCount = 4LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationPDRxFilterCounterSet'::`2'::Descriptors;
  v1 = 0LL;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwCallback;
  Info.CallbackContext = (PVOID)3;
  PcwRegister(&ndisPDRxFilterCounterSet, &Info);
  *(_QWORD *)&Info.Version = 512LL;
  Info.Name = (PCUNICODE_STRING)L"68";
  *(_QWORD *)&Info.CounterCount = 13LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationPDECUtilizationCounterSet'::`2'::Descriptors;
  v1 = 0LL;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwUtilizationCallback;
  Info.CallbackContext = 0LL;
  PcwRegister(&ndisPDECUtilizationCounterSet, &Info);
  *(_QWORD *)&Info.Version = 512LL;
  Info.Name = (PCUNICODE_STRING)L"02";
  *(_QWORD *)&Info.CounterCount = 2LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationPDQueueDepthCounterSet'::`2'::Descriptors;
  v1 = 0LL;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwQueueDepthCallback;
  Info.CallbackContext = 0LL;
  PcwRegister(&ndisPDQueueDepthCounterSet, &Info);
}
