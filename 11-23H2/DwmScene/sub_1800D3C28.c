/*
 * XREFs of sub_1800D3C28 @ 0x1800D3C28
 * Callers:
 *     sub_1800D3ACC @ 0x1800D3ACC (sub_1800D3ACC.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800D3C28(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = v3;
  v7 = v5;
  sub_18000E72C(&v7);
  return sub_18000E72C(a2);
}
