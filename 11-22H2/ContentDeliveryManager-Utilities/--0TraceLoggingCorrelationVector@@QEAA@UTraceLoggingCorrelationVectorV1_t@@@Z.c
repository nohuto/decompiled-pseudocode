/*
 * XREFs of ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x18008F914
 * Callers:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800946C8 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x18004C7BC (--$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(__int64 a1)
{
  UUID v3; // [rsp+20h] [rbp-38h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-28h] BYREF

  *(_BYTE *)(a1 + 130) = 65;
  Uuid = 0LL;
  UuidCreate(&Uuid);
  v3 = Uuid;
  TraceLoggingCorrelationVector::CreateCvFromGuid<12>(a1, (__int128 *)&v3);
  return a1;
}
