/*
 * XREFs of sub_14069F47C @ 0x14069F47C
 * Callers:
 *     sub_1402260D0 @ 0x1402260D0 (sub_1402260D0.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 * Callees:
 *     sub_1402264A8 @ 0x1402264A8 (sub_1402264A8.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14069F47C(_DWORD *a1)
{
  __int64 v2; // rdi
  _OWORD *v3; // rbx
  __int64 result; // rax

  memset(a1 + 1, 0, 0x54uLL);
  *a1 = -1;
  v2 = 2LL;
  v3 = a1 + 4;
  do
  {
    result = sub_1402264A8(v3);
    v3 += 2;
    --v2;
  }
  while ( v2 );
  return result;
}
