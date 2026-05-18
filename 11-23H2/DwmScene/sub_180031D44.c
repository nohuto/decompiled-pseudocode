/*
 * XREFs of sub_180031D44 @ 0x180031D44
 * Callers:
 *     sub_180032680 @ 0x180032680 (sub_180032680.c)
 *     sub_180064148 @ 0x180064148 (sub_180064148.c)
 *     sub_1800E7F58 @ 0x1800E7F58 (sub_1800E7F58.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800105A8 @ 0x1800105A8 (sub_1800105A8.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800179FC @ 0x1800179FC (sub_1800179FC.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     sub_18003188C @ 0x18003188C (sub_18003188C.c)
 *     sub_180031C20 @ 0x180031C20 (sub_180031C20.c)
 *     sub_180031C54 @ 0x180031C54 (sub_180031C54.c)
 *     sub_180031F9C @ 0x180031F9C (sub_180031F9C.c)
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 *     sub_180036F2C @ 0x180036F2C (sub_180036F2C.c)
 *     sub_180038610 @ 0x180038610 (sub_180038610.c)
 *     sub_180074430 @ 0x180074430 (sub_180074430.c)
 */

// Hidden C++ exception states: #wind=30
__int64 __fastcall sub_180031D44(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD **v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  sub_180036F2C();
  sub_180031F9C(a1 + 1424);
  sub_180013348(a1 + 1392);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 1280));
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 1208));
  sub_180032108(a1 + 1184);
  sub_180025BB0(a1 + 1104);
  sub_180027FD4((void **)(a1 + 1080));
  sub_180031C20((void ***)(a1 + 984));
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
    sub_180010530(v2);
  sub_180038610(a1 + 888);
  sub_180038610(a1 + 864);
  sub_180025BB0(a1 + 808);
  sub_18003188C((void **)(a1 + 728));
  sub_180013300(a1 + 704);
  sub_1800179FC(a1 + 568);
  v3 = *(_QWORD *)(a1 + 520);
  if ( v3 )
    sub_180010530(v3);
  v4 = *(_QWORD *)(a1 + 504);
  if ( v4 )
    sub_180010530(v4);
  v5 = *(_QWORD *)(a1 + 488);
  if ( v5 )
    sub_180010530(v5);
  v6 = *(_QWORD *)(a1 + 472);
  if ( v6 )
    sub_180010530(v6);
  sub_180074430(a1 + 368);
  sub_180025BB0(a1 + 312);
  sub_180038610(a1 + 288);
  sub_1800105A8(a1 + 256);
  sub_18003185C((void **)(a1 + 184));
  v7 = *(_QWORD ***)(a1 + 168);
  *v7[1] = 0LL;
  v8 = *v7;
  if ( *v7 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      v10 = v8[3];
      if ( v10 )
        sub_180010530(v10);
      sub_1800100E8(v8, 0x20uLL);
      v8 = v9;
    }
    while ( v9 );
  }
  sub_1800100E8(*(void **)(a1 + 168), 0x20uLL);
  sub_180025BB0(a1 + 112);
  sub_180013300(a1 + 88);
  sub_180031C54((__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 80));
  v11 = *(_QWORD *)(a1 + 72);
  if ( v11 )
    sub_180010530(v11);
  return sub_180025BB0(a1 + 8);
}
