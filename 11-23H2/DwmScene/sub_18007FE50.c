/*
 * XREFs of sub_18007FE50 @ 0x18007FE50
 * Callers:
 *     sub_18007FE90 @ 0x18007FE90 (sub_18007FE90.c)
 * Callees:
 *     sub_18007CC14 @ 0x18007CC14 (sub_18007CC14.c)
 */

__int64 __fastcall sub_18007FE50(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  sub_18007CC14((__int64)(a1 + 14), a2);
  return sub_18005FC70(a1);
}
