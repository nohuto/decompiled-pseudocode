/*
 * XREFs of sub_180033930 @ 0x180033930
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_18003201C @ 0x18003201C (sub_18003201C.c)
 */

__int64 __fastcall sub_180033930(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // r11
  _QWORD *v5; // r8
  __int64 *v6; // r8
  _QWORD *v7; // r9
  __int64 v8; // r10
  _QWORD *v9; // r11
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 result; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-18h]

  v2 = *a2;
  *a2 = 0LL;
  v15 = 0LL;
  v3 = a2[1];
  a2[1] = 0LL;
  v13[0] = v2;
  v16 = &v15;
  v14 = a1 + 168;
  v13[1] = v3;
  v4 = *(_QWORD **)(a1 + 168);
  v5 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    do
    {
      if ( sub_180015678(v5 + 2, v13) )
      {
        --*(_QWORD *)(v8 + 8);
        v10 = *v6;
        *v6 = 0LL;
        v11 = (_QWORD *)v6[1];
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        *v16 = (__int64)v6;
        v16 = v6;
      }
      v5 = v7;
    }
    while ( v7 != v9 );
  }
  result = sub_18003201C((__int64)&v14);
  if ( v3 )
    return sub_180010530(v3);
  return result;
}
