/*
 * XREFs of sub_1403C0A40 @ 0x1403C0A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 *     sub_140828BC0 @ 0x140828BC0 (sub_140828BC0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1403C0A40(_QWORD *a1, _DWORD *a2, int a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // r10
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD *v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  _OWORD v23[8]; // [rsp+20h] [rbp-F8h] BYREF
  _OWORD v24[4]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v25; // [rsp+E0h] [rbp-38h]
  __int128 v26; // [rsp+F0h] [rbp-28h]
  __int64 v27; // [rsp+100h] [rbp-18h]

  v7 = -1073741811;
  v8 = 0x4E07C8A83C0BC021LL - *a1;
  if ( *a1 == 0x4E07C8A83C0BC021LL )
    v8 = 0x7E2BCBCB146B73A9LL - a1[1];
  if ( !v8 && a3 == 4 && a2 )
  {
    sub_140A48330();
    v9 = *((_OWORD *)qword_140C231B8 + 1);
    v23[0] = *(_OWORD *)qword_140C231B8;
    v10 = *((_OWORD *)qword_140C231B8 + 2);
    v23[1] = v9;
    v11 = *((_OWORD *)qword_140C231B8 + 3);
    v23[2] = v10;
    v12 = *((_OWORD *)qword_140C231B8 + 4);
    v23[3] = v11;
    v13 = *((_OWORD *)qword_140C231B8 + 5);
    v23[4] = v12;
    v14 = *((_OWORD *)qword_140C231B8 + 6);
    v23[5] = v13;
    v23[6] = v14;
    v15 = v24;
    v23[7] = *((_OWORD *)qword_140C231B8 + 7);
    v16 = *((_OWORD *)qword_140C231B8 + 9);
    v24[0] = *((_OWORD *)qword_140C231B8 + 8);
    v17 = *((_OWORD *)qword_140C231B8 + 10);
    v24[1] = v16;
    v18 = *((_OWORD *)qword_140C231B8 + 11);
    v24[2] = v17;
    v19 = *((_OWORD *)qword_140C231B8 + 12);
    v24[3] = v18;
    v20 = *((_OWORD *)qword_140C231B8 + 13);
    v21 = *((_QWORD *)qword_140C231B8 + 28);
    v25 = v19;
    v26 = v20;
    v27 = v21;
    LOBYTE(v15) = 1;
    LODWORD(v25) = *a2;
    v7 = ((__int64 (__fastcall *)(_OWORD *, _QWORD, _OWORD *, __int64))sub_1408194D8)(v15, 0LL, v23, 232LL);
    sub_140A47CF8();
    sub_140828BC0(a1, a2, 4LL, a4);
  }
  return v7;
}
