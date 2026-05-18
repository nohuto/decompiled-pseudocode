/*
 * XREFs of sub_18003AF30 @ 0x18003AF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800254FC @ 0x1800254FC (sub_1800254FC.c)
 */

_QWORD *__fastcall sub_18003AF30(_QWORD *a1, __int64 a2)
{
  sub_1800254FC(a1, a2);
  *a1 = &Spectre::Engine::EngineInvalidArgException::`vftable';
  return a1;
}
