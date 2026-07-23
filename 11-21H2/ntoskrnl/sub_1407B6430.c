/*
 * XREFs of sub_1407B6430 @ 0x1407B6430
 * Callers:
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1407B6370 @ 0x1407B6370 (sub_1407B6370.c)
 *     sub_1407B81B0 @ 0x1407B81B0 (sub_1407B81B0.c)
 */

__int64 __fastcall sub_1407B6430(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int *v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v13; // [rsp+24h] [rbp-54h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  unsigned int *v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h]
  unsigned __int64 v19; // [rsp+58h] [rbp-20h]

  v15 = 0LL;
  v14 = 0LL;
  sub_1407B81B0(a2, a4);
  v13 = 0;
  v16 = 0LL;
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(a2 + 1112)) )
  {
    v8 = *(unsigned int **)(a2 + 1392);
    v16 = v8;
    if ( v8 )
    {
      sub_1407B6370(v8, &v13, 0LL);
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(a2 + 1112));
      v9 = v13;
      goto LABEL_4;
    }
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(a2 + 1112));
  }
  v9 = 0;
  v13 = 0;
LABEL_4:
  *(_DWORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 1128);
  *(_DWORD *)(a1 + 72) = *(char *)(a2 + 640);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 1088);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 1344);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 2136);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 1168);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 1176);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 1668);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 1832);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 1824) << 12;
  v10 = *(_QWORD *)(a2 + 1792) << 12;
  v17 = v10;
  v19 = *(_QWORD *)(a2 + 1800) << 12;
  v11 = v19;
  *(_QWORD *)(a1 + 144) = v10;
  if ( v11 >= v10 )
    v11 = v10;
  *(_QWORD *)(a1 + 8) = v11;
  v14 = *(_QWORD *)(a2 + 1144);
  v15 = *(_QWORD *)(a2 + 1160);
  *(_QWORD *)(a1 + 160) = v14;
  *(_QWORD *)(a1 + 152) = v15;
  v14 = *(_QWORD *)(a2 + 1136);
  v15 = *(_QWORD *)(a2 + 1152);
  *(_QWORD *)(a1 + 176) = v14;
  *(_QWORD *)(a1 + 168) = v15;
  v18 = *(_QWORD *)(a2 + 1608) << 12;
  *(_QWORD *)(a1 + 184) = v18;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a2 + 1616) << 12;
  *(_QWORD *)(a1 + 200) = v18;
  *(_QWORD *)(a1 + 24) = a4[3];
  *(_QWORD *)(a1 + 40) = a4[1];
  *(_QWORD *)(a1 + 48) = *a4;
  *(_QWORD *)(a1 + 208) = a4[5];
  *(_QWORD *)(a1 + 216) = a4[6];
  *(_QWORD *)(a1 + 224) = a4[7];
  *(_QWORD *)(a1 + 232) = a4[8];
  *(_QWORD *)(a1 + 240) = a4[9];
  *(_QWORD *)(a1 + 248) = a4[10];
  if ( a3 )
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 1088);
  return 0LL;
}
