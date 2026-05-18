/*
 * XREFs of sub_18005CC00 @ 0x18005CC00
 * Callers:
 *     sub_18005938C @ 0x18005938C (sub_18005938C.c)
 * Callees:
 *     sub_18005D080 @ 0x18005D080 (sub_18005D080.c)
 *     sub_18005D514 @ 0x18005D514 (sub_18005D514.c)
 */

__int64 __fastcall sub_18005CC00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r11
  __int64 v8; // rcx
  __int128 v9; // xmm0
  unsigned int v10; // r10d
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  _OWORD v21[4]; // [rsp+30h] [rbp-48h] BYREF

  *(_DWORD *)(a1 + 292) = 0;
  v21[0] = xmmword_180106A40;
  v21[1] = xmmword_180106A50;
  v21[2] = xmmword_180106A60;
  v21[3] = xmmword_180106A70;
  sub_18005D514(a1, 1LL, 2LL, v21);
  *(_QWORD *)&v18 = v7;
  *(_DWORD *)(v8 + 296) = 1056997505;
  *(_DWORD *)(v8 + 300) = 1056997505;
  *(_DWORD *)(v8 + 304) = 1056997505;
  *(_DWORD *)(v8 + 308) = 1065353216;
  *((_QWORD *)&v18 + 1) = v7;
  v9 = v18;
  *(_DWORD *)(v8 + 440) = v7;
  *(_DWORD *)(v8 + 312) = 1065353216;
  *(_DWORD *)(v8 + 316) = v10;
  *(_DWORD *)(v8 + 320) = 1036831949;
  *(_DWORD *)(v8 + 324) = 1148846080;
  *(_DWORD *)(v8 + 328) = 1114636288;
  *(_DWORD *)(v8 + 332) = 1065353216;
  *(_BYTE *)(v8 + 336) = v7;
  *(_BYTE *)(v8 + 1612) = v7;
  *(_QWORD *)(v8 + 340) = 1065353216LL;
  *(_WORD *)(v8 + 464) = 768;
  *(_DWORD *)(v8 + 544) = 7;
  *(_DWORD *)(v8 + 348) = v7;
  *(_DWORD *)(v8 + 352) = 1065353216;
  *(_QWORD *)(v8 + 356) = 1065353216LL;
  *(_DWORD *)(v8 + 364) = 1065353216;
  *(_DWORD *)(v8 + 368) = 1065353216;
  *(_QWORD *)&v18 = v7;
  *((_QWORD *)&v18 + 1) = v7;
  *(_OWORD *)(v8 + 472) = v9;
  *(_DWORD *)(v8 + 392) = v7;
  v11 = v18;
  *(_QWORD *)&v18 = v7;
  *((_QWORD *)&v18 + 1) = v7;
  *(_OWORD *)(v8 + 488) = v11;
  *(_DWORD *)(v8 + 396) = 1065353216;
  v12 = v18;
  *(_QWORD *)&v18 = v7;
  *((_QWORD *)&v18 + 1) = v7;
  *(_OWORD *)(v8 + 504) = v12;
  *(_OWORD *)(v8 + 520) = v18;
  sub_18005D080(v8, v10, v13, (unsigned int)(v7 + 2), v7, v7);
  sub_18005D080(a1, 2LL, v14, 0LL, v19, v20);
  return sub_18005D080(a1, (unsigned int)(v15 + 3), v16, (unsigned int)(v15 + 2), a5, a6);
}
