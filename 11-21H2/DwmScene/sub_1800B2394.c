/*
 * XREFs of sub_1800B2394 @ 0x1800B2394
 * Callers:
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall sub_1800B2394(__int64 a1, unsigned __int64 a2)
{
  _BYTE *result; // rax
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  result = (_BYTE *)sub_1800441D8(a1 + 8);
  if ( *result )
  {
    sub_18002C84C(a1);
    if ( a2 >= 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3) )
    {
      sub_1800113D0(v10, "Error: CpuProfiler::EndTimeSpanMarker() called with out of range parameter");
      v7 = sub_1800113D0(
             v9,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\cpupr"
             "ofiler\\cpuprofiler.cpp");
      sub_180079B60(pExceptionObject, (__int64)v7, v8, (const char *)v10, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56 * a2 + 48) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                                                     + 1000000000 * (perf_counter / perf_frequency);
    return (_BYTE *)j_LanguageEnumProc(a1);
  }
  return result;
}
