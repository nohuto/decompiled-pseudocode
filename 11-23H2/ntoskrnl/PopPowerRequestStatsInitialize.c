/*
 * XREFs of PopPowerRequestStatsInitialize @ 0x140B64EBC
 * Callers:
 *     PopPowerRequestInitialize @ 0x140B64CF8 (PopPowerRequestInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlInitializeGenericTableAvl @ 0x14031EC00 (RtlInitializeGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407A81D4 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x140848C30 (SleepstudyHelperCreateLibrary.c)
 *     PopSleepstudyRegisterSessionCallback @ 0x140848D04 (PopSleepstudyRegisterSessionCallback.c)
 */

void PopPowerRequestStatsInitialize()
{
  __int64 v0; // rbx
  _QWORD *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rdx
  PCWSTR SourceString[2]; // [rsp+30h] [rbp-68h]
  _QWORD v5[8]; // [rsp+40h] [rbp-58h] BYREF

  qword_140C39208 = 0LL;
  PopPowerRequestStatsLock = 0LL;
  HIDWORD(v5[0]) = 0;
  RtlInitializeGenericTableAvl(
    &PopPowerRequestStatsDatabase,
    (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestStatsDatabaseCompare,
    (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestStatsDatabaseAllocate,
    (PRTL_AVL_FREE_ROUTINE)PopPowerRequestStatsDatabaseFree,
    0LL);
  if ( (int)SleepstudyHelperCreateLibrary(1414616912, &PopPowerRequestSleepstudyHandle) < 0 )
    PopPowerRequestSleepstudyHandle = 0LL;
  memset(v5, 0, sizeof(v5));
  v0 = 0LL;
  SourceString[0] = L"Audio";
  v1 = PopPowerRequestStatsScenarioBlockers;
  SourceString[1] = L"Mobile Hotspot";
  v2 = 2LL;
  do
  {
    RtlInitUnicodeString((PUNICODE_STRING)&v5[1], SourceString[v0]);
    if ( (int)PopPowerRequestStatsCreateSleepstudyBlocker((__int64)v5, v3, (__int64)v1) < 0 )
      PopPowerRequestStatsScenarioBlockers[v0] = 0LL;
    ++v1;
    ++v0;
    --v2;
  }
  while ( v2 );
  qword_140C392B0 = (__int64)PopPowerRequestStatsOnSleepstudySessionChange;
  PopSleepstudyRegisterSessionCallback((__int64)&PopPowerRequestStatsSleepstudyCallback);
}
