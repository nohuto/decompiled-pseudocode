/*
 * XREFs of sub_1800890B4 @ 0x1800890B4
 * Callers:
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 * Callees:
 *     sub_180088FB8 @ 0x180088FB8 (sub_180088FB8.c)
 */

__int64 __fastcall sub_1800890B4(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  sub_180088FB8((__int64)(a1 + 19), a2);
  return sub_1800A94B8(a1);
}
