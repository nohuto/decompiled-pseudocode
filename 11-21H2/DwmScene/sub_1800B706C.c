/*
 * XREFs of sub_1800B706C @ 0x1800B706C
 * Callers:
 *     sub_1800B6DE4 @ 0x1800B6DE4 (sub_1800B6DE4.c)
 * Callees:
 *     sub_1800B687C @ 0x1800B687C (sub_1800B687C.c)
 *     sub_1800B6A04 @ 0x1800B6A04 (sub_1800B6A04.c)
 */

__int64 *__fastcall sub_1800B706C(__int64 **a1)
{
  __int64 *v1; // rsi
  __int64 *v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 *result; // rax
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  v2 = a1[1];
  v3 = (unsigned __int64)(*a1 + 2);
  if ( (__int64 *)v3 != v2 )
  {
    while ( (__int64)(((char *)v2 - (char *)v1) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
    {
      result = (__int64 *)sub_1800B6A04(&v5, v1, v2);
      if ( (unsigned __int64)v6 > v3 )
      {
        v2 = v5;
        if ( (unsigned __int64)v5 <= v3 )
          return result;
      }
      else
      {
        v1 = v6;
      }
    }
    return sub_1800B687C(v1, v2);
  }
  return result;
}
