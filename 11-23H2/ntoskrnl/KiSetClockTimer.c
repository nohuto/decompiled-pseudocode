/*
 * XREFs of KiSetClockTimer @ 0x1402C2828
 * Callers:
 *     KiSetClockTimerKTimerDeadlines @ 0x1402C1EF4 (KiSetClockTimerKTimerDeadlines.c)
 *     KePrepareNonClockOwnerForIdle @ 0x1402C1F6C (KePrepareNonClockOwnerForIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 *     KiUpdateRunTime @ 0x1402C7770 (KiUpdateRunTime.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14030889C (KiTransitionSchedulingGroupGeneration.c)
 *     KiSetClockIntervalOneShot @ 0x140340DD8 (KiSetClockIntervalOneShot.c)
 *     KeUpdatePendingQosRequest @ 0x14046187C (KeUpdatePendingQosRequest.c)
 *     KiResumeClockTimer @ 0x140570388 (KiResumeClockTimer.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     KiSetNextClockTickDueTime @ 0x1402C87A0 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiShouldRearmClockTimer @ 0x1403410CC (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

LARGE_INTEGER __fastcall KiSetClockTimer(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  __int64 v7; // rsi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v11; // rdx
  __int64 v12; // r14
  char v13; // bl
  __int64 v14; // rcx
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  char v23[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  LONGLONG *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  int *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  int *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  char *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  char *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]

  v17 = a4;
  v7 = 2LL * a4;
  result = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v12 = result.QuadPart - a2;
  if ( a2 > 0 )
    v12 = a2;
  if ( (unsigned int)dword_140C02F60 > 5 )
  {
    PerformanceCounter = result;
    v24 = &v20;
    v20 = a2;
    v25 = 8LL;
    v21 = v12 - result.QuadPart;
    v27 = 8LL;
    v26 = &v21;
    v22 = v12;
    v28 = &v22;
    p_PerformanceCounter = &PerformanceCounter;
    v32 = &v18;
    v34 = &v17;
    v36 = &v15;
    v38 = &v16;
    v29 = 8LL;
    v31 = 8LL;
    v18 = a3;
    v33 = 4LL;
    v35 = 4LL;
    v15 = a5;
    v37 = 1LL;
    v16 = a6;
    v39 = 1LL;
    result.QuadPart = tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F60, &byte_14002D6FF, 0LL, 0LL, 10, v23);
  }
  *(_QWORD *)(a1 + 8 * v7 + 36376) = v12;
  v13 = (*(_BYTE *)(a1 + 8 * v7 + 36388) ^ (2 * a5)) & 2;
  *(_DWORD *)(a1 + 8 * v7 + 36384) = a3;
  *(_BYTE *)(a1 + 8 * v7 + 36388) = *(_BYTE *)(a1 + 8 * v7 + 36388) ^ v13 | 1;
  if ( a6 )
  {
    LOBYTE(v11.LowPart) = 1;
    result.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiShouldRearmClockTimer)(a1, (LARGE_INTEGER)v11.QuadPart);
    if ( LOBYTE(result.LowPart) )
    {
      LOBYTE(v14) = 1;
      *(_DWORD *)(a1 + 36368) = 2;
      return (LARGE_INTEGER)KiSetNextClockTickDueTime(v14);
    }
  }
  return result;
}
