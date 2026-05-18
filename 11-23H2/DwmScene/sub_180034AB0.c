/*
 * XREFs of sub_180034AB0 @ 0x180034AB0
 * Callers:
 *     sub_180035320 @ 0x180035320 (sub_180035320.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 *     sub_18001DD84 @ 0x18001DD84 (sub_18001DD84.c)
 *     sub_18002E8A4 @ 0x18002E8A4 (sub_18002E8A4.c)
 *     sub_180030104 @ 0x180030104 (sub_180030104.c)
 *     sub_180030368 @ 0x180030368 (sub_180030368.c)
 *     sub_180030434 @ 0x180030434 (sub_180030434.c)
 *     sub_1800306C8 @ 0x1800306C8 (sub_1800306C8.c)
 *     sub_180030794 @ 0x180030794 (sub_180030794.c)
 *     sub_180030860 @ 0x180030860 (sub_180030860.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_180050870 @ 0x180050870 (sub_180050870.c)
 *     sub_18007C1AC @ 0x18007C1AC (sub_18007C1AC.c)
 *     sub_18007C1CC @ 0x18007C1CC (sub_18007C1CC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180034AB0(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *i; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *j; // rax
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 result; // rax
  __int128 v32; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+90h] [rbp-70h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E0h] [rbp-20h] BYREF
  void *v45[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v46[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int64 v48; // [rsp+110h] [rbp+10h] BYREF
  __int64 v49; // [rsp+118h] [rbp+18h]
  _QWORD v50[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v51[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+160h] [rbp+60h] BYREF

  v4 = sub_180034870((__int64)a1);
  v5 = v4;
  if ( *(_QWORD *)(v6 + 624) - *(_QWORD *)(v6 + 616) >= 4uLL )
    sub_180050870(v4);
  sub_18001246C(&v33, a1 + 80);
  v7 = v33;
  if ( !v33 )
  {
    v8 = sub_18007C1CC(v46, a2);
    v7 = *(_DWORD **)v8;
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 8) = 0LL;
    v33 = v7;
    v10 = v34;
    v34 = v9;
    if ( v10 )
      sub_180010530(v10);
    if ( v47 )
      sub_180010530(v47);
  }
  if ( v7[2] != a2 )
  {
    sub_180010DD0(v51, (__int64)"Shader database platform is incompatible with engine shader platform");
    sub_18001C3BC((__int64)pExceptionObject, (const char *)v51, 0);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  (*(void (__fastcall **)(_DWORD *, void **))(*(_QWORD *)v7 + 8LL))(v7, v45);
  for ( i = *(_QWORD **)v45[0]; !*((_BYTE *)i + 25); i = j )
  {
    sub_180017648(v51, (__int64)(i + 4));
    v12 = *((_DWORD *)i + 20);
    *(_QWORD *)&v32 = pExceptionObject;
    v13 = sub_18007C1AC(i + 8, pExceptionObject);
    v14 = sub_180017648(v50, (__int64)v51);
    sub_18004F4AC(v5, v14, v12, v13);
    sub_180011B24((__int64)v51);
    v15 = i[2];
    if ( *(_BYTE *)(v15 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = sub_18001DD84((_QWORD *)v15);
    }
  }
  v17 = sub_1800306C8(&v48);
  v18 = *v17;
  v19 = v17[1];
  *v17 = 0LL;
  v17[1] = 0LL;
  a1[8] = v18;
  v20 = a1[9];
  a1[9] = v19;
  if ( v20 )
    sub_180010530(v20);
  if ( v49 )
    sub_180010530(v49);
  v21 = sub_180034870((__int64)a1);
  v35 = 0LL;
  v22 = a1[9];
  if ( v22 )
    _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
  v35 = *((_OWORD *)a1 + 4);
  sub_18004EF88(v21, &v35);
  sub_180030434(&v44);
  v23 = sub_180034870((__int64)a1);
  v37 = 0LL;
  if ( *((_QWORD *)&v44 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 1u);
  v37 = v44;
  sub_18004EF88(v23, &v37);
  sub_180030794(&v43);
  v24 = sub_180034870((__int64)a1);
  v38 = 0LL;
  if ( *((_QWORD *)&v43 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL), 1u);
  v38 = v43;
  sub_18004EF88(v24, &v38);
  sub_180030368(&v32);
  v25 = sub_180034870((__int64)a1);
  v39 = 0LL;
  v26 = *((_QWORD *)&v32 + 1);
  if ( *((_QWORD *)&v32 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL), 1u);
    v26 = *((_QWORD *)&v32 + 1);
  }
  v39 = v32;
  sub_18004EF88(v25, &v39);
  sub_180030860(&v36);
  v27 = sub_180034870((__int64)a1);
  v40 = 0LL;
  v28 = *((_QWORD *)&v36 + 1);
  if ( *((_QWORD *)&v36 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL), 1u);
    v26 = *((_QWORD *)&v32 + 1);
    v28 = *((_QWORD *)&v36 + 1);
  }
  v40 = v36;
  sub_18004EF88(v27, &v40);
  sub_180030104(&v41);
  v29 = sub_180034870((__int64)a1);
  v42 = 0LL;
  v30 = *((_QWORD *)&v41 + 1);
  if ( *((_QWORD *)&v41 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 1u);
    v26 = *((_QWORD *)&v32 + 1);
    v28 = *((_QWORD *)&v36 + 1);
    v30 = *((_QWORD *)&v41 + 1);
  }
  v42 = v41;
  sub_18004EF88(v29, &v42);
  if ( v30 )
    sub_180010530(v30);
  if ( v28 )
    sub_180010530(v28);
  if ( v26 )
    sub_180010530(v26);
  if ( *((_QWORD *)&v43 + 1) )
    sub_180010530(*((__int64 *)&v43 + 1));
  if ( *((_QWORD *)&v44 + 1) )
    sub_180010530(*((__int64 *)&v44 + 1));
  result = sub_18002E8A4(v45, (__int64)v45);
  if ( v34 )
    return sub_180010530(v34);
  return result;
}
