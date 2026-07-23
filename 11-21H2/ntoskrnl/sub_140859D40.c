/*
 * XREFs of sub_140859D40 @ 0x140859D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140859D40(__int64 *a1, unsigned int *a2, int a3)
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
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  int v22; // eax
  char *v23; // rax
  unsigned int v24; // ebx
  __int128 v26; // [rsp+20h] [rbp-108h] BYREF
  __int128 v27; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v28; // [rsp+40h] [rbp-E8h]
  __int128 v29; // [rsp+50h] [rbp-D8h]
  __int128 v30; // [rsp+60h] [rbp-C8h]
  __int128 v31; // [rsp+70h] [rbp-B8h]
  __int128 v32; // [rsp+80h] [rbp-A8h]
  __int128 v33; // [rsp+90h] [rbp-98h]
  __int128 v34; // [rsp+A0h] [rbp-88h]
  __int128 v35; // [rsp+B0h] [rbp-78h]
  __int128 v36; // [rsp+C0h] [rbp-68h]
  __int128 v37; // [rsp+D0h] [rbp-58h]
  __int128 v38; // [rsp+E0h] [rbp-48h]
  __int128 v39; // [rsp+F0h] [rbp-38h]
  __int64 v40; // [rsp+100h] [rbp-28h]

  sub_140A48330((_DWORD)a1);
  v7 = *((_OWORD *)qword_140C231B8 + 1);
  v26 = *(_OWORD *)qword_140C231B8;
  v8 = *((_OWORD *)qword_140C231B8 + 2);
  v27 = v7;
  v9 = *((_OWORD *)qword_140C231B8 + 3);
  v28 = v8;
  v10 = *((_OWORD *)qword_140C231B8 + 4);
  v29 = v9;
  v11 = *((_OWORD *)qword_140C231B8 + 5);
  v30 = v10;
  v12 = *((_OWORD *)qword_140C231B8 + 6);
  v31 = v11;
  v32 = v12;
  v33 = *((_OWORD *)qword_140C231B8 + 7);
  v13 = *((_OWORD *)qword_140C231B8 + 9);
  v34 = *((_OWORD *)qword_140C231B8 + 8);
  v14 = *((_OWORD *)qword_140C231B8 + 10);
  v35 = v13;
  v15 = *((_OWORD *)qword_140C231B8 + 11);
  v36 = v14;
  v16 = *((_OWORD *)qword_140C231B8 + 12);
  v37 = v15;
  v17 = *((_OWORD *)qword_140C231B8 + 13);
  v18 = *((_QWORD *)qword_140C231B8 + 28);
  v38 = v16;
  v39 = v17;
  v40 = v18;
  v19 = *a1;
  v20 = 0x4E3EDD9C7648EFA3LL - *a1;
  if ( *a1 == 0x4E3EDD9C7648EFA3LL )
    v20 = 0x80623829F95066B5uLL - a1[1];
  if ( v20 )
  {
    v20 = 0x47ECAD5096996BC0LL - v19;
    if ( v19 == 0x47ECAD5096996BC0LL )
      v20 = 0xEBD94D87416F3B92uLL - a1[1];
    if ( v20 )
    {
      v20 = 0x459F6E455CA83367LL - v19;
      if ( v19 == 0x459F6E455CA83367LL )
        v20 = 0x36C9011D6B477BA2LL - a1[1];
      if ( v20 )
      {
        v21 = 0x4C0723B199FF10E7LL - v19;
        if ( v19 == 0x4C0723B199FF10E7LL )
          v21 = 0xB441D706325CD1A9uLL - a1[1];
        if ( !v21 && a3 == 4 && a2 )
        {
          v22 = DWORD2(v28);
          if ( *a2 <= 7 )
            v22 = *a2;
          DWORD2(v28) = v22;
        }
        goto LABEL_24;
      }
      v23 = (char *)&v27 + 12;
    }
    else
    {
      v23 = (char *)&v27;
    }
  }
  else
  {
    v23 = (char *)&v26 + 4;
  }
  if ( a3 != 4 || !a2 || (v20 = *a2, (unsigned int)v20 > 8) || (v6 = 333LL, !_bittest((const int *)&v6, v20)) )
  {
    v24 = -1073741811;
    goto LABEL_25;
  }
  *(_QWORD *)(v23 + 4) = 0LL;
  *(_DWORD *)v23 = v20;
LABEL_24:
  v24 = sub_1408194D8(1, 0, &v26, 0xE8u);
LABEL_25:
  sub_140A47CF8(v20, v6);
  return v24;
}
