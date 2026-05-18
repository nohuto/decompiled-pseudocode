/*
 * XREFs of sub_18006FE60 @ 0x18006FE60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800146D0 @ 0x1800146D0 (sub_1800146D0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_1800424AC @ 0x1800424AC (sub_1800424AC.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_180045178 @ 0x180045178 (sub_180045178.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_180049AB8 @ 0x180049AB8 (sub_180049AB8.c)
 *     sub_180049AF0 @ 0x180049AF0 (sub_180049AF0.c)
 *     sub_180049BBC @ 0x180049BBC (sub_180049BBC.c)
 *     sub_180049D1C @ 0x180049D1C (sub_180049D1C.c)
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_180068348 @ 0x180068348 (sub_180068348.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_18009BE80 @ 0x18009BE80 (sub_18009BE80.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18006FE60(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28[3]; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v37; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v39[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v40[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 *v41[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v42[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v43[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v44[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v45[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v46[2]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v47[16]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v48[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v49[4]; // [rsp+190h] [rbp+90h] BYREF
  char *v50[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int64 v51; // [rsp+1C8h] [rbp+C8h]
  char *v52[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int64 v53; // [rsp+1E8h] [rbp+E8h]

  v6 = sub_18001875C(v48, (__int64)&qword_1801F5E58);
  sub_180057684(a2, v41, (char **)v6);
  sub_180068348(v41[0], (__int64 *)&v30);
  LOBYTE(v7) = 1;
  sub_180049AF0(v30, (__int64)&qword_1801F5B58, v7);
  sub_180049AB8(v30);
  v8 = *a3;
  v9 = sub_1800129F4(v49, (__int64)&qword_1801F8018);
  sub_180046470(v8, (__int64)&v29, (char **)v9);
  sub_18009BE80(&v33, a1, 0LL);
  v10 = *a3;
  v34 = 0LL;
  if ( *((_QWORD *)&v29 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 1u);
  v34 = v29;
  sub_180045178(v10, (__int64)v28, qword_1801F7FC8, &v34);
  v50[2] = 0LL;
  v51 = 15LL;
  LOBYTE(v50[0]) = 0;
  sub_180012190((__int64 *)v50, "PlanarReflection", 0x10uLL);
  v11 = v28[0];
  sub_1800424AC(v28[0], (__int64 *)v50);
  if ( v51 >= 0x10 )
    sub_180010884(v50[0], v51 + 1);
  sub_1800146D0(v11, v40);
  v12 = *((_QWORD *)&v33 + 1);
  if ( *((_QWORD *)&v33 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 1u);
    v12 = *((_QWORD *)&v33 + 1);
    v11 = v28[0];
  }
  v35 = v33;
  v13 = v40[0];
  if ( v12 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    v11 = v28[0];
  }
  v42[0] = *(_QWORD *)(v13 + 88);
  *(_QWORD *)(v13 + 88) = v35;
  v42[1] = *(_QWORD *)(v13 + 96);
  *(_QWORD *)(v13 + 96) = v12;
  sub_180010910((__int64)v42);
  sub_180010910((__int64)&v35);
  v36 = 0LL;
  if ( *((_QWORD *)&v30 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 1u);
    v11 = v28[0];
  }
  v36 = v30;
  sub_180053418(v40[0], &v36);
  sub_1800436D4(v11);
  *(_QWORD *)(v11 + 448) &= ~2uLL;
  if ( (*(_BYTE *)(a1 + 560) & 1) != 0 )
  {
    v14 = (__int64 *)sub_18006B2C0(*a3);
    v15 = sub_180068348(v41[0], v46);
    v16 = *v15;
    v17 = v15[1];
    *v15 = 0LL;
    v15[1] = 0LL;
    v43[0] = v14[27];
    v14[27] = v16;
    v43[1] = v14[28];
    v14[28] = v17;
    sub_180010910((__int64)v43);
    sub_180010910((__int64)v46);
    sub_180049AB8(v14[27]);
    sub_180049D1C(v14[27], 3);
    sub_180049BBC((_QWORD *)v14[27], 1u, 1LL, 1LL);
    LOBYTE(v18) = 1;
    sub_18009BE80(&v32, a1, v18);
    v19 = *a3;
    v37 = 0LL;
    if ( *((_QWORD *)&v29 + 1) )
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 1u);
    v37 = v29;
    v20 = (__int64 *)sub_180045178(v19, (__int64)v47, qword_1801F7FD0, &v37);
    v21 = *v20;
    v22 = v20[1];
    *v20 = 0LL;
    v20[1] = 0LL;
    v44[0] = v14[25];
    v14[25] = v21;
    v44[1] = v14[26];
    v14[26] = v22;
    sub_180010910((__int64)v44);
    sub_180010910((__int64)v47);
    v23 = v14[25];
    v52[2] = 0LL;
    v53 = 15LL;
    LOBYTE(v52[0]) = 0;
    sub_180012190((__int64 *)v52, "GroundBack", 0xAuLL);
    sub_1800424AC(v23, (__int64 *)v52);
    if ( v53 >= 0x10 )
      sub_180010884(v52[0], v53 + 1);
    sub_1800146D0(v14[25], v39);
    v24 = *((_QWORD *)&v32 + 1);
    if ( *((_QWORD *)&v32 + 1) )
    {
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL), 1u);
      v24 = *((_QWORD *)&v32 + 1);
    }
    v38 = v32;
    v25 = v39[0];
    if ( v24 )
      _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
    v45[0] = *(_QWORD *)(v25 + 88);
    *(_QWORD *)(v25 + 88) = v38;
    v45[1] = *(_QWORD *)(v25 + 96);
    *(_QWORD *)(v25 + 96) = v24;
    sub_180010910((__int64)v45);
    sub_180010910((__int64)&v38);
    v31 = 0LL;
    v26 = v14[28];
    if ( v26 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
      v26 = v14[28];
    }
    *(_QWORD *)&v31 = v14[27];
    *((_QWORD *)&v31 + 1) = v26;
    sub_180053418(v39[0], &v31);
    sub_180010910((__int64)v39);
    sub_180010910((__int64)&v32);
  }
  sub_180010910((__int64)v40);
  sub_180010910((__int64)v28);
  sub_180010910((__int64)&v33);
  sub_180010910((__int64)&v29);
  sub_180010910((__int64)&v30);
  return sub_180010910((__int64)v41);
}
