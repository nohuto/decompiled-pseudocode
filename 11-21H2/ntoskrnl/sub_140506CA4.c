/*
 * XREFs of sub_140506CA4 @ 0x140506CA4
 * Callers:
 *     sub_1403AAA5C @ 0x1403AAA5C (sub_1403AAA5C.c)
 *     sub_140507820 @ 0x140507820 (sub_140507820.c)
 *     sub_140A61564 @ 0x140A61564 (sub_140A61564.c)
 * Callees:
 *     sub_1403AAD84 @ 0x1403AAD84 (sub_1403AAD84.c)
 *     sub_140509D78 @ 0x140509D78 (sub_140509D78.c)
 */

__int64 __fastcall sub_140506CA4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_140509D78(a2, *(unsigned int *)(a1 + 36));
  result = sub_1403AAD84(a2, *(_DWORD *)(a1 + 36));
  _mm_mfence();
  return result;
}
