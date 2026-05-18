/*
 * XREFs of sub_180074090 @ 0x180074090
 * Callers:
 *     sub_18002B228 @ 0x18002B228 (sub_18002B228.c)
 * Callees:
 *     sub_180073ED8 @ 0x180073ED8 (sub_180073ED8.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180074090(_QWORD *a1)
{
  __int64 *v2; // rcx

  *a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = a1 + 1;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  a1[4] = 0LL;
  sub_180073ED8(v2);
  return a1;
}
