/*
 * XREFs of sub_1800FED2C @ 0x1800FED2C
 * Callers:
 *     sub_1800F05C0 @ 0x1800F05C0 (sub_1800F05C0.c)
 * Callees:
 *     sub_18002B268 @ 0x18002B268 (sub_18002B268.c)
 */

_QWORD *__fastcall sub_1800FED2C(_QWORD *a1)
{
  sub_18002B268((__int64)a1);
  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  return a1;
}
