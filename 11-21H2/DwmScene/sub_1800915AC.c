/*
 * XREFs of sub_1800915AC @ 0x1800915AC
 * Callers:
 *     sub_1800932C0 @ 0x1800932C0 (sub_1800932C0.c)
 * Callees:
 *     sub_180091F90 @ 0x180091F90 (sub_180091F90.c)
 *     memcmp @ 0x1800FEEAF (memcmp.c)
 */

int __fastcall sub_1800915AC(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *v5; // rdi
  int result; // eax

  v5 = (_OWORD *)sub_180091F90(a1, a2, 7LL);
  result = memcmp(v5, a3, 0x40uLL);
  if ( result )
  {
    *v5 = *a3;
    v5[1] = a3[1];
    v5[2] = a3[2];
    v5[3] = a3[3];
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
