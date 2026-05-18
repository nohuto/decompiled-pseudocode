/*
 * XREFs of sub_180060C80 @ 0x180060C80
 * Callers:
 *     sub_180060CAC @ 0x180060CAC (sub_180060CAC.c)
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 *     sub_180080CB0 @ 0x180080CB0 (sub_180080CB0.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 */

__int64 __fastcall sub_180060C80(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r9

  sub_18001246C(a2, (_QWORD *)(a1 + 16 * (a3 + 16LL)));
  return v3;
}
