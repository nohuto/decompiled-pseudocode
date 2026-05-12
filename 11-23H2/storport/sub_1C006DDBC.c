/*
 * XREFs of sub_1C006DDBC @ 0x1C006DDBC
 * Callers:
 *     sub_1C00142B0 @ 0x1C00142B0 (sub_1C00142B0.c)
 * Callees:
 *     sub_1C001175C @ 0x1C001175C (sub_1C001175C.c)
 *     sub_1C001AA4C @ 0x1C001AA4C (sub_1C001AA4C.c)
 *     sub_1C001AAA8 @ 0x1C001AAA8 (sub_1C001AAA8.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

void __fastcall sub_1C006DDBC(__int64 a1)
{
  __int64 v1; // rcx
  _WORD *v2; // rdx
  __int64 v3; // r11
  int v4; // ecx
  int *v5; // r10
  __int64 v6; // r10
  int v7; // ecx
  int v8; // eax
  __int64 v9; // r10
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+28h] [rbp-D8h]
  char v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+A0h] [rbp-60h] BYREF
  char *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  char v41[16]; // [rsp+E0h] [rbp-20h] BYREF
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  char v46[16]; // [rsp+110h] [rbp+10h] BYREF
  int *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  int *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  _DWORD *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  __int64 v55; // [rsp+160h] [rbp+60h]
  _DWORD v56[2]; // [rsp+168h] [rbp+68h] BYREF
  char v57[16]; // [rsp+170h] [rbp+70h] BYREF
  __int64 *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  char v60[16]; // [rsp+190h] [rbp+90h] BYREF
  __int64 *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]
  char v63[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 *v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  char v66[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]
  char v69[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 *v70; // [rsp+200h] [rbp+100h]
  __int64 v71; // [rsp+208h] [rbp+108h]
  char v72[16]; // [rsp+210h] [rbp+110h] BYREF
  __int64 *v73; // [rsp+220h] [rbp+120h]
  __int64 v74; // [rsp+228h] [rbp+128h]
  char v75[16]; // [rsp+230h] [rbp+130h] BYREF
  __int64 *v76; // [rsp+240h] [rbp+140h]
  __int64 v77; // [rsp+248h] [rbp+148h]
  char v78[16]; // [rsp+250h] [rbp+150h] BYREF
  __int64 *v79; // [rsp+260h] [rbp+160h]
  __int64 v80; // [rsp+268h] [rbp+168h]

  if ( (unsigned int)dword_1C00930C8 > 5 )
  {
    if ( sub_1C001ABEC(a1, 0x400000000000LL) )
    {
      v2 = *(_WORD **)(v1 + 4656);
      v37 = &v22;
      v39 = v1 + 5000;
      v22 = 2;
      v38 = 1LL;
      v40 = 16LL;
      sub_1C001AA4C((__int64)v41, v2);
      v4 = *(_DWORD *)(v3 + 4212);
      v42 = &v23;
      v24 = *v5;
      v23 = v4;
      v44 = &v24;
      v43 = 4LL;
      v45 = 4LL;
      sub_1C001AAA8((__int64)v46, (_BYTE *)v5 + 8);
      v7 = *(_DWORD *)(v6 + 4);
      v47 = &v25;
      v26 = *(_DWORD *)(v6 + 40);
      v49 = &v26;
      v27 = *(_DWORD *)(v6 + 44);
      v51 = &v27;
      v53 = v56;
      v55 = *(_QWORD *)(v6 + 56);
      v8 = *(unsigned __int16 *)(v6 + 48);
      v25 = v7;
      v56[0] = v8;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 2LL;
      v56[1] = 0;
      sub_1C001AAA8((__int64)v57, (_BYTE *)(v6 + 64));
      v28 = *(_QWORD *)(v9 + 96);
      v58 = &v28;
      v59 = 8LL;
      sub_1C001AAA8((__int64)v60, (_BYTE *)(v9 + 104));
      v29 = *(_QWORD *)(v10 + 136);
      v61 = &v29;
      v62 = 8LL;
      sub_1C001AAA8((__int64)v63, (_BYTE *)(v10 + 144));
      v30 = *(_QWORD *)(v11 + 176);
      v64 = &v30;
      v65 = 8LL;
      sub_1C001AAA8((__int64)v66, (_BYTE *)(v11 + 184));
      v31 = *(_QWORD *)(v12 + 216);
      v67 = &v31;
      v68 = 8LL;
      sub_1C001AAA8((__int64)v69, (_BYTE *)(v12 + 224));
      v32 = *(_QWORD *)(v13 + 256);
      v70 = &v32;
      v71 = 8LL;
      sub_1C001AAA8((__int64)v72, (_BYTE *)(v13 + 264));
      v33 = *(_QWORD *)(v14 + 296);
      v73 = &v33;
      v74 = 8LL;
      sub_1C001AAA8((__int64)v75, (_BYTE *)(v14 + 304));
      v34 = *(_QWORD *)(v15 + 336);
      v76 = &v34;
      v77 = 8LL;
      sub_1C001AAA8((__int64)v78, (_BYTE *)(v15 + 344));
      v17 = *(_QWORD *)(v16 + 376);
      v79 = &v35;
      v35 = v17;
      v80 = 8LL;
      sub_1C001175C(v17, (unsigned __int8 *)dword_1C008648D, v18, v19, v20, v21, 0x1Du, &v36);
    }
  }
}
