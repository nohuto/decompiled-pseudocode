/*
 * XREFs of sub_18003D07C @ 0x18003D07C
 * Callers:
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_18003C094 @ 0x18003C094 (sub_18003C094.c)
 *     sub_18003D4D0 @ 0x18003D4D0 (sub_18003D4D0.c)
 *     sub_18003D8B4 @ 0x18003D8B4 (sub_18003D8B4.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003D07C(__int64 a1, __int64 *a2)
{
  _QWORD *i; // rcx
  __int64 *v5; // rsi
  __int64 *j; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF

  sub_18003E370();
  for ( i = *(_QWORD **)(a1 + 32); i != *(_QWORD **)(a1 + 40) && !sub_180015678(i, a2); i += 2 )
    ;
  v5 = *(__int64 **)(a1 + 40);
  for ( j = i + 2; j != v5; j += 2 )
    sub_180011020(j - 2, j);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) - 8LL);
  if ( v7 )
    sub_180010530(v7);
  *(_QWORD *)(a1 + 40) -= 16LL;
  v8 = *a2;
  sub_18003E330(*a2);
  sub_180011C50(v8 + 112, &v12);
  result = (__int64)sub_18003C094(*a2, &v10);
  if ( v12 )
  {
    sub_18003D4D0(v12, &v10);
    v14 = 0LL;
    result = sub_18003D8B4(*a2, &v14);
  }
  if ( v10 )
  {
    sub_18003D8B4(v10, &v12);
    v14 = 0LL;
    result = sub_18003D4D0(*a2, &v14);
  }
  if ( v11 )
    result = sub_180010530(v11);
  if ( v13 )
    return sub_180010530(v13);
  return result;
}
