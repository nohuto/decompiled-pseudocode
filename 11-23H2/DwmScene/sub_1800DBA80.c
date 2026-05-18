/*
 * XREFs of sub_1800DBA80 @ 0x1800DBA80
 * Callers:
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     sub_1800DB0F0 @ 0x1800DB0F0 (sub_1800DB0F0.c)
 */

__int64 __fastcall sub_1800DBA80(
        __int64 *a1,
        int a2,
        char a3,
        int a4,
        D3D_FEATURE_LEVEL a5,
        D3D_FEATURE_LEVEL a6,
        char a7)
{
  return sub_1800DB0F0((__int64)a1, a1, a1 + 40, a1 + 41, a2, a3, a4, a5, a6, a7);
}
