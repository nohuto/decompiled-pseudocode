/*
 * XREFs of sub_180098A70 @ 0x180098A70
 * Callers:
 *     sub_18007CC88 @ 0x18007CC88 (sub_18007CC88.c)
 *     sub_18007FB28 @ 0x18007FB28 (sub_18007FB28.c)
 *     sub_180098B50 @ 0x180098B50 (sub_180098B50.c)
 *     unknown_libname_55 @ 0x1800E9C54 (unknown_libname_55.c)
 * Callees:
 *     sub_1800385C8 @ 0x1800385C8 (sub_1800385C8.c)
 */

__int64 __fastcall sub_180098A70(_QWORD *a1)
{
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  sub_1800385C8((__int64)(a1 + 16));
  return sub_18005FC70(a1);
}
