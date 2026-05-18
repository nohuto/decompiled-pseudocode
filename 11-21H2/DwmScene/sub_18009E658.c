/*
 * XREFs of sub_18009E658 @ 0x18009E658
 * Callers:
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 *__fastcall sub_18009E658(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v5; // rcx
  size_t v6; // r8
  __int64 *result; // rax
  size_t v8; // r8

  v5 = (__int64 *)(a1 + 1768);
  if ( v5 != a2 )
  {
    v6 = a2[2];
    if ( (unsigned __int64)a2[3] >= 0x10 )
      a2 = (__int64 *)*a2;
    result = sub_180012190(v5, a2, v6);
  }
  if ( (_QWORD *)(a1 + 1848) != a3 )
  {
    v8 = a3[2];
    if ( a3[3] >= 0x10uLL )
      a3 = (_QWORD *)*a3;
    return sub_180012190((__int64 *)(a1 + 1848), a3, v8);
  }
  return result;
}
