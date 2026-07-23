/*
 * XREFs of PopSleepstudySendWnfNotification @ 0x140878E84
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140878B14 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopSleepstudySendWnfNotification(const WNF_STATE_NAME *a1, __int128 *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 Buffer; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v3 = *a2;
  v6 = a3;
  Buffer = v3;
  return ZwUpdateWnfStateData(a1, &Buffer, 0x18u, 0LL, 0LL, 0, 0);
}
