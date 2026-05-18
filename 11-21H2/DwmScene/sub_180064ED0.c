/*
 * XREFs of sub_180064ED0 @ 0x180064ED0
 * Callers:
 *     sub_180060E7C @ 0x180060E7C (sub_180060E7C.c)
 * Callees:
 *     sub_18006535C @ 0x18006535C (sub_18006535C.c)
 *     sub_180065944 @ 0x180065944 (sub_180065944.c)
 */

__int64 __fastcall sub_180064ED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  unsigned int v12; // r10d
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  _OWORD v21[4]; // [rsp+30h] [rbp-48h] BYREF

  *(_DWORD *)(a1 + 292) = 0;
  v21[0] = xmmword_1801289D0;
  v21[1] = xmmword_1801289E0;
  v21[2] = xmmword_1801289F0;
  v21[3] = xmmword_180128A00;
  sub_180065944(a1, 1LL, 2LL, v21);
  *(_QWORD *)&v18 = v7;
  *((_QWORD *)&v18 + 1) = v7;
  v8 = v18;
  *(_DWORD *)(v9 + 296) = 1056997505;
  *(_DWORD *)(v9 + 300) = 1056997505;
  *(_DWORD *)(v9 + 304) = 1056997505;
  *(_DWORD *)(v9 + 308) = 1065353216;
  *(_DWORD *)(v9 + 352) = 1065353216;
  *(_QWORD *)(v9 + 356) = 1065353216LL;
  *(_DWORD *)(v9 + 364) = 1065353216;
  *(_DWORD *)(v9 + 368) = 1065353216;
  *(_DWORD *)(v9 + 348) = v7;
  *(_QWORD *)&v18 = v7;
  *((_QWORD *)&v18 + 1) = v7;
  *(_OWORD *)(v9 + 472) = v8;
  *(_DWORD *)(v9 + 440) = v7;
  v10 = v18;
  *(_QWORD *)&v18 = v7;
  *((_QWORD *)&v18 + 1) = v7;
  *(_OWORD *)(v9 + 488) = v10;
  *(_DWORD *)(v9 + 312) = 1065353216;
  v11 = v18;
  *(_QWORD *)&v18 = v7;
  *((_QWORD *)&v18 + 1) = v7;
  *(_OWORD *)(v9 + 504) = v11;
  *(_DWORD *)(v9 + 316) = v12;
  *(_DWORD *)(v9 + 320) = 1036831949;
  *(_DWORD *)(v9 + 324) = 1148846080;
  *(_OWORD *)(v9 + 520) = v18;
  *(_DWORD *)(v9 + 328) = 1114636288;
  *(_DWORD *)(v9 + 332) = 1065353216;
  *(_BYTE *)(v9 + 336) = v7;
  *(_BYTE *)(v9 + 1612) = v7;
  *(_QWORD *)(v9 + 340) = 1065353216LL;
  *(_WORD *)(v9 + 464) = 768;
  *(_DWORD *)(v9 + 544) = 7;
  *(_DWORD *)(v9 + 392) = v7;
  *(_DWORD *)(v9 + 396) = 1065353216;
  sub_18006535C(v9, v12, v13, (unsigned int)(v7 + 2), v7, v7);
  sub_18006535C(a1, 2LL, v14, 0LL, v19, v20);
  return sub_18006535C(a1, (unsigned int)(v15 + 3), v16, (unsigned int)(v15 + 2), a5, a6);
}
