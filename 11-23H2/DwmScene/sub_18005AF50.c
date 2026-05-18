/*
 * XREFs of sub_18005AF50 @ 0x18005AF50
 * Callers:
 *     sub_18008DF40 @ 0x18008DF40 (sub_18008DF40.c)
 *     sub_180092380 @ 0x180092380 (sub_180092380.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_180025178 @ 0x180025178 (sub_180025178.c)
 *     sub_1800587AC @ 0x1800587AC (sub_1800587AC.c)
 *     sub_180058C98 @ 0x180058C98 (sub_180058C98.c)
 *     sub_180059BA0 @ 0x180059BA0 (sub_180059BA0.c)
 *     sub_180059C08 @ 0x180059C08 (sub_180059C08.c)
 *     sub_180059C94 @ 0x180059C94 (sub_180059C94.c)
 *     sub_18005AED8 @ 0x18005AED8 (sub_18005AED8.c)
 *     sub_18005E7CC @ 0x18005E7CC (sub_18005E7CC.c)
 *     sub_180081340 @ 0x180081340 (sub_180081340.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_18005AF50(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  char v17; // [rsp+40h] [rbp-40h]
  _BYTE v18[40]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]

  v4 = sub_18001246C(&v14, a2);
  sub_180081340(a1, v4);
  sub_180025178(&v14, a2);
  v5 = v14;
  *(_QWORD *)(v14 + 96) = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  sub_1800124F8((__int64 *)(v5 + 136), (_QWORD *)(a1 + 136));
  sub_1800124F8((__int64 *)(v5 + 152), (_QWORD *)(a1 + 152));
  *(_DWORD *)(v5 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v5 + 176) = *(_DWORD *)(a1 + 176);
  sub_1800134DC((void **)(v5 + 216), (void **)(a1 + 216));
  sub_1800134DC((void **)(v5 + 248), (void **)(a1 + 248));
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
  v17 = 0;
  if ( *(_BYTE *)(a1 + 388) )
  {
    v16 = *(_OWORD *)(a1 + 372);
    v17 = 1;
  }
  sub_180059BA0((__int128 *)(v5 + 372), &v16);
  *(_DWORD *)(v5 + 392) = *(_DWORD *)(a1 + 392);
  *(_DWORD *)(v5 + 396) = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(v5 + 400) = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(v5 + 404) = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(v5 + 408) = *(_DWORD *)(a1 + 408);
  if ( v5 + 416 != a1 + 416 )
    sub_1800587AC((_QWORD *)(v5 + 416), *(_QWORD *)(a1 + 416), *(_QWORD *)(a1 + 424));
  *(_DWORD *)(v5 + 440) = *(_DWORD *)(a1 + 440);
  *(_BYTE *)(v5 + 464) = *(_BYTE *)(a1 + 464);
  *(_BYTE *)(v5 + 465) = *(_BYTE *)(a1 + 465);
  *(_OWORD *)(v5 + 472) = *(_OWORD *)(a1 + 472);
  *(_OWORD *)(v5 + 488) = *(_OWORD *)(a1 + 488);
  *(_OWORD *)(v5 + 504) = *(_OWORD *)(a1 + 504);
  *(_OWORD *)(v5 + 520) = *(_OWORD *)(a1 + 520);
  *(_QWORD *)(v5 + 536) = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v5 + 544) = *(_DWORD *)(a1 + 544);
  sub_180059C08(v5 + 548, a1 + 548);
  *(_DWORD *)(v5 + 1572) = *(_DWORD *)(a1 + 1572);
  *(_DWORD *)(v5 + 1576) = *(_DWORD *)(a1 + 1576);
  *(_DWORD *)(v5 + 1580) = *(_DWORD *)(a1 + 1580);
  *(_DWORD *)(v5 + 1584) = *(_DWORD *)(a1 + 1584);
  *(_DWORD *)(v5 + 1588) = *(_DWORD *)(a1 + 1588);
  *(_DWORD *)(v5 + 1592) = *(_DWORD *)(a1 + 1592);
  *(_DWORD *)(v5 + 1596) = *(_DWORD *)(a1 + 1596);
  *(_DWORD *)(v5 + 1600) = *(_DWORD *)(a1 + 1600);
  *(_BYTE *)(v5 + 1612) = *(_BYTE *)(a1 + 1612);
  if ( v5 + 1616 != a1 + 1616 )
    sub_18005E7CC();
  *(_QWORD *)(v5 + 1696) = *(_QWORD *)(a1 + 1696);
  sub_180059C94(v5 + 1704, a1 + 1704);
  v6 = (__int64 *)(v5 + 104);
  sub_180058C98(
    (_QWORD *)(v5 + 104),
    0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4));
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 104);
  result = 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v8) >> 4);
  if ( result )
  {
    v10 = 0LL;
    do
    {
      v11 = sub_18005AED8(v10 + v8, (__int64)v18);
      v12 = *v6;
      *(_BYTE *)(v10 + v12) = *(_BYTE *)v11;
      *(_QWORD *)(v10 + v12 + 8) = *(_QWORD *)(v11 + 8);
      *(_QWORD *)(v10 + v12 + 16) = *(_QWORD *)(v11 + 16);
      *(_QWORD *)(v10 + v12 + 24) = *(_QWORD *)(v11 + 24);
      sub_180011020((_QWORD *)(v10 + v12 + 32), (__int64 *)(v11 + 32));
      if ( v19 )
        sub_180010530(v19);
      ++v7;
      v10 += 48LL;
      v8 = *(_QWORD *)(a1 + 104);
      result = 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v8) >> 4);
    }
    while ( v7 < result );
  }
  if ( v15 )
    result = sub_180010530(v15);
  v13 = a2[1];
  if ( v13 )
    return sub_180010530(v13);
  return result;
}
