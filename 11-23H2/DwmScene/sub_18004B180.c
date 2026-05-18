/*
 * XREFs of sub_18004B180 @ 0x18004B180
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18004BAD8 @ 0x18004BAD8 (sub_18004BAD8.c)
 *     sub_180084A30 @ 0x180084A30 (sub_180084A30.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18004B180(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF

  v4 = sub_18001246C(v18, a2)[1];
  if ( v4 )
    sub_180010530(v4);
  sub_18002A404(*a2 + 24LL);
  v5 = 0LL;
  result = sub_18004BAD8(a1);
  if ( result )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(a1 + 104);
      if ( sub_180011DE0((_QWORD *)(v7 + v8 + 40)) )
      {
        v9 = sub_18001246C(v18, a2);
        sub_180084A30(v10, v9);
      }
      if ( sub_180011DE0((_QWORD *)(v7 + v8 + 24)) )
      {
        v11 = sub_18001246C(&v19, a2);
        sub_180084A30(v12, v11);
      }
      if ( sub_180011DE0((_QWORD *)(v7 + v8 + 56)) )
      {
        v13 = sub_18001246C(&v20, a2);
        sub_180084A30(v14, v13);
      }
      if ( sub_180011DE0((_QWORD *)(v7 + v8 + 72)) )
      {
        v15 = sub_18001246C(&v21, a2);
        sub_180084A30(v16, v15);
      }
      ++v5;
      v7 += 88LL;
      result = sub_18004BAD8(a1);
    }
    while ( v5 < result );
  }
  v17 = a2[1];
  if ( v17 )
    return sub_180010530(v17);
  return result;
}
