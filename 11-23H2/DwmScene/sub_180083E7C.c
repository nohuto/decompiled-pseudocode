/*
 * XREFs of sub_180083E7C @ 0x180083E7C
 * Callers:
 *     sub_18008559C @ 0x18008559C (sub_18008559C.c)
 * Callees:
 *     memcmp @ 0x18000CA6D (memcmp.c)
 *     sub_18008472C @ 0x18008472C (sub_18008472C.c)
 */

int __fastcall sub_180083E7C(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *v5; // rdi
  int result; // eax

  v5 = (_OWORD *)sub_18008472C(a1, a2, 7LL);
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
