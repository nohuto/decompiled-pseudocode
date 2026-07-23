/*
 * XREFs of sub_14085FC80 @ 0x14085FC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 *     sub_14083248C @ 0x14083248C (sub_14083248C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14085FC80(__int64 *a1, int *a2, int a3)
{
  __int64 v4; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  int v24; // eax
  _OWORD v26[13]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-28h]
  __int64 v28; // [rsp+100h] [rbp-18h]

  v4 = *a1;
  v6 = 0x4A42E8A56738E2C4LL - *a1;
  if ( *a1 == 0x4A42E8A56738E2C4LL )
    v6 = 0x6E7569E740E06AB1LL - a1[1];
  if ( v6 )
  {
    v7 = 0x4AD8BB9480E3C60ELL - v4;
    if ( v4 == 0x4AD8BB9480E3C60ELL )
      v7 = 0x63C6EF95310DE0BBLL - a1[1];
    if ( !v7 && a3 == 4 && a2 )
    {
      dword_140C232E4 = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  sub_140A48330((_DWORD)a1);
  v8 = *((_OWORD *)qword_140C231B8 + 1);
  v26[0] = *(_OWORD *)qword_140C231B8;
  v9 = *((_OWORD *)qword_140C231B8 + 2);
  v26[1] = v8;
  v10 = *((_OWORD *)qword_140C231B8 + 3);
  v26[2] = v9;
  v11 = *((_OWORD *)qword_140C231B8 + 4);
  v26[3] = v10;
  v12 = *((_OWORD *)qword_140C231B8 + 5);
  v26[4] = v11;
  v13 = *((_OWORD *)qword_140C231B8 + 6);
  v26[5] = v12;
  v26[6] = v13;
  v26[7] = *((_OWORD *)qword_140C231B8 + 7);
  v14 = *((_OWORD *)qword_140C231B8 + 9);
  v26[8] = *((_OWORD *)qword_140C231B8 + 8);
  v15 = *((_OWORD *)qword_140C231B8 + 10);
  v26[9] = v14;
  v16 = *((_OWORD *)qword_140C231B8 + 11);
  v26[10] = v15;
  v17 = *((_OWORD *)qword_140C231B8 + 12);
  v26[11] = v16;
  v18 = *((_OWORD *)qword_140C231B8 + 13);
  v19 = *((_QWORD *)qword_140C231B8 + 28);
  v26[12] = v17;
  v27 = v18;
  v28 = v19;
  DWORD1(v27) = *a2;
  v20 = sub_1408194D8(1, 0, v26, 0xE8u);
  v22 = 0xFFFFFFFFLL;
  v23 = v20;
  v24 = 1000 * *a2;
  if ( !v24 )
    v24 = -1;
  if ( v24 != dword_140C0C7FC )
  {
    dword_140C0C7FC = v24;
    sub_14083248C();
  }
  sub_140A47CF8(v22, v21);
  if ( v23 >= 0 )
    return 0;
  return (unsigned int)v23;
}
