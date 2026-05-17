/*
 * XREFs of RtlpLogHeapSubSegmentInitialize @ 0x180117898
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180041A40 (RtlpSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1801199C8 (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _BYTE v10[6]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v11; // [rsp+26h] [rbp-82h]
  __int64 v12; // [rsp+40h] [rbp-68h]
  __int64 v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+58h] [rbp-50h]
  int v16; // [rsp+60h] [rbp-48h]

  memset_thunk_772440563353939046(v10, 0, 0x44uLL);
  v12 = a1;
  v11 = 4149;
  v16 = a5;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
