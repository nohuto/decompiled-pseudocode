/*
 * XREFs of sub_1800E3828 @ 0x1800E3828
 * Callers:
 *     sub_1800D7C44 @ 0x1800D7C44 (sub_1800D7C44.c)
 * Callees:
 *     sub_1800291A0 @ 0x1800291A0 (sub_1800291A0.c)
 */

_QWORD *__fastcall sub_1800E3828(_QWORD *a1)
{
  sub_1800291A0((__int64)a1);
  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  return a1;
}
