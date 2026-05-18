/*
 * XREFs of sub_180015190 @ 0x180015190
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180034118 @ 0x180034118 (sub_180034118.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_180041B20 @ 0x180041B20 (sub_180041B20.c)
 *     sub_180041F30 @ 0x180041F30 (sub_180041F30.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180015190(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rdi
  __int64 v5; // r14
  __int128 *v6; // rax
  char v7; // bl
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r10
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-59h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h]
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h]
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-21h]
  __int64 v24; // [rsp+60h] [rbp-19h] BYREF
  __int64 v25; // [rsp+68h] [rbp-11h]
  _QWORD v26[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v27; // [rsp+80h] [rbp+7h] BYREF
  __int64 v28; // [rsp+88h] [rbp+Fh]
  _QWORD v29[4]; // [rsp+90h] [rbp+17h] BYREF
  _BYTE v30[16]; // [rsp+B0h] [rbp+37h] BYREF

  v3 = qword_1801D3390;
  v4 = (__int64 *)(a1 + 32);
  sub_18001265C(*(_QWORD *)(a1 + 32), &v24);
  v5 = v24;
  sub_18002A0C4(v24 + 16, v30);
  sub_180012624(*v4, &v27);
  if ( a2 )
  {
    v6 = (__int128 *)sub_18001246C(&v18, (_QWORD *)(a2 + 32));
    v7 = 1;
  }
  else
  {
    v17 = 0LL;
    v6 = &v17;
    v7 = 2;
  }
  sub_18001246C(&v20, v6);
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( *((_QWORD *)&v17 + 1) )
      sub_180010530(*((__int64 *)&v17 + 1));
  }
  if ( (v7 & 1) != 0 && v19 )
    sub_180010530(v19);
  if ( sub_180011DF0(&v27, &v20) )
  {
    v17 = 0LL;
    if ( sub_180011DD0(&v20) )
    {
      sub_180034118(*(_QWORD *)(v3 + 56), &v18);
      sub_180011020(&v17, &v18);
      if ( v19 )
        sub_180010530(v19);
      v8 = v17;
      sub_18002A0C4(v17 + 16, &v22);
      v9 = sub_180012440(v29, (__int64)&unk_1801D3F68);
      v10 = (__int64 *)sub_1800412EC(v8, &v18, v9);
      sub_180011020(&v20, v10);
      if ( v19 )
        sub_180010530(v19);
      sub_180010F54((__int64)&v22);
    }
    else
    {
      v11 = (__int64 *)sub_18001265C(v20, &v22);
      sub_180011020(&v17, v11);
      if ( v23 )
        sub_180010530(v23);
      v8 = v17;
    }
    if ( sub_180011DF0(&v24, &v17) )
    {
      sub_18002A0C4(v8 + 16, v29);
      v12 = sub_18001246C(&v22, &v20);
      sub_18003B9D0(v13, &v18, 131075LL, v12);
      v14 = sub_18001246C(v26, v4);
      sub_180041B20(v5, v14);
      sub_1800124F8(v4, &v18);
      if ( v19 )
        sub_180010530(v19);
      sub_180010F54((__int64)v29);
    }
    else
    {
      sub_18001246C(v29, &v20);
      v15 = sub_18001246C(v26, v4);
      sub_180041F30(v5, v15);
    }
    if ( *((_QWORD *)&v17 + 1) )
      sub_180010530(*((__int64 *)&v17 + 1));
  }
  if ( v21 )
    sub_180010530(v21);
  if ( v28 )
    sub_180010530(v28);
  sub_180010F54((__int64)v30);
  if ( v25 )
    sub_180010530(v25);
  return 0LL;
}
