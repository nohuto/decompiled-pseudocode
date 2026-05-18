/*
 * XREFs of sub_1800A4738 @ 0x1800A4738
 * Callers:
 *     sub_1800A45C4 @ 0x1800A45C4 (sub_1800A45C4.c)
 * Callees:
 *     sub_1800A4220 @ 0x1800A4220 (sub_1800A4220.c)
 *     sub_1800A4388 @ 0x1800A4388 (sub_1800A4388.c)
 */

__int64 *__fastcall sub_1800A4738(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdi
  __int64 *v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 *result; // rax
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  v2 = (__int64 *)a1[1];
  v3 = *a1 + 16;
  if ( (__int64 *)v3 != v2 )
  {
    while ( (__int64)(((unsigned __int64)v2 - v1) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
    {
      result = (__int64 *)sub_1800A4388((unsigned __int64 *)&v5, v1, (unsigned __int64)v2);
      if ( v6 > v3 )
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
    return sub_1800A4220(v1, v2);
  }
  return result;
}
