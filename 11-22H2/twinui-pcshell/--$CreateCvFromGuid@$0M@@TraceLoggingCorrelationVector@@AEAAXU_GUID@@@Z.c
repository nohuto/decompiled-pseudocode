/*
 * XREFs of ??$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x1806809B8
 * Callers:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x1806B05D4 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 * Callees:
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z @ 0x1800BBA78 (--$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

char __fastcall TraceLoggingCorrelationVector::CreateCvFromGuid<12>(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_BYTE *)(a1 + 129) = 17;
  v5 = v2;
  *(_QWORD *)(a1 + 136) = 0x1300000000LL;
  memset_0((void *)a1, 0, 0x81uLL);
  result = TLV::Base64Encode<129>((unsigned __int8 *)&v5, 0xCuLL, a1);
  *(_WORD *)(a1 + 16) = 46;
  return result;
}
