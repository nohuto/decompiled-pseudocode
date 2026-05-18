/*
 * XREFs of sub_180062BE0 @ 0x180062BE0
 * Callers:
 *     sub_18009D650 @ 0x18009D650 (sub_18009D650.c)
 *     sub_1800A20B0 @ 0x1800A20B0 (sub_1800A20B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180026DD4 @ 0x180026DD4 (sub_180026DD4.c)
 *     sub_18005B860 @ 0x18005B860 (sub_18005B860.c)
 *     sub_180060590 @ 0x180060590 (sub_180060590.c)
 *     sub_180060694 @ 0x180060694 (sub_180060694.c)
 *     sub_1800609D0 @ 0x1800609D0 (sub_1800609D0.c)
 *     sub_180060A6C @ 0x180060A6C (sub_180060A6C.c)
 *     sub_180060C30 @ 0x180060C30 (sub_180060C30.c)
 *     sub_180062B08 @ 0x180062B08 (sub_180062B08.c)
 *     sub_18006696C @ 0x18006696C (sub_18006696C.c)
 *     sub_18008E620 @ 0x18008E620 (sub_18008E620.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180062BE0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  __int128 v14; // xmm0
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  __int128 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int64 *v24; // r14
  _QWORD *v25; // rbx
  _QWORD *v26; // r8
  __int64 **v27; // rdx
  __int64 *i; // rcx
  __int64 v29; // rax
  __int64 j; // rcx
  __int64 (__fastcall ***v31)(_QWORD, _BYTE *); // rcx
  _BYTE *v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rbx
  unsigned __int64 v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  char v43; // [rsp+20h] [rbp-E0h]
  __int128 v44; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v45[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v46[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v47[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v48[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v49; // [rsp+80h] [rbp-80h]
  _BYTE v50[32]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v51[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v52[56]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v53; // [rsp+108h] [rbp+8h]

  v48[2] = a2;
  v44 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v44 = *a2;
  *((_QWORD *)&v44 + 1) = v4;
  sub_18008E620(a1, &v44);
  sub_180026DD4(v45, a2);
  v5 = v45[0];
  *(_QWORD *)(v45[0] + 96) = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  v6 = (_QWORD *)(v5 + 136);
  v7 = *(_QWORD *)(a1 + 144);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a1 + 144);
    v5 = v45[0];
  }
  v8 = *(_QWORD *)(a1 + 136);
  v46[0] = *v6;
  *v6 = v8;
  v46[1] = v6[1];
  v6[1] = v7;
  sub_180010910((__int64)v46);
  v9 = (_QWORD *)(v5 + 152);
  v10 = *(_QWORD *)(a1 + 160);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = *(_QWORD *)(a1 + 160);
    v5 = v45[0];
  }
  v11 = *(_QWORD *)(a1 + 152);
  v47[0] = *v9;
  *v9 = v11;
  v47[1] = v9[1];
  v9[1] = v10;
  sub_180010910((__int64)v47);
  *(_DWORD *)(v5 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v5 + 176) = *(_DWORD *)(a1 + 176);
  v12 = (_QWORD *)(a1 + 216);
  if ( v5 + 216 != a1 + 216 )
  {
    if ( *(_QWORD *)(a1 + 240) >= 0x10uLL )
      v12 = (_QWORD *)*v12;
    sub_180012190((__int64 *)(v5 + 216), v12, *(_QWORD *)(a1 + 232));
  }
  v13 = (_QWORD *)(a1 + 248);
  if ( v5 + 248 != a1 + 248 )
  {
    if ( *(_QWORD *)(a1 + 272) >= 0x10uLL )
      v13 = (_QWORD *)*v13;
    sub_180012190((__int64 *)(v5 + 248), v13, *(_QWORD *)(a1 + 264));
  }
  *(_DWORD *)(v5 + 292) = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(v5 + 296) = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(v5 + 300) = *(_DWORD *)(a1 + 300);
  *(_DWORD *)(v5 + 304) = *(_DWORD *)(a1 + 304);
  *(_DWORD *)(v5 + 308) = *(_DWORD *)(a1 + 308);
  *(_DWORD *)(v5 + 312) = *(_DWORD *)(a1 + 312);
  *(_DWORD *)(v5 + 316) = *(_DWORD *)(a1 + 316);
  *(_DWORD *)(v5 + 320) = *(_DWORD *)(a1 + 320);
  *(_DWORD *)(v5 + 324) = *(_DWORD *)(a1 + 324);
  *(_DWORD *)(v5 + 328) = *(_DWORD *)(a1 + 328);
  *(_DWORD *)(v5 + 332) = *(_DWORD *)(a1 + 332);
  *(_BYTE *)(v5 + 336) = *(_BYTE *)(a1 + 336);
  *(_DWORD *)(v5 + 340) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(v5 + 344) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(v5 + 348) = *(_DWORD *)(a1 + 348);
  *(_DWORD *)(v5 + 352) = *(_DWORD *)(a1 + 352);
  *(_DWORD *)(v5 + 356) = *(_DWORD *)(a1 + 356);
  *(_DWORD *)(v5 + 360) = *(_DWORD *)(a1 + 360);
  *(_DWORD *)(v5 + 364) = *(_DWORD *)(a1 + 364);
  *(_DWORD *)(v5 + 368) = *(_DWORD *)(a1 + 368);
  if ( ((unsigned __int64)sub_180066960 & -(__int64)(*(_BYTE *)(a1 + 388) != 0)) != 0 )
    v14 = *(_OWORD *)(a1 + 372);
  else
    v14 = v49;
  v15 = *(_BYTE *)(v5 + 388);
  if ( ((unsigned __int64)sub_180066960 & -(__int64)(*(_BYTE *)(a1 + 388) != 0)) != 0 )
  {
    *(_OWORD *)(v5 + 372) = v14;
    if ( !v15 )
      *(_BYTE *)(v5 + 388) = 1;
  }
  else if ( v15 )
  {
    *(_BYTE *)(v5 + 388) = 0;
  }
  *(_DWORD *)(v5 + 392) = *(_DWORD *)(a1 + 392);
  *(_DWORD *)(v5 + 396) = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(v5 + 400) = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(v5 + 404) = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(v5 + 408) = *(_DWORD *)(a1 + 408);
  if ( v5 + 416 != a1 + 416 )
    sub_18006696C();
  *(_DWORD *)(v5 + 440) = *(_DWORD *)(a1 + 440);
  *(_BYTE *)(v5 + 464) = *(_BYTE *)(a1 + 464);
  *(_BYTE *)(v5 + 465) = *(_BYTE *)(a1 + 465);
  *(_OWORD *)(v5 + 472) = *(_OWORD *)(a1 + 472);
  *(_OWORD *)(v5 + 488) = *(_OWORD *)(a1 + 488);
  *(_OWORD *)(v5 + 504) = *(_OWORD *)(a1 + 504);
  *(_OWORD *)(v5 + 520) = *(_OWORD *)(a1 + 520);
  *(_QWORD *)(v5 + 536) = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v5 + 544) = *(_DWORD *)(a1 + 544);
  v16 = v5 + 548;
  v17 = 4LL;
  do
  {
    v18 = (__int128 *)(v16 + a1 - (v5 + 548) + 580);
    v19 = v5 + 548 - a1;
    v20 = 4LL;
    do
    {
      v21 = *(v18 - 1);
      v22 = *v18;
      v23 = v18[1];
      *(__int128 *)((char *)v18 + v19 - 580) = *(v18 - 2);
      *(__int128 *)((char *)v18 + v19 - 564) = v21;
      *(__int128 *)((char *)v18 + v5 - a1) = v22;
      *(__int128 *)((char *)v18 + v19 - 532) = v23;
      v18 += 4;
      --v20;
    }
    while ( v20 );
    v16 += 256LL;
    --v17;
  }
  while ( v17 );
  *(_DWORD *)(v5 + 1572) = *(_DWORD *)(a1 + 1572);
  *(_DWORD *)(v5 + 1576) = *(_DWORD *)(a1 + 1576);
  *(_DWORD *)(v5 + 1580) = *(_DWORD *)(a1 + 1580);
  *(_DWORD *)(v5 + 1584) = *(_DWORD *)(a1 + 1584);
  *(_DWORD *)(v5 + 1588) = *(_DWORD *)(a1 + 1588);
  *(_DWORD *)(v5 + 1592) = *(_DWORD *)(a1 + 1592);
  *(_DWORD *)(v5 + 1596) = *(_DWORD *)(a1 + 1596);
  *(_DWORD *)(v5 + 1600) = *(_DWORD *)(a1 + 1600);
  *(_BYTE *)(v5 + 1612) = *(_BYTE *)(a1 + 1612);
  v24 = (__int64 *)(v5 + 1616);
  if ( v5 + 1616 != a1 + 1616 )
  {
    v25 = (_QWORD *)*v24;
    sub_1800609D0(v5 + 1616, v5 + 1616, *(char **)(*v24 + 8));
    v25[1] = v25;
    *v25 = v25;
    v25[2] = v25;
    *(_QWORD *)(v5 + 1624) = 0LL;
    *(_QWORD *)(*v24 + 8) = sub_180060590((__int64 *)(v5 + 1616), *(_QWORD *)(*(_QWORD *)(a1 + 1616) + 8LL), *v24, v43);
    *(_QWORD *)(v5 + 1624) = *(_QWORD *)(a1 + 1624);
    v26 = (_QWORD *)*v24;
    v27 = *(__int64 ***)(*v24 + 8);
    if ( *((_BYTE *)v27 + 25) )
    {
      *v26 = v26;
      *(_QWORD *)(*v24 + 16) = *v24;
    }
    else
    {
      for ( i = *v27; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v27 = (__int64 **)i;
      *v26 = v27;
      v29 = *(_QWORD *)(*v24 + 8);
      for ( j = *(_QWORD *)(v29 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
        v29 = j;
      *(_QWORD *)(*v24 + 16) = v29;
    }
  }
  *(_QWORD *)(v5 + 1696) = *(_QWORD *)(a1 + 1696);
  v53 = 0LL;
  v31 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 1760);
  if ( v31 )
    v53 = (_BYTE *)(**v31)(v31, v52);
  sub_18005B860((__int64)v52, v5 + 1704);
  if ( v53 )
  {
    v32 = v52;
    LOBYTE(v32) = v53 != v52;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v53 + 32LL))(v53, v32);
  }
  v33 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4);
  v34 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v5 + 112) - *(_QWORD *)(v5 + 104)) >> 4);
  if ( v33 >= v34 )
  {
    if ( v33 > v34 )
    {
      if ( v33 <= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v5 + 120) - *(_QWORD *)(v5 + 104)) >> 4) )
        *(_QWORD *)(v5 + 112) = sub_180060C30(*(_QWORD *)(v5 + 112), v33 - v34);
      else
        sub_180060A6C((__int64 *)(v5 + 104), v33);
    }
  }
  else
  {
    v35 = *(_QWORD *)(v5 + 104) + 16 * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4);
    sub_180060694(v35, *(_QWORD *)(v5 + 112));
    *(_QWORD *)(v5 + 112) = v35;
  }
  v36 = 0LL;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4) )
  {
    v37 = 0LL;
    do
    {
      v38 = sub_180062B08(v37 + *(_QWORD *)(a1 + 104), (__int64)v50);
      v39 = *(_QWORD *)(v5 + 104);
      *(_BYTE *)(v37 + v39) = *(_BYTE *)v38;
      *(_QWORD *)(v37 + v39 + 8) = *(_QWORD *)(v38 + 8);
      *(_QWORD *)(v37 + v39 + 16) = *(_QWORD *)(v38 + 16);
      *(_QWORD *)(v37 + v39 + 24) = *(_QWORD *)(v38 + 24);
      v40 = *(_QWORD *)(v38 + 32);
      v41 = *(_QWORD *)(v38 + 40);
      *(_QWORD *)(v38 + 32) = 0LL;
      *(_QWORD *)(v38 + 40) = 0LL;
      v48[0] = *(_QWORD *)(v37 + v39 + 32);
      *(_QWORD *)(v37 + v39 + 32) = v40;
      v48[1] = *(_QWORD *)(v37 + v39 + 40);
      *(_QWORD *)(v37 + v39 + 40) = v41;
      sub_180010910((__int64)v48);
      sub_180010910((__int64)v51);
      ++v36;
      v37 += 48LL;
    }
    while ( v36 < 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4) );
  }
  sub_180010910((__int64)v45);
  return sub_180010910((__int64)a2);
}
