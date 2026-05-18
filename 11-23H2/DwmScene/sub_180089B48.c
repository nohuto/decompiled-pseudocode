/*
 * XREFs of sub_180089B48 @ 0x180089B48
 * Callers:
 *     sub_180047954 @ 0x180047954 (sub_180047954.c)
 * Callees:
 *     sub_18008880C @ 0x18008880C (sub_18008880C.c)
 */

_QWORD *__fastcall sub_180089B48(_QWORD *a1)
{
  sub_18008880C(a1, 8, 6);
  *a1 = &Spectre::Engine::IndexBuffer::`vftable';
  return a1;
}
