/*
 * XREFs of sub_18008CBE4 @ 0x18008CBE4
 * Callers:
 *     sub_18008CC20 @ 0x18008CC20 (sub_18008CC20.c)
 * Callees:
 *     sub_180088FB8 @ 0x180088FB8 (sub_180088FB8.c)
 */

__int64 __fastcall sub_18008CBE4(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  sub_180088FB8((__int64)(a1 + 14), a2);
  return sub_180067B58((__int64)a1);
}
