/*
 * XREFs of RaUnitTransferIoCounterSetCallback @ 0x1C0060510
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaUnitSendInstanceCounters @ 0x1C005E484 (RaUnitSendInstanceCounters.c)
 */

__int64 __fastcall RaUnitTransferIoCounterSetCallback(int a1, __int64 a2)
{
  int v5; // [rsp+30h] [rbp-138h]
  int v6; // [rsp+38h] [rbp-130h]
  _BYTE v7[272]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(v7, 0, 0x108uLL);
  v6 = 1;
  v5 = 1;
  return RaUnitSendInstanceCounters(
           a1,
           a2,
           (__int64)v7,
           0x108u,
           (void (__fastcall *)(__int64, __int64, _QWORD, char *))&StorpTelemetryGetUnitIoCounters,
           (void (__fastcall *)(_QWORD, struct _UNICODE_STRING *, _QWORD, __int64))SpPerfAddUnitWriteCounterSet,
           v5,
           v6);
}
