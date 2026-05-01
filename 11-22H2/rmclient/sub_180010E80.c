/*
 * XREFs of sub_180010E80 @ 0x180010E80
 * Callers:
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 * Callees:
 *     sub_1800103F4 @ 0x1800103F4 (sub_1800103F4.c)
 *     sub_180010EF0 @ 0x180010EF0 (sub_180010EF0.c)
 */

__int64 __fastcall sub_180010E80(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = sub_180010EF0(a1, a2, &v9);
  v5 = v3;
  if ( v3 >= 0 )
  {
    *a2 = 4 * v9;
    return 0LL;
  }
  else
  {
    sub_1800103F4(retaddr, 98LL, v4, (unsigned int)v3);
    sub_1800103F4(retaddr, 107LL, v6, v5);
    return v5;
  }
}
