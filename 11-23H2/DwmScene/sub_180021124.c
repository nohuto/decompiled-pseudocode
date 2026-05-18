/*
 * XREFs of sub_180021124 @ 0x180021124
 * Callers:
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180021A28 @ 0x180021A28 (sub_180021A28.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180021124(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::TelemetryTraceLoggerWin>::`vftable';
    sub_180021A28(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
