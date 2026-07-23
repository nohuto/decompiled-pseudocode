/*
 * XREFs of HalpRtcStop @ 0x140520160
 * Callers:
 *     HalpRtcAcknowledgeInterrupt @ 0x14051FF10 (HalpRtcAcknowledgeInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpRtcStop()
{
  char v1; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  ((void (__fastcall *)(_QWORD, __int64, char *))HalpTimerRtcApi)(0LL, 11LL, &v1);
  v1 &= ~0x40u;
  return ((__int64 (__fastcall *)(_QWORD, __int64, char *))qword_140D0E078)(0LL, 11LL, &v1);
}
