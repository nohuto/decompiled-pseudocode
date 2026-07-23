/*
 * XREFs of sub_140861FA0 @ 0x140861FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140861FA0(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  _OWORD v22[5]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v23; // [rsp+70h] [rbp-A8h]
  __int128 v24; // [rsp+80h] [rbp-98h]
  __int128 v25; // [rsp+90h] [rbp-88h]
  __int128 v26; // [rsp+A0h] [rbp-78h]
  __int128 v27; // [rsp+B0h] [rbp-68h]
  __int128 v28; // [rsp+C0h] [rbp-58h]
  __int128 v29; // [rsp+D0h] [rbp-48h]
  __int128 v30; // [rsp+E0h] [rbp-38h]
  __int128 v31; // [rsp+F0h] [rbp-28h]
  __int64 v32; // [rsp+100h] [rbp-18h]

  sub_140A48330((_DWORD)a1);
  v7 = *((_OWORD *)qword_140C231B8 + 1);
  v22[0] = *(_OWORD *)qword_140C231B8;
  v8 = *((_OWORD *)qword_140C231B8 + 2);
  v22[1] = v7;
  v9 = *((_OWORD *)qword_140C231B8 + 3);
  v22[2] = v8;
  v10 = *((_OWORD *)qword_140C231B8 + 4);
  v22[3] = v9;
  v11 = *((_OWORD *)qword_140C231B8 + 5);
  v22[4] = v10;
  v12 = *((_OWORD *)qword_140C231B8 + 6);
  v23 = v11;
  v24 = v12;
  v25 = *((_OWORD *)qword_140C231B8 + 7);
  v13 = *((_OWORD *)qword_140C231B8 + 9);
  v26 = *((_OWORD *)qword_140C231B8 + 8);
  v14 = *((_OWORD *)qword_140C231B8 + 10);
  v27 = v13;
  v15 = *((_OWORD *)qword_140C231B8 + 11);
  v28 = v14;
  v16 = *((_OWORD *)qword_140C231B8 + 12);
  v29 = v15;
  v17 = *((_OWORD *)qword_140C231B8 + 13);
  v18 = *((_QWORD *)qword_140C231B8 + 28);
  v30 = v16;
  v31 = v17;
  v32 = v18;
  v19 = 0x47D6100D0E796BDBLL - *a1;
  if ( *a1 == 0x47D6100D0E796BDBLL )
    v19 = 0x511FA5DAD2F7D5A2LL - a1[1];
  if ( !v19 && a3 == 4 && a2 )
  {
    LODWORD(v23) = *a2;
    v20 = sub_1408194D8(1, 0, v22, 0xE8u);
  }
  else
  {
    v20 = -1073741811;
  }
  sub_140A47CF8(v19, v6);
  return v20;
}
