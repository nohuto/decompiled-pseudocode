/*
 * XREFs of sub_18004A620 @ 0x18004A620
 * Callers:
 *     sub_18004B580 @ 0x18004B580 (sub_18004B580.c)
 * Callees:
 *     sub_18004A6F4 @ 0x18004A6F4 (sub_18004A6F4.c)
 *     sub_18004A788 @ 0x18004A788 (sub_18004A788.c)
 *     sub_18004A908 @ 0x18004A908 (sub_18004A908.c)
 *     sub_18004CDE4 @ 0x18004CDE4 (sub_18004CDE4.c)
 */

__int64 __fastcall sub_18004A620(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbx

  v6 = a3 - a2;
  v7 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[1] - *a1) >> 3);
  v8 = 0x2E8BA2E8BA2E8BA3LL * (v6 >> 3);
  if ( v8 <= v7 )
  {
    v11 = *a1 + 88 * v8;
    sub_18004A6F4(a2, a3, *a1);
    result = sub_18004A788(v11, a1[1]);
  }
  else
  {
    if ( v8 > 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[2] - *a1) >> 3) )
    {
      sub_18004CDE4(a1, v8);
      v7 = 0LL;
    }
    v9 = a2 + 88 * v7;
    sub_18004A6F4(a2, v9, *a1);
    result = sub_18004A908(v9, a3, a1[1]);
    v11 = result;
  }
  a1[1] = v11;
  return result;
}
