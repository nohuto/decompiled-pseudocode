/*
 * XREFs of PopPowerRequestInitialize @ 0x140B64CF8
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlInitializeGenericTableAvl @ 0x14031EC00 (RtlInitializeGenericTableAvl.c)
 *     memset @ 0x140435E00 (memset.c)
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     ObCreateObjectType @ 0x14081F4D0 (ObCreateObjectType.c)
 *     PopInitializeWorkItem @ 0x14082245C (PopInitializeWorkItem.c)
 *     PopInitializeTimer @ 0x140848B88 (PopInitializeTimer.c)
 *     PopPowerRequestStatsInitialize @ 0x140B64EBC (PopPowerRequestStatsInitialize.c)
 */

__int64 PopPowerRequestInitialize()
{
  __int64 result; // rax
  __int64 v1; // r8
  char *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v6[16]; // [rsp+40h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v6, 0, 0x78uLL);
  RtlInitUnicodeString(&DestinationString, L"PowerRequest");
  BYTE2(v6[0]) |= 0x14u;
  v6[8] = PopPowerRequestClose;
  LOWORD(v6[0]) = 120;
  v6[9] = PopPowerRequestDelete;
  HIDWORD(v6[4]) = 512;
  HIDWORD(v6[5]) = 168;
  LODWORD(v6[1]) = 402;
  *(_OWORD *)((char *)&v6[1] + 4) = PopPowerRequestMapping;
  HIDWORD(v6[3]) = 2031616;
  result = ObCreateObjectType(&DestinationString, (__int64)v6, 0LL, (__int64)&PopPowerRequestObjectType);
  if ( (int)result >= 0 )
  {
    qword_140C3F328 = 0LL;
    PopPowerRequestLock = 0LL;
    PopPowerRequestSpinLock = 0LL;
    PopInitializeWorkItem(
      (__int64)&PopPowerRequestUpdateWorkItem,
      (__int64)PopPowerRequestCallbackWorker,
      (__int64)&PopPowerRequestUpdateQueue);
    qword_140C3F388 = v1;
    qword_140C3F348 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = &PopPowerRequestObjectList;
    PopPowerRequestUpdateQueue = v1;
    RtlInitializeGenericTableAvl(
      &PopPowerRequestTable,
      (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestTableCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestStatsDatabaseAllocate,
      (PRTL_AVL_FREE_ROUTINE)PopPowerRequestStatsDatabaseFree,
      0LL);
    v2 = (char *)&unk_140C03599;
    v3 = 6LL;
    do
    {
      *(_WORD *)(v2 - 1) = 0;
      v4 = v2 + 7;
      *(_QWORD *)(v2 + 15) = v2 + 7;
      v2[1] = 6;
      *(_DWORD *)(v2 + 3) = 1;
      v2 += 48;
      *v4 = v4;
      --v3;
    }
    while ( v3 );
    PopExecutionRequiredContext = 0LL;
    PopInitializeTimer(
      (__int64)&PopPowerRequestExecutionRequiredTimeoutTimer,
      (__int64)PopPowerRequestExecutionRequiredTimeoutCallback,
      0LL,
      (__int64)PopPowerRequestExecutionRequiredTimeoutWorker,
      0LL);
    PopInitializeTimer(
      (__int64)&PopPowerRequestDebounceTimer,
      (__int64)PopPowerRequestDebounceTimerCallback,
      0LL,
      (__int64)PopPowerRequestDebounceTimerWorker,
      0LL);
    PopPowerRequestStatsInitialize();
    if ( TtmIsEnabled() )
      PopPowerRequestGlobalOverrideMask = 1;
    return 0LL;
  }
  return result;
}
