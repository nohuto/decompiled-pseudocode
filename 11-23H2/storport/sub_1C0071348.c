/*
 * XREFs of sub_1C0071348 @ 0x1C0071348
 * Callers:
 *     sub_1C00142B0 @ 0x1C00142B0 (sub_1C00142B0.c)
 * Callees:
 *     sub_1C001AA4C @ 0x1C001AA4C (sub_1C001AA4C.c)
 *     sub_1C001AAA8 @ 0x1C001AAA8 (sub_1C001AAA8.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

void __fastcall sub_1C0071348(__int64 a1)
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
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp-70h] BYREF
  char *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  char v39[16]; // [rsp+D0h] [rbp-30h] BYREF
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char v44[16]; // [rsp+100h] [rbp+0h] BYREF
  int *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  int *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  _DWORD *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  __int64 v53; // [rsp+150h] [rbp+50h]
  _DWORD v54[2]; // [rsp+158h] [rbp+58h] BYREF
  char v55[16]; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  char v58[16]; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]
  char v61[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  char v64[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  char v67[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 *v68; // [rsp+1F0h] [rbp+F0h]
  __int64 v69; // [rsp+1F8h] [rbp+F8h]
  char v70[16]; // [rsp+200h] [rbp+100h] BYREF
  __int64 *v71; // [rsp+210h] [rbp+110h]
  __int64 v72; // [rsp+218h] [rbp+118h]
  char v73[16]; // [rsp+220h] [rbp+120h] BYREF
  __int64 *v74; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+238h] [rbp+138h]
  char v76[16]; // [rsp+240h] [rbp+140h] BYREF
  __int64 *v77; // [rsp+250h] [rbp+150h]
  __int64 v78; // [rsp+258h] [rbp+158h]

  if ( (unsigned int)dword_1C00930C8 > 5 )
  {
    if ( sub_1C001ABEC(a1, 0x200000000000LL) )
    {
      v2 = *(_WORD **)(v1 + 4656);
      v35 = &v20;
      v37 = v1 + 5000;
      v20 = 2;
      v36 = 1LL;
      v38 = 16LL;
      sub_1C001AA4C((__int64)v39, v2);
      v4 = *(_DWORD *)(v3 + 4212);
      v40 = &v21;
      v22 = *v5;
      v21 = v4;
      v42 = &v22;
      v41 = 4LL;
      v43 = 4LL;
      sub_1C001AAA8((__int64)v44, (_BYTE *)v5 + 8);
      v7 = *(_DWORD *)(v6 + 4);
      v45 = &v23;
      v24 = *(_DWORD *)(v6 + 40);
      v47 = &v24;
      v25 = *(_DWORD *)(v6 + 44);
      v49 = &v25;
      v51 = v54;
      v53 = *(_QWORD *)(v6 + 56);
      v8 = *(unsigned __int16 *)(v6 + 48);
      v23 = v7;
      v54[0] = v8;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 2LL;
      v54[1] = 0;
      sub_1C001AAA8((__int64)v55, (_BYTE *)(v6 + 64));
      v26 = *(_QWORD *)(v9 + 96);
      v56 = &v26;
      v57 = 8LL;
      sub_1C001AAA8((__int64)v58, (_BYTE *)(v9 + 104));
      v27 = *(_QWORD *)(v10 + 136);
      v59 = &v27;
      v60 = 8LL;
      sub_1C001AAA8((__int64)v61, (_BYTE *)(v10 + 144));
      v28 = *(_QWORD *)(v11 + 176);
      v62 = &v28;
      v63 = 8LL;
      sub_1C001AAA8((__int64)v64, (_BYTE *)(v11 + 184));
      v29 = *(_QWORD *)(v12 + 216);
      v65 = &v29;
      v66 = 8LL;
      sub_1C001AAA8((__int64)v67, (_BYTE *)(v12 + 224));
      v30 = *(_QWORD *)(v13 + 256);
      v68 = &v30;
      v69 = 8LL;
      sub_1C001AAA8((__int64)v70, (_BYTE *)(v13 + 264));
      v31 = *(_QWORD *)(v14 + 296);
      v71 = &v31;
      v72 = 8LL;
      sub_1C001AAA8((__int64)v73, (_BYTE *)(v14 + 304));
      v32 = *(_QWORD *)(v15 + 336);
      v74 = &v32;
      v75 = 8LL;
      sub_1C001AAA8((__int64)v76, (_BYTE *)(v15 + 344));
      v17 = *(_QWORD *)(v16 + 376);
      v77 = &v33;
      v33 = v17;
      v78 = 8LL;
      sub_1C001D420(v17, (unsigned __int8 *)dword_1C0085EB3, v18, v19, 0x1Du, &v34);
    }
  }
}
