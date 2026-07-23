/*
 * XREFs of sub_14068F044 @ 0x14068F044
 * Callers:
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     sub_14020C790 @ 0x14020C790 (sub_14020C790.c)
 *     sub_14068D778 @ 0x14068D778 (sub_14068D778.c)
 *     sub_14068DB00 @ 0x14068DB00 (sub_14068DB00.c)
 *     sub_14068F0EC @ 0x14068F0EC (sub_14068F0EC.c)
 */

__int64 __fastcall sub_14068F044(__int64 *a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx

  v2 = (unsigned int)(a2 + 4096);
  if ( a1[1] >= v2 )
    return 0LL;
  if ( v2 <= a1[2] || (result = sub_14020C790(*a1, (unsigned int)v2), (int)result >= 0) )
  {
    v5 = (_QWORD *)sub_14068F0EC(a1);
    if ( v5 )
    {
      v6 = v5[6];
      v7 = v5[4];
      if ( v6 < v7 )
      {
        if ( v7 > v2 )
          v7 = v2;
        result = sub_14068DB00((ULONG_PTR)a1, v5, v6, v7, 0);
        if ( (int)result < 0 )
          return result;
        a1[1] = v7;
      }
    }
    v8 = a1[1];
    if ( v8 >= v2 )
      return 0LL;
    result = sub_14068D778((__int64)a1, v8, v2, 0);
    if ( (int)result >= 0 )
    {
      a1[1] = v2;
      return 0LL;
    }
  }
  return result;
}
