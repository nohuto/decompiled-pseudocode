/*
 * XREFs of sub_14023AF98 @ 0x14023AF98
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 * Callees:
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

_BOOL8 __fastcall sub_14023AF98(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_140317A10(a1);
  return (v1 & 0x3E0) == 0x200 && (v1 & 1) == 0 && ((v1 & 0x400) == 0 || (unsigned int)sub_1402806A0(v1));
}
