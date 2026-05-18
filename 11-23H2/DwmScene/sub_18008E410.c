/*
 * XREFs of sub_18008E410 @ 0x18008E410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_180013E78 @ 0x180013E78 (sub_180013E78.c)
 *     sub_180017E18 @ 0x180017E18 (sub_180017E18.c)
 *     sub_18003BFD0 @ 0x18003BFD0 (sub_18003BFD0.c)
 *     sub_18003C1F0 @ 0x18003C1F0 (sub_18003C1F0.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 *     sub_180041890 @ 0x180041890 (sub_180041890.c)
 *     sub_180042130 @ 0x180042130 (sub_180042130.c)
 *     sub_18004A3DC @ 0x18004A3DC (sub_18004A3DC.c)
 *     sub_18005BB08 @ 0x18005BB08 (sub_18005BB08.c)
 *     sub_18005BBB4 @ 0x18005BBB4 (sub_18005BBB4.c)
 *     sub_18005D20C @ 0x18005D20C (sub_18005D20C.c)
 *     sub_18005D2E8 @ 0x18005D2E8 (sub_18005D2E8.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18008E410(__int64 a1)
{
  __int64 result; // rax
  float v3; // xmm6_4
  float v4; // xmm7_4
  char v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  _OWORD *v12; // rax
  __int64 *v13; // r8
  __int64 *v14; // rax
  __int64 v15; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+40h] [rbp-C8h]
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23[3]; // [rsp+70h] [rbp-98h] BYREF
  int v24; // [rsp+88h] [rbp-80h]
  int v25; // [rsp+8Ch] [rbp-7Ch]
  __int64 v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h]
  __int64 v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 v30; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-30h]
  __int128 v34; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v35; // [rsp+F0h] [rbp-18h]
  _OWORD v36[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v37; // [rsp+138h] [rbp+30h] BYREF
  __int128 v38; // [rsp+158h] [rbp+50h]
  __int128 v39; // [rsp+168h] [rbp+60h]
  __int128 v40[4]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v41[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v42[96]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v43; // [rsp+238h] [rbp+130h] BYREF
  _UNKNOWN *retaddr; // [rsp+280h] [rbp+178h] BYREF

  result = (__int64)&retaddr;
  if ( *(_BYTE *)(a1 + 1953) )
  {
    sub_180011C50(a1 + 56, &v28);
    v3 = 3.4028235e38;
    v4 = -3.4028235e38;
    v5 = 0;
    result = sub_18005BB08(a1);
    v6 = *(_QWORD *)result;
    v7 = *(_QWORD *)(result + 8);
    if ( *(_QWORD *)result != v7 )
    {
      do
      {
        sub_180012440(v41, v6);
        v8 = *(_QWORD *)sub_18001265C(v28, &v30);
        v9 = sub_180012440(&v23[1], (__int64)v41);
        sub_1800410C0(v8, &v22, (__int64)v9);
        if ( v31 )
          sub_180010530(v31);
        if ( sub_180041890(v22) )
        {
          sub_180041410(v10, &v20);
          sub_18001246C(&v15, &v20);
          while ( sub_180011DE0(&v15) )
          {
            v11 = v15;
            if ( *(_DWORD *)(a1 + 1960) == 1 || sub_18003BFD0(v15) )
            {
              sub_180013E14(v11, &v18);
              sub_180013E78(v11, &v26);
              if ( sub_180011DE0(&v18) && sub_180011DE0(&v26) )
              {
                v34 = *(_OWORD *)(v18 + 88);
                v35 = *(_QWORD *)(v18 + 104);
                *(_OWORD *)&v23[1] = xmmword_18019BA00;
                v24 = 1065353216;
                v25 = 1065353216;
                v12 = (_OWORD *)sub_18005BBB4(a1, 0, 1);
                v36[0] = *v12;
                v36[1] = v12[1];
                v36[2] = v12[2];
                v36[3] = v12[3];
                sub_18003C72C(v11, v40);
                sub_180017E18((__int64)&v37, v40, v36);
                sub_180042130((unsigned __int64 *)&v34, (__int64)&v23[1], *(double *)&v38, *(double *)&v39);
                sub_18004A3DC((unsigned __int64 *)&v23[1], (__int64)v42);
                v13 = (__int64 *)v42;
                do
                {
                  LODWORD(v17) = *((_DWORD *)v13 + 2);
                  if ( (float)-*(float *)&v17 > v4 )
                    v4 = -*(float *)&v17;
                  if ( v3 > (float)-*(float *)&v17 )
                    v3 = -*(float *)&v17;
                  v13 = (__int64 *)((char *)v13 + 12);
                }
                while ( v13 != &v43 );
                v5 = 1;
              }
              if ( v27 )
                sub_180010530(v27);
              if ( v19 )
                sub_180010530(v19);
            }
            v14 = sub_18003C1F0(v20, &v32, &v15);
            sub_180011020(&v15, v14);
            if ( v33 )
              sub_180010530(v33);
          }
          if ( v16 )
            sub_180010530(v16);
          if ( v21 )
            sub_180010530(v21);
        }
        if ( v23[0] )
          sub_180010530(v23[0]);
        result = sub_180013348((__int64)v41);
        v6 += 32LL;
      }
      while ( v6 != v7 );
      if ( v5 )
      {
        result = (unsigned int)(*(_DWORD *)(a1 + 316) - 1);
        if ( (unsigned int)result <= 1 )
        {
          v3 = fmaxf(0.001, v3);
          v4 = fmaxf(0.001, v4);
        }
        if ( fabs(v4 - v3) > 0.0000099999997 )
        {
          sub_18005D2E8(a1, v3);
          result = sub_18005D20C(a1, v4);
        }
      }
    }
    if ( v29 )
      return sub_180010530(v29);
  }
  return result;
}
