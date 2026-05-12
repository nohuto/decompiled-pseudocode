/*
 * XREFs of RaUnitReadIoCounterSetCallback @ 0x1C005E2B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaUnitSendInstanceCounters @ 0x1C005E484 (RaUnitSendInstanceCounters.c)
 */

__int64 __fastcall RaUnitReadIoCounterSetCallback(int a1, int a2)
{
  _BYTE v5[272]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(v5, 0, 0x108uLL);
  return RaUnitSendInstanceCounters(
           a1,
           a2,
           (unsigned int)v5,
           264,
           (__int64)&StorpTelemetryGetUnitIoCounters,
           (__int64)SpPerfAddUnitWriteCounterSet);
}
