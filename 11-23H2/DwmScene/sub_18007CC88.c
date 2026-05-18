/*
 * XREFs of sub_18007CC88 @ 0x18007CC88
 * Callers:
 *     sub_18007CCD0 @ 0x18007CCD0 (sub_18007CCD0.c)
 * Callees:
 *     sub_18007CC14 @ 0x18007CC14 (sub_18007CC14.c)
 */

__int64 __fastcall sub_18007CC88(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  sub_18007CC14((__int64)(a1 + 19), a2);
  return sub_180098A70(a1);
}
