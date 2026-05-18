/*
 * XREFs of ??$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x180021894
 * Callers:
 *     ??$make_unique@VTraceLoggingCorrelationVector@@$$V$0A@@std@@YA?AV?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@0@XZ @ 0x180021910 (--$make_unique@VTraceLoggingCorrelationVector@@$$V$0A@@std@@YA-AV-$unique_ptr@VTraceLoggingCorre.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x180021B9C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z @ 0x180021678 (--$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z.c)
 */

char __fastcall TraceLoggingCorrelationVector::CreateCvFromGuid<12>(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 17LL;
  v5 = v2;
  *(_QWORD *)(a1 + 144) = 0x1300000000LL;
  memset_0((void *)a1, 0, 0x81uLL);
  result = TLV::Base64Encode<129>((unsigned __int8 *)&v5, 0xCuLL, a1);
  *(_WORD *)(a1 + 16) = 46;
  return result;
}
