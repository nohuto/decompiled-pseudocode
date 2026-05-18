/*
 * XREFs of sub_180091668 @ 0x180091668
 * Callers:
 *     sub_180093334 @ 0x180093334 (sub_180093334.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180091F90 @ 0x180091F90 (sub_180091F90.c)
 *     memcmp @ 0x1800FEEAF (memcmp.c)
 */

int __fastcall sub_180091668(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = (unsigned __int64)a4 << 6;
  v7 = (void *)sub_180091F90(a1, a2, 7LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
