/*
 * XREFs of sub_180080F70 @ 0x180080F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18003C04C @ 0x18003C04C (sub_18003C04C.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 *     sub_18004BAFC @ 0x18004BAFC (sub_18004BAFC.c)
 *     sub_18004BB20 @ 0x18004BB20 (sub_18004BB20.c)
 *     sub_18005D880 @ 0x18005D880 (sub_18005D880.c)
 *     sub_180085564 @ 0x180085564 (sub_180085564.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180080F70(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  char result; // al
  __int64 *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-59h] BYREF
  __int64 v7; // [rsp+28h] [rbp-51h]
  int v8; // [rsp+30h] [rbp-49h] BYREF
  __int128 v9; // [rsp+34h] [rbp-45h]
  int v10; // [rsp+44h] [rbp-35h]
  __int128 v11; // [rsp+48h] [rbp-31h]
  int v12; // [rsp+58h] [rbp-21h]
  __int128 v13; // [rsp+5Ch] [rbp-1Dh]
  int v14; // [rsp+6Ch] [rbp-Dh]
  __int64 v15; // [rsp+70h] [rbp-9h] BYREF
  __int64 v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h] BYREF
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __m128 v19[4]; // [rsp+90h] [rbp+17h] BYREF

  sub_18004BAFC(a2, &v17);
  sub_18004BB20(a2, &v6, v3);
  result = sub_180011DE0(&v6);
  if ( result )
  {
    v5 = sub_18004330C(a2, &v15);
    sub_18003C04C(*v5, (__int64)v19);
    if ( v16 )
      sub_180010530(v16);
    v8 = 1065353216;
    v9 = 0LL;
    v10 = 1065353216;
    v11 = 0LL;
    v12 = 1065353216;
    v13 = 0LL;
    v14 = 1065353216;
    sub_18005D880(v19, (__m128 *)&v8);
    result = sub_180085564(v6);
  }
  if ( v7 )
    result = sub_180010530(v7);
  if ( v18 )
    return sub_180010530(v18);
  return result;
}
