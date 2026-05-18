/*
 * XREFs of sub_180099DE8 @ 0x180099DE8
 * Callers:
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 *     sub_18007FC10 @ 0x18007FC10 (sub_18007FC10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800435A8 @ 0x1800435A8 (sub_1800435A8.c)
 *     sub_18004FAF8 @ 0x18004FAF8 (sub_18004FAF8.c)
 *     sub_18004FB30 @ 0x18004FB30 (sub_18004FB30.c)
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180060990 @ 0x180060990 (sub_180060990.c)
 *     sub_180061500 @ 0x180061500 (sub_180061500.c)
 *     sub_1800875C8 @ 0x1800875C8 (sub_1800875C8.c)
 *     sub_1800875F8 @ 0x1800875F8 (sub_1800875F8.c)
 *     sub_180087628 @ 0x180087628 (sub_180087628.c)
 *     sub_180087658 @ 0x180087658 (sub_180087658.c)
 *     sub_180087790 @ 0x180087790 (sub_180087790.c)
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 *     sub_18009844C @ 0x18009844C (sub_18009844C.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_180099DE8(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r13
  int v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // r14
  char v19; // si
  __int64 v20; // r8
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r8
  unsigned __int64 *v33; // rbx
  void **v34; // rax
  _QWORD *v35; // rcx
  bool result; // al
  unsigned __int64 *v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v39; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int128 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  _BYTE v47[20]; // [rsp+88h] [rbp-78h]
  char v48; // [rsp+9Ch] [rbp-64h]
  int v49; // [rsp+9Dh] [rbp-63h]
  int v50; // [rsp+A4h] [rbp-5Ch]
  unsigned int v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B4h] [rbp-4Ch]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 v60; // [rsp+100h] [rbp+0h] BYREF
  __int64 v61; // [rsp+110h] [rbp+10h] BYREF
  __int64 v62; // [rsp+118h] [rbp+18h]
  __int64 v63; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v64[3]; // [rsp+130h] [rbp+30h] BYREF
  char v65; // [rsp+13Ch] [rbp+3Ch] BYREF

  v5 = sub_18004FAF8(a2);
  v6 = 23;
  if ( *(int *)(a1 + 104) < 40960 )
    v6 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(v5 + 560) & 2) == 0 )
    v7 = v6;
  v52 = v7;
  v8 = sub_180060990(*(_QWORD *)(a1 + 56));
  v9 = sub_180060990(*(_QWORD *)(a1 + 56));
  v10 = sub_180060990(*(_QWORD *)(a1 + 56));
  v11 = sub_180060990(*(_QWORD *)(a1 + 56));
  v51 = v11;
  v12 = v8;
  v13 = 1LL << v8;
  v53 = v13;
  if ( a3 )
  {
    v64[0] = v9;
    v64[1] = v10;
    v64[2] = v11;
    v38 = (unsigned __int64 *)v64;
    v14 = (__int64 *)&v65;
  }
  else
  {
    v40 = __PAIR64__(v10, v9);
    v38 = &v40;
    v14 = &v41;
  }
  v39 = v14;
  v15 = sub_18004FB30(v12, (_DWORD **)&v38);
  v16 = 0LL;
  v40 = 0LL;
  v17 = 1LL << v9;
  v18 = 1LL << v10;
  v19 = 0;
  while ( 1 )
  {
    v20 = v13 | v16;
    if ( a3 && _bittest64(&v20, v51) )
      v19 = 1;
    v21 = v20 & v17;
    if ( v19 && (v21 || (v20 & v18) != 0) )
    {
      v19 = 0;
    }
    else
    {
      sub_180060378(*(_QWORD *)(a1 + 56), &v38, v20, v15 & ~v20, 1);
      *(_QWORD *)&v45 = 0LL;
      BYTE8(v45) = 0;
      *(_OWORD *)&v47[4] = 0LL;
      v50 = 3;
      LODWORD(v43) = 0;
      HIDWORD(v43) = 2 - (v19 != 0);
      v44 = v52 & (unsigned int)-(v21 != 0);
      v49 = 16843009;
      HIDWORD(v45) = 2;
      v46 = 0x200000002LL;
      *(_DWORD *)v47 = 7;
      v48 = 1;
      sub_1800435A8(v5, &v41);
      sub_1800883E0(v41, (__int64)&v43, 0LL);
      v22 = sub_18001246C(&v54, &v41);
      sub_180087658(v23, v22);
      if ( v19 )
      {
        v19 = 0;
      }
      else
      {
        HIDWORD(v43) = 1;
        v24 = sub_1800435A8(v5, &v55);
        sub_180011020(&v41, v24);
        v19 = 0;
        if ( v56 )
          sub_180010530(v56);
        sub_1800883E0(v41, (__int64)&v43, 0LL);
        v25 = sub_18001246C(&v57, &v41);
        sub_1800875F8(v26, v25);
        HIBYTE(v49) = 0;
        v27 = sub_1800435A8(v5, &v58);
        sub_180011020(&v41, v27);
        if ( v59 )
          sub_180010530(v59);
        sub_1800883E0(v41, (__int64)&v43, 0LL);
        v28 = sub_18001246C(&v60, &v41);
        sub_1800875C8(v29, v28);
        HIDWORD(v43) = 2;
        v30 = sub_1800435A8(v5, &v61);
        sub_180011020(&v41, v30);
        if ( v62 )
          sub_180010530(v62);
        sub_1800883E0(v41, (__int64)&v43, 0LL);
        v31 = sub_18001246C(&v63, &v41);
        sub_180087628(v32, v31);
      }
      LODWORD(v43) = 0;
      v46 = 0LL;
      *(_QWORD *)v47 = 0LL;
      v45 = 0LL;
      if ( v21 )
      {
        v44 = *(_QWORD *)(a1 + 112);
        sub_180087C3C((__int64)v38, (__int64)&v43);
      }
      else
      {
        v44 = *(_QWORD *)(a1 + 120);
        sub_180087C3C((__int64)v38, (__int64)&v43);
        v33 = v38;
        v34 = (void **)sub_180010DD0(&v43, (__int64)byte_180106082);
        sub_180087790(v33, 5, v34);
      }
      v35 = *(_QWORD **)(a1 + 136);
      if ( v35 == *(_QWORD **)(a1 + 144) )
      {
        sub_18009844C((char **)(a1 + 128), *(char **)(a1 + 136), &v38);
      }
      else
      {
        sub_18001246C(v35, &v38);
        *(_QWORD *)(a1 + 136) += 16LL;
      }
      if ( v42 )
        sub_180010530(v42);
      if ( v39 )
        sub_180010530((__int64)v39);
    }
    result = sub_180061500((__int64 *)&v40, v15);
    if ( !result )
      break;
    v16 = v40;
    v13 = v53;
  }
  return result;
}
