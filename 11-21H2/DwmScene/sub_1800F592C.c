/*
 * XREFs of sub_1800F592C @ 0x1800F592C
 * Callers:
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     sub_1800F424C @ 0x1800F424C (sub_1800F424C.c)
 */

__int64 __fastcall sub_1800F592C(__int64 a1, int a2, char a3, int a4, D3D_FEATURE_LEVEL a5, int a6, char a7)
{
  return sub_1800F424C(
           (ID3D11Device *)a1,
           (IDXGIAdapter **)a1,
           (__int64 *)(a1 + 320),
           (__int64 *)(a1 + 328),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
