/*
 * XREFs of sub_1800A0340 @ 0x1800A0340
 * Callers:
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800A0340(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  result = sub_180057460(a1 + 8);
  if ( result )
  {
    v7 = a1;
    sub_18002A570(a1);
    if ( a2 >= 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3) )
    {
      sub_180010DD0(v9, (__int64)"Error: CpuProfiler::EndTimeSpanMarker() called with out of range parameter");
      v5 = sub_180010DD0(
             v8,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\cpuprofiler\\cpuprofiler.cpp");
      sub_18006ED7C(pExceptionObject, (__int64)v5, v6, (const char *)v9, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56 * a2 + 48) = *sub_180011CA0(&v7);
    return sub_18002A62C(a1);
  }
  return result;
}
