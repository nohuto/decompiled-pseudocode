/*
 * XREFs of sub_1800D2980 @ 0x1800D2980
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180070B70 @ 0x180070B70 (sub_180070B70.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 *     sub_1800D040C @ 0x1800D040C (sub_1800D040C.c)
 *     sub_1800D0508 @ 0x1800D0508 (sub_1800D0508.c)
 *     sub_1800D35E0 @ 0x1800D35E0 (sub_1800D35E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2980(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  void *v7; // rax
  __int64 *v8; // r10
  __int64 *v9; // rax
  char v10; // bl
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 result; // rax
  char v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v21) = 0;
  v7 = sub_180070B94();
  sub_180070B70((__int64)v7, 7, 4);
  if ( *v8 )
  {
    v9 = sub_1800D0508(*v8, &v19, *(_DWORD *)(a1 + 88));
    v10 = 1;
    v11 = *v9;
  }
  else
  {
    v16 = 0LL;
    v9 = (__int64 *)&v15;
    v10 = 2;
    v11 = 0LL;
  }
  v17 = v11;
  v12 = v9[1];
  v18 = v12;
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v16 )
      sub_180010530(v16);
  }
  if ( (v10 & 1) != 0 && v20 )
    sub_180010530(v20);
  v13 = *sub_1800D040C(v11, &v21);
  sub_18000E72C(&v21);
  result = sub_1800D35E0(a1, v13, a3, a4);
  if ( v12 )
    return sub_180010530(v12);
  return result;
}
