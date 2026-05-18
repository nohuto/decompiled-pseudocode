/*
 * XREFs of sub_1800EBB74 @ 0x1800EBB74
 * Callers:
 *     sub_1800EBE50 @ 0x1800EBE50 (sub_1800EBE50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18001F5AC @ 0x18001F5AC (sub_18001F5AC.c)
 *     sub_1800EB340 @ 0x1800EB340 (sub_1800EB340.c)
 *     sub_1800EC040 @ 0x1800EC040 (sub_1800EC040.c)
 */

// Hidden C++ exception states: #wind=4
char **__fastcall sub_1800EBB74(char **a1, __int64 **a2)
{
  char *v3; // rsi
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  unsigned __int64 v6; // r15
  char *v7; // r12
  unsigned __int64 v8; // r15
  char *v9; // r14
  char *v10; // rdi
  __int64 *v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // r15
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r12
  __int64 v18; // r15
  __int64 *v19; // rax
  __int64 v20; // r8
  char *v23; // [rsp+38h] [rbp-41h]
  __int64 *v24; // [rsp+40h] [rbp-39h]
  __int64 v25; // [rsp+48h] [rbp-31h]
  __int128 v26; // [rsp+58h] [rbp-21h] BYREF
  __int128 v27; // [rsp+68h] [rbp-11h]
  char *v28[3]; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp+17h]

  v3 = 0LL;
  v4 = a2[1];
  v24 = v4;
  v5 = *a2;
  v6 = 0xAAAAAAAAAAAAAAABuLL * (((char *)v4 - (char *)*a2) >> 4);
  v7 = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFLL )
      sub_180012170();
    v8 = 0x5555555555555560LL * (((char *)v4 - (char *)*a2) >> 4);
    v7 = (char *)sub_180011088(v8);
    sub_1800EB340(0LL, 0LL, v7);
    v9 = v7;
    v10 = v7;
    v3 = &v7[v8];
    v4 = a2[1];
    v24 = v4;
    v5 = *a2;
  }
  else
  {
    v10 = 0LL;
    v9 = 0LL;
  }
  v28[2] = 0LL;
  v29 = 15LL;
  LOBYTE(v28[0]) = 0;
  if ( v5 != v4 )
  {
    do
    {
      v11 = v5;
      if ( (unsigned __int64)v5[3] >= 0x10 )
        v11 = (__int64 *)*v5;
      *(_QWORD *)&v26 = v11;
      DWORD2(v26) = *((_DWORD *)v5 + 8);
      HIDWORD(v26) = sub_1800EC040(*((unsigned int *)v5 + 9), *((unsigned __int8 *)v5 + 40));
      v27 = *((unsigned int *)v5 + 11);
      if ( v10 == v3 )
      {
        v13 = (v10 - v9) >> 5;
        if ( v13 == v12 )
          sub_180012170();
        v25 = v13 + 1;
        v14 = (v3 - v9) >> 5;
        v15 = v14 >> 1;
        if ( v14 <= v12 - (v14 >> 1) )
        {
          v16 = v13 + 1;
          if ( v15 + v14 >= v13 + 1 )
            v16 = v15 + v14;
          if ( v16 > v12 )
            sub_1800120D4();
        }
        else
        {
          v16 = v12;
        }
        v17 = 32 * v16;
        v23 = (char *)sub_180011088(v17);
        v18 = 32 * v13;
        *(_OWORD *)&v23[v18] = v26;
        *(_OWORD *)&v23[v18 + 16] = v27;
        sub_1800EB340(v9, (__int64)v10, v23);
        if ( v9 )
          sub_180010884(v9, 32 * v14);
        v9 = v23;
        v10 = &v23[32 * v25];
        v3 = &v23[v17];
      }
      else
      {
        *(_OWORD *)v10 = v26;
        *((_OWORD *)v10 + 1) = v27;
        v10 += 32;
      }
      v7 = v10;
      v19 = sub_18001DCD4((__int64 *)&v26, v5, byte_180137358);
      sub_18001F5AC((__int64)v28, v19, v20);
      if ( *((_QWORD *)&v27 + 1) >= 0x10uLL )
        sub_180010884((char *)v26, *((_QWORD *)&v27 + 1) + 1LL);
      v5 += 6;
    }
    while ( v5 != v24 );
  }
  *a1 = v9;
  a1[1] = v7;
  a1[2] = v3;
  sub_18001875C((__int64 *)a1 + 3, (__int64)v28);
  if ( v29 >= 0x10 )
    sub_180010884(v28[0], v29 + 1);
  return a1;
}
