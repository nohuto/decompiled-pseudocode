/*
 * XREFs of sub_18005A1F0 @ 0x18005A1F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_1800261AC @ 0x1800261AC (sub_1800261AC.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_1800435A8 @ 0x1800435A8 (sub_1800435A8.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_1800596EC @ 0x1800596EC (sub_1800596EC.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18005A1F0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  void **v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // r15
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h]
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  _DWORD v23[18]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v24; // [rsp+88h] [rbp-78h]
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  _QWORD v27[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v28[56]; // [rsp+C0h] [rbp-40h] BYREF
  char v29; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v30[76]; // [rsp+390h] [rbp+290h] BYREF

  v24 = a2;
  v4 = sub_18001246C(&v21, a2)[1];
  if ( v4 )
    sub_180010530(v4);
  v5 = *a2;
  result = sub_180026650(*a2);
  v8 = result;
  if ( (_DWORD)result )
  {
    LODWORD(v19) = sub_180026650(v7);
    result = sub_1800435C8(a1 + 448, (__int64)&v19);
    if ( result == *(_QWORD *)(a1 + 448) )
    {
      sub_18002A404(v5 + 24);
      sub_1800596EC((__int64)v28);
      v9 = sub_180026618(*a2);
      v10 = sub_1800435A8(v9, &v19);
      sub_180011020(v30, v10);
      if ( v20 )
        sub_180010530(v20);
      memset(v23, 0, sizeof(v23));
      v23[1] = 2;
      memset(&v23[2], 0, 17);
      memset(&v23[7], 0, 32);
      v23[15] = 65793;
      LOBYTE(v23[16]) = 1;
      v23[17] = 3;
      sub_1800883E0(v30[0], v23, 0LL);
      v11 = sub_180026618(*a2);
      sub_1800161AC(v11, &v21);
      v23[1] = 0;
      v23[2] = 0;
      v23[3] = 0;
      v23[4] = 0;
      v23[5] = 1;
      v23[6] = 7;
      *(_QWORD *)&v23[11] = 0x7F7FFFFF00000000LL;
      v23[0] = 2;
      *(_OWORD *)&v23[7] = 0LL;
      v12 = v21;
      v13 = (void **)sub_180010DD0(v27, (__int64)"Camera Default Sampler");
      sub_180029824(v12, v13);
      sub_180054950(v21, v23, 0LL);
      v14 = (__int64 *)&v29;
      v15 = 16LL;
      do
      {
        sub_1800124F8(v14, &v21);
        v14 += 2;
        --v15;
      }
      while ( v15 );
      v16 = sub_1800261AC(*a2, &v25, (__int64)v28, a1 + 24);
      LODWORD(v19) = v8;
      v17 = sub_180054270((__int64 *)(a1 + 448), (__int64)v27, (unsigned int *)&v19);
      sub_180011020((_QWORD *)(*(_QWORD *)v17 + 40LL), v16);
      if ( v26 )
        sub_180010530(v26);
      if ( v22 )
        sub_180010530(v22);
      result = sub_180059AA0(v28);
    }
  }
  v18 = a2[1];
  if ( v18 )
    return sub_180010530(v18);
  return result;
}
