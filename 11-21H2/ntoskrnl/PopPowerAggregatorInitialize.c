/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140B02408
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KiInitializeTimer2 @ 0x1403588EC (KiInitializeTimer2.c)
 *     PopPowerRequestCreateCommon @ 0x14036A698 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14036B090 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14036B98C (PoCaptureReasonContext.c)
 *     memset @ 0x140435E00 (memset.c)
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
    qword_140C21D28 = 0LL;
    PopPowerAggregatorLock = 0LL;
    memset(&PopPowerAggregatorContext, 0, 0x1158uLL);
    DWORD2(xmmword_140C20BD0) = 1;
    qword_140C21D00 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140C20BF8) = 0;
    stru_140C20C20.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140C21D08 = 0LL;
    qword_140C21CF0 = 0LL;
    stru_140C20C20.Parameter = 0LL;
    stru_140C20C20.List.Flink = 0LL;
    word_140C20C42 = 0;
    KiInitializeTimer2((__int64)&unk_140C20C40, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    word_140C20CC8 = 0;
    qword_140C20CD8 = (__int64)&qword_140C20CD0;
    qword_140C20CD0 = (__int64)&qword_140C20CD0;
    byte_140C20CCA = 6;
    dword_140C20CCC = 0;
    return 0;
  }
  if ( a1 != 1 )
    return 0;
  v3[1] = 1;
  v3[0] = 0;
  memset(v4, 0, 32);
  RtlInitUnicodeString(v4, L"Sleep Idle State Disabled");
  Common = PoCaptureReasonContext((unsigned __int64)v3, 0LL, 0LL, 1, 0LL, &P);
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
