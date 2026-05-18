/*
 * XREFs of sub_180029EA4 @ 0x180029EA4
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800254FC @ 0x1800254FC (sub_1800254FC.c)
 */

_QWORD *__fastcall sub_180029EA4(_QWORD *a1, __int64 a2)
{
  sub_1800254FC(a1, a2);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  return a1;
}
