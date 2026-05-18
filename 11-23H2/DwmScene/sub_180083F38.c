/*
 * XREFs of sub_180083F38 @ 0x180083F38
 * Callers:
 *     sub_1800855E0 @ 0x1800855E0 (sub_1800855E0.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     memcmp @ 0x18000CA6D (memcmp.c)
 *     sub_18008472C @ 0x18008472C (sub_18008472C.c)
 */

int __fastcall sub_180083F38(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = (unsigned __int64)a4 << 6;
  v7 = (void *)sub_18008472C(a1, a2, 7LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
