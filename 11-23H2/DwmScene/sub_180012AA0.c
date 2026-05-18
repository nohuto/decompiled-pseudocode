/*
 * XREFs of sub_180012AA0 @ 0x180012AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_180011F38 @ 0x180011F38 (sub_180011F38.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_1800188C0 @ 0x1800188C0 (sub_1800188C0.c)
 *     sub_18001BB88 @ 0x18001BB88 (sub_18001BB88.c)
 *     sub_18001BCAC @ 0x18001BCAC (sub_18001BCAC.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180034118 @ 0x180034118 (sub_180034118.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_180041B20 @ 0x180041B20 (sub_180041B20.c)
 *     sub_180041F30 @ 0x180041F30 (sub_180041F30.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180012AA0(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // r12
  char v6; // si
  __int128 *v7; // rax
  char v8; // di
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // r15
  __int64 *v15; // rax
  _QWORD *i; // rdx
  _QWORD *v17; // rax
  __int64 v18; // r10
  _QWORD *v19; // rax
  _QWORD *j; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 v26; // [rsp+28h] [rbp-79h] BYREF
  __int64 v27; // [rsp+38h] [rbp-69h] BYREF
  __int64 v28; // [rsp+40h] [rbp-61h]
  __int64 v29; // [rsp+48h] [rbp-59h] BYREF
  __int64 v30; // [rsp+50h] [rbp-51h]
  __int64 v31; // [rsp+58h] [rbp-49h] BYREF
  __int64 v32; // [rsp+60h] [rbp-41h]
  _QWORD v33[3]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v34[4]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+7h]
  __int64 v37; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+B8h] [rbp+17h]
  _BYTE v39[24]; // [rsp+C0h] [rbp+1Fh] BYREF

  v4 = qword_1801D3390;
  sub_18001265C(*(_QWORD *)(a1 + 16), &v37);
  v5 = v37;
  sub_18002A0C4(v37 + 16, v39);
  sub_180012624(*(_QWORD *)(a1 + 16), &v35);
  v6 = 1;
  if ( a2 )
  {
    v7 = (__int128 *)sub_18001246C(&v27, (_QWORD *)(a2 + 32));
    v8 = 1;
  }
  else
  {
    v26 = 0LL;
    v7 = &v26;
    v8 = 2;
  }
  sub_18001246C(&v29, v7);
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( *((_QWORD *)&v26 + 1) )
      sub_180010530(*((__int64 *)&v26 + 1));
  }
  if ( (v8 & 1) != 0 && v28 )
    sub_180010530(v28);
  if ( sub_180011DF0(&v35, &v29) )
  {
    v26 = 0LL;
    if ( sub_180011DD0(&v29) )
    {
      v9 = *(_QWORD *)(a1 + 184);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 104) = *(_DWORD *)(a1 + 200);
        *(_QWORD *)(a1 + 184) = 0LL;
        v10 = *(_QWORD *)(a1 + 192);
        *(_QWORD *)(a1 + 192) = 0LL;
        if ( v10 )
          sub_180010530(v10);
      }
      sub_180034118(*(_QWORD *)(v4 + 56), &v27);
      sub_180011020(&v26, &v27);
      if ( v28 )
        sub_180010530(v28);
      v11 = v26;
      sub_18002A0C4(v26 + 16, &v31);
      v12 = sub_180012440(v34, (__int64)&qword_1801D3FE8);
      v13 = (__int64 *)sub_1800412EC(v11, &v27, v12);
      sub_180011020(&v29, v13);
      if ( v28 )
        sub_180010530(v28);
      sub_180010F54((__int64)&v31);
      v14 = v29;
    }
    else
    {
      v14 = v29;
      v15 = (__int64 *)sub_18001265C(v29, &v31);
      sub_180011020(&v26, v15);
      if ( v32 )
        sub_180010530(v32);
      v6 = 0;
      v11 = v26;
    }
    if ( sub_180011DF0(&v37, &v26) )
    {
      sub_18002A0C4(v11 + 16, v34);
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v6 )
      {
        sub_180011F38(v11, (__int64)v33);
        for ( i = (_QWORD *)v33[0]; i != (_QWORD *)v33[1]; i += 2 )
        {
          if ( *(float *)(*i + 104LL) > 0.000001 )
          {
            sub_1800124F8((__int64 *)(a1 + 184), i);
            break;
          }
        }
        sub_180013300(v33);
      }
      v17 = sub_18001246C(&v31, &v29);
      sub_18003B9D0(v18, &v27, 131075LL, v17);
      v19 = sub_18001246C(v33, (_QWORD *)(a1 + 16));
      sub_180041B20(v5, v19);
      sub_1800124F8((__int64 *)(a1 + 16), &v27);
      if ( v28 )
        sub_180010530(v28);
      sub_180010F54((__int64)v34);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v6 )
      {
        sub_180011F38(v5, (__int64)v34);
        for ( j = (_QWORD *)v34[0]; j != (_QWORD *)v34[1]; j += 2 )
        {
          if ( *(float *)(*j + 104LL) > 0.000001 )
          {
            sub_1800124F8((__int64 *)(a1 + 184), j);
            break;
          }
        }
        sub_180013300(v34);
      }
      sub_18001246C(v34, &v29);
      v21 = sub_18001246C(v33, (_QWORD *)(a1 + 16));
      sub_180041F30(v5, v21);
    }
    v22 = *(_QWORD *)(a1 + 184);
    if ( v22 )
      *(_DWORD *)(v22 + 104) = 0;
    if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) == 0 )
    {
      if ( v35 )
      {
        v23 = sub_1800188C0(v4);
        if ( v23 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_18001BCAC(v23, a1 + 72);
          else
            sub_18001BB88(v23, a1 + 52);
        }
      }
      if ( v14 )
      {
        v24 = sub_1800188C0(v4);
        if ( v24 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_18001BCAC(v24, a1 + 72);
          else
            sub_18001BB88(v24, a1 + 52);
        }
      }
    }
    if ( *((_QWORD *)&v26 + 1) )
      sub_180010530(*((__int64 *)&v26 + 1));
  }
  if ( v30 )
    sub_180010530(v30);
  if ( v36 )
    sub_180010530(v36);
  sub_180010F54((__int64)v39);
  if ( v38 )
    sub_180010530(v38);
  return 0LL;
}
