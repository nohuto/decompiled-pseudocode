/*
 * XREFs of sub_18009CC54 @ 0x18009CC54
 * Callers:
 *     sub_18006B7CC @ 0x18006B7CC (sub_18006B7CC.c)
 *     sub_18009CC48 @ 0x18009CC48 (sub_18009CC48.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180026A30 @ 0x180026A30 (sub_180026A30.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180060E7C @ 0x180060E7C (sub_180060E7C.c)
 *     sub_1800618A8 @ 0x1800618A8 (sub_1800618A8.c)
 *     sub_180065628 @ 0x180065628 (sub_180065628.c)
 *     sub_18006564C @ 0x18006564C (sub_18006564C.c)
 *     sub_18006566C @ 0x18006566C (sub_18006566C.c)
 *     sub_180067498 @ 0x180067498 (sub_180067498.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_18009CC54(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v30; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v31; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v34[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v35[4]; // [rsp+128h] [rbp+28h] BYREF
  char v36; // [rsp+148h] [rbp+48h] BYREF
  __int64 v37[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v38[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v39; // [rsp+190h] [rbp+90h] BYREF

  v32 = a1;
  v20 = 0LL;
  v3 = a2[1];
  if ( v3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
    v3 = a2[1];
  }
  *(_QWORD *)&v20 = *a2;
  *((_QWORD *)&v20 + 1) = v3;
  sub_180060E7C(a1, (__int64)&v20);
  *(_QWORD *)a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 15LL;
  *(_BYTE *)(a1 + 1768) = 0;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_QWORD *)(a1 + 1808) = 0LL;
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_QWORD *)(a1 + 1824) = 0LL;
  *(_QWORD *)(a1 + 1832) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 1872) = 15LL;
  *(_BYTE *)(a1 + 1848) = 0;
  *(_QWORD *)(a1 + 1880) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1896) = 0LL;
  *(_QWORD *)(a1 + 1904) = 0LL;
  *(_QWORD *)(a1 + 1912) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_QWORD *)(a1 + 1940) = 360LL;
  *(_DWORD *)(a1 + 1948) = 0;
  *(_WORD *)(a1 + 1952) = 257;
  *(_QWORD *)(a1 + 1956) = 0LL;
  *(_DWORD *)(a1 + 1964) = 1;
  *(_DWORD *)(a1 + 1968) = 1065353216;
  *(_DWORD *)(a1 + 1972) = 6;
  *(_DWORD *)(a1 + 1976) = 21;
  v4 = sub_18008E70C(a1);
  v5 = sub_180037388(v4);
  sub_18001875C(v34, (__int64)&qword_1801F5B78);
  v21.m128i_i64[0] = (__int64)v34;
  v21.m128i_i64[1] = (__int64)v35;
  sub_18006C3A8((__int64)v27, &v21);
  sub_18000B4C0((__int64)v34, 32LL, 1LL);
  v6 = sub_180067498((__int64 *)&v28, v27);
  v7 = sub_180056C78(v5, v6);
  v8 = sub_18001D684();
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    sub_180026A30();
  }
  else
  {
    v9 = 0LL;
  }
  v22[0] = v9 + 16;
  v22[1] = v9;
  v21 = 0LL;
  *(_DWORD *)(a1 + 1928) = sub_1800618A8((__int64 *)a1, 0x10000LL, 0LL, v22, v7);
  sub_180010910((__int64)&v21);
  sub_18001875C(v35, (__int64)&qword_1801F5BF8);
  v30.m128i_i64[0] = (__int64)v35;
  v30.m128i_i64[1] = (__int64)&v36;
  sub_18006C3A8((__int64)v26, &v30);
  sub_18000B4C0((__int64)v35, 32LL, 1LL);
  v10 = sub_180067498((__int64 *)&v29, v26);
  v11 = sub_180056C78(v5, v10);
  v12 = sub_18001D684();
  if ( v12 )
  {
    *(_DWORD *)(v12 + 8) = 1;
    *(_DWORD *)(v12 + 12) = 1;
    *(_QWORD *)v12 = &std::_Ref_count_obj2<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    sub_180026A30();
  }
  else
  {
    v13 = 0LL;
  }
  v23[0] = v13 + 16;
  v23[1] = v13;
  v28 = 0LL;
  *(_DWORD *)(a1 + 1932) = sub_1800618A8((__int64 *)a1, 0x10000LL, 0LL, v23, v11);
  sub_180010910((__int64)&v28);
  sub_18001875C(v37, (__int64)&qword_1801F5BF8);
  sub_18001875C(v38, (__int64)&qword_1801F5BD8);
  v31.m128i_i64[0] = (__int64)v37;
  v31.m128i_i64[1] = (__int64)&v39;
  sub_18006C3A8((__int64)v25, &v31);
  sub_18000B4C0((__int64)v37, 32LL, 2LL);
  v14 = sub_180067498(&v33, v25);
  v15 = sub_180056C78(v5, v14);
  v16 = sub_18001D684();
  if ( v16 )
  {
    *(_DWORD *)(v16 + 8) = 1;
    *(_DWORD *)(v16 + 12) = 1;
    *(_QWORD *)v16 = &std::_Ref_count_obj2<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    sub_180026A30();
  }
  else
  {
    v17 = 0LL;
  }
  v24[0] = v17 + 16;
  v24[1] = v17;
  v29 = 0LL;
  *(_DWORD *)(a1 + 1936) = sub_1800618A8((__int64 *)a1, 256LL, 0LL, v24, v15);
  sub_180010910((__int64)&v29);
  sub_18006566C(a1, *(_DWORD *)(a1 + 1928), 1);
  sub_18006566C(a1, *(_DWORD *)(a1 + 1932), 0);
  sub_18006566C(a1, *(_DWORD *)(a1 + 1936), 0);
  sub_180065628(a1, 1024, 1);
  *(_DWORD *)(a1 + 296) = 1065353216;
  *(_DWORD *)(a1 + 300) = 1065353216;
  *(_DWORD *)(a1 + 304) = 1065353216;
  *(_DWORD *)(a1 + 308) = 1065353216;
  sub_18006564C(v18, 1);
  sub_18005470C(v25, (__int64)v25);
  sub_18005470C(v26, (__int64)v26);
  sub_18005470C(v27, (__int64)v27);
  return a1;
}
