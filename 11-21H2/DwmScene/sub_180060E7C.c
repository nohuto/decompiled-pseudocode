/*
 * XREFs of sub_180060E7C @ 0x180060E7C
 * Callers:
 *     sub_180030794 @ 0x180030794 (sub_180030794.c)
 *     sub_18006054C @ 0x18006054C (sub_18006054C.c)
 *     sub_18009CC54 @ 0x18009CC54 (sub_18009CC54.c)
 *     sub_1800A19A8 @ 0x1800A19A8 (sub_1800A19A8.c)
 *     sub_1800A8184 @ 0x1800A8184 (sub_1800A8184.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_180060540 @ 0x180060540 (sub_180060540.c)
 *     sub_180060DA0 @ 0x180060DA0 (sub_180060DA0.c)
 *     sub_180060E6C @ 0x180060E6C (sub_180060E6C.c)
 *     sub_180064ED0 @ 0x180064ED0 (sub_180064ED0.c)
 *     sub_18008E340 @ 0x18008E340 (sub_18008E340.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_180060E7C(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  _DWORD *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  volatile __int32 *v15; // rax
  __int32 v16; // r8d
  __int64 v17; // r9
  __int64 *v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-40h] BYREF
  char *v22[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-18h]

  v20 = (__int64 *)a1;
  v21[0] = a2;
  v22[2] = 0LL;
  v23 = 15LL;
  LOBYTE(v22[0]) = 0;
  sub_180012190((__int64 *)v22, "Camera", 6uLL);
  sub_18008E340(a1, v22, a2);
  if ( v23 >= 0x10 )
    sub_180010884(v22[0], v23 + 1);
  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = -1;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 15LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 15LL;
  *(_BYTE *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 15LL;
  *(_BYTE *)(a1 + 248) = 0;
  v4 = a1 + 280;
  v5 = (_DWORD *)(a1 + 280);
  v6 = 3LL;
  do
  {
    sub_180060E6C(v5++);
    --v6;
  }
  while ( v6 );
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 1065353216;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 364) = 1065353216;
  *(_DWORD *)(a1 + 368) = 1065353216;
  *(_BYTE *)(a1 + 388) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 412) = 3;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  v19 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v19, (__int64 *)&v19);
  sub_18001DE8C((__int64 *)(v7 + 8), (__int64 *)&v19);
  sub_18001DE8C((__int64 *)(v8 + 16), (__int64 *)&v19);
  *(_WORD *)(v9 + 24) = 257;
  *(_QWORD *)(a1 + 448) = v9;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  v10 = a1 + 548;
  v11 = 4LL;
  do
  {
    sub_180060DA0(v10);
    v10 += 256LL;
    --v11;
  }
  while ( v11 );
  *(_QWORD *)(a1 + 1572) = 0LL;
  *(_QWORD *)(a1 + 1580) = 0LL;
  *(_QWORD *)(a1 + 1588) = 0LL;
  *(_QWORD *)(a1 + 1596) = 0LL;
  *(_QWORD *)(a1 + 1604) = 0LL;
  v21[1] = a1 + 1616;
  *(_QWORD *)(a1 + 1616) = 0LL;
  *(_QWORD *)(a1 + 1624) = 0LL;
  v20 = (__int64 *)sub_180011088(0x58uLL);
  sub_18001DE8C(v20, (__int64 *)&v20);
  sub_18001DE8C((__int64 *)(v12 + 8), (__int64 *)&v20);
  sub_18001DE8C((__int64 *)(v13 + 16), (__int64 *)&v20);
  *(_WORD *)(v14 + 24) = 257;
  *(_QWORD *)(a1 + 1616) = v14;
  *(_QWORD *)(a1 + 1632) = 0LL;
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1696) = &off_1801EB6A0;
  *(_QWORD *)(a1 + 1760) = 0LL;
  sub_180064ED0(a1);
  LODWORD(v21[0]) = 0;
  sub_180060540((unsigned int *)v21);
  do
  {
    v15 = (volatile __int32 *)sub_18001DE70(v4);
    _InterlockedExchange(v15, v16);
    v4 += 4LL;
  }
  while ( v4 != v17 );
  sub_180010910(a2);
  return a1;
}
