/*
 * XREFs of sub_1406E8FE0 @ 0x1406E8FE0
 * Callers:
 *     sub_1406E8EE8 @ 0x1406E8EE8 (sub_1406E8EE8.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

_BOOL8 sub_1406E8FE0()
{
  _QWORD *v0; // rax
  __int64 v1; // r8

  v0 = sub_140347DB0();
  return v1 == v0[109];
}
