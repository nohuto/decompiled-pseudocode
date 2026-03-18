/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140B51C3C
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     KiInitializeTimer2 @ 0x14031E51C (KiInitializeTimer2.c)
 *     PopPowerRequestCreateCommon @ 0x14032BD78 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D2CC (PoDestroyReasonContext.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall PopPowerAggregatorInitialize(int a1)
{
  int Common; // ebx
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING v4[3]; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    qword_140C3BBC8 = 0LL;
    PopPowerAggregatorLock = 0LL;
    PopPowerAggregatorUmpoInitialized = 0;
    memset(&PopPowerAggregatorContext, 0, 0x1158uLL);
    DWORD2(xmmword_140C3AA70) = 1;
    qword_140C3BBA0 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140C3AA98) = 0;
    stru_140C3AAC0.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140C3BBA8 = 0LL;
    qword_140C3BB90 = 0LL;
    stru_140C3AAC0.Parameter = 0LL;
    stru_140C3AAC0.List.Flink = 0LL;
    word_140C3AAE2 = 0;
    KiInitializeTimer2((unsigned __int64)&unk_140C3AAE0, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    word_140C3AB68 = 0;
    qword_140C3AB78 = (__int64)&qword_140C3AB70;
    qword_140C3AB70 = (__int64)&qword_140C3AB70;
    byte_140C3AB6A = 6;
    dword_140C3AB6C = 0;
    return 0;
  }
  if ( a1 != 1 )
    return 0;
  v3[1] = 1;
  v3[0] = 0;
  memset(v4, 0, 32);
  RtlInitUnicodeString(v4, L"Sleep Idle State Disabled");
  Common = PoCaptureReasonContext((unsigned __int64)v3, 0, 0LL, 1, 0LL, (__int64 *)&P);
  if ( Common >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, 1, &PopPowerAggregatorIdleDisabledPowerRequest);
    if ( Common < 0 )
    {
      PoDestroyReasonContext(P);
      return (unsigned int)Common;
    }
    return 0;
  }
  return (unsigned int)Common;
}
