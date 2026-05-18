/*
 * XREFs of sub_18009B3C0 @ 0x18009B3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18003C04C @ 0x18003C04C (sub_18003C04C.c)
 *     sub_18003C858 @ 0x18003C858 (sub_18003C858.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 *     sub_180048A8C @ 0x180048A8C (sub_180048A8C.c)
 *     sub_180048AA0 @ 0x180048AA0 (sub_180048AA0.c)
 *     sub_180048ADC @ 0x180048ADC (sub_180048ADC.c)
 *     sub_18004BAFC @ 0x18004BAFC (sub_18004BAFC.c)
 *     sub_18004BB20 @ 0x18004BB20 (sub_18004BB20.c)
 *     sub_18005D880 @ 0x18005D880 (sub_18005D880.c)
 *     sub_180085564 @ 0x180085564 (sub_180085564.c)
 *     sub_180085608 @ 0x180085608 (sub_180085608.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18009B3C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  char result; // al
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h]
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h]
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h]
  int v16; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+5Ch] [rbp-ACh]
  int v18; // [rsp+6Ch] [rbp-9Ch]
  __int128 v19; // [rsp+70h] [rbp-98h]
  int v20; // [rsp+80h] [rbp-88h]
  __int128 v21; // [rsp+84h] [rbp-84h]
  int v22; // [rsp+94h] [rbp-74h]
  __m128 v23[4]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v24[7]; // [rsp+D8h] [rbp-30h] BYREF

  sub_18004BAFC(a2, &v14);
  sub_180048A8C(v14);
  sub_180048AA0(v3);
  sub_180048ADC(v4);
  sub_18004BB20(a2, &v10, v5);
  result = sub_180011DE0(&v10);
  if ( result )
  {
    v7 = sub_18004330C(a2, &v12);
    sub_18003C04C(*v7, (__int64)v23);
    if ( v13 )
      sub_180010530(v13);
    v8 = sub_18004330C(a2, &v12);
    sub_18003C858(*v8, (__int64)v24);
    if ( v13 )
      sub_180010530(v13);
    v16 = 1065353216;
    v17 = 0LL;
    v18 = 1065353216;
    v19 = 0LL;
    v20 = 1065353216;
    v21 = 0LL;
    v22 = 1065353216;
    sub_18005D880(v23, (__m128 *)&v16);
    v9 = v10;
    sub_180085564(v10, qword_1801D6FA8, &v16);
    sub_180085564(v9, qword_1801D6FC8, v24);
    sub_180085608(v9, qword_1801D6FE8);
    sub_180085608(v9, qword_1801D7008);
    result = sub_180085608(v9, qword_1801D7028);
  }
  if ( v11 )
    result = sub_180010530(v11);
  if ( v15 )
    return sub_180010530(v15);
  return result;
}
