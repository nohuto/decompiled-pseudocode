/*
 * XREFs of sub_14099C0B0 @ 0x14099C0B0
 * Callers:
 *     sub_140806090 @ 0x140806090 (sub_140806090.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14099C0B0(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rdi
  unsigned int v5; // edx
  __int128 *v6; // rcx
  __int64 v7; // r8
  char *v8; // rax
  int v9; // r9d
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  ULONGLONG v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  REGHANDLE v23; // rcx
  REGHANDLE v24; // rsi
  unsigned int v25; // edi
  char v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-CCh] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int128 v40; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 *v41; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  int *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  _DWORD *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  _DWORD v50[2]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  __int64 v53; // [rsp+120h] [rbp+20h]
  _DWORD v54[2]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD *v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 v57; // [rsp+140h] [rbp+40h]
  _DWORD v58[2]; // [rsp+148h] [rbp+48h] BYREF
  int *v59; // [rsp+150h] [rbp+50h]
  __int64 v60; // [rsp+158h] [rbp+58h]
  __int64 *v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h]
  __int64 *v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]
  __int64 *v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+188h] [rbp+88h]
  __int64 v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+198h] [rbp+98h]
  __int64 v69; // [rsp+1A0h] [rbp+A0h]
  int v70; // [rsp+1A8h] [rbp+A8h]
  int v71; // [rsp+1ACh] [rbp+ACh]
  void *v72; // [rsp+1B0h] [rbp+B0h]
  __int64 v73; // [rsp+1B8h] [rbp+B8h]
  __int64 v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C8h] [rbp+C8h]
  void *v76; // [rsp+1D0h] [rbp+D0h]
  __int64 v77; // [rsp+1D8h] [rbp+D8h]
  __int64 v78; // [rsp+1E0h] [rbp+E0h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h]
  int *v80; // [rsp+1F0h] [rbp+F0h]
  __int64 v81; // [rsp+1F8h] [rbp+F8h]
  __int64 *v82; // [rsp+200h] [rbp+100h]
  __int64 v83; // [rsp+208h] [rbp+108h]
  __int64 v84; // [rsp+210h] [rbp+110h]
  __int64 v85; // [rsp+218h] [rbp+118h]
  __int64 v86; // [rsp+220h] [rbp+120h]
  __int64 v87; // [rsp+228h] [rbp+128h]
  __int64 *v88; // [rsp+230h] [rbp+130h]
  __int64 v89; // [rsp+238h] [rbp+138h]
  __int64 v90; // [rsp+240h] [rbp+140h]
  __int64 v91; // [rsp+248h] [rbp+148h]
  __int64 v92; // [rsp+250h] [rbp+150h]
  __int64 v93; // [rsp+258h] [rbp+158h]
  __int64 *v94; // [rsp+260h] [rbp+160h]
  __int64 v95; // [rsp+268h] [rbp+168h]
  __int64 v96; // [rsp+270h] [rbp+170h]
  __int64 v97; // [rsp+278h] [rbp+178h]
  __int64 v98; // [rsp+280h] [rbp+180h]
  __int64 v99; // [rsp+288h] [rbp+188h]
  __int64 *v100; // [rsp+290h] [rbp+190h]
  __int64 v101; // [rsp+298h] [rbp+198h]
  __int64 v102; // [rsp+2A0h] [rbp+1A0h]
  __int64 v103; // [rsp+2A8h] [rbp+1A8h]
  __int64 v104; // [rsp+2B0h] [rbp+1B0h]
  __int64 v105; // [rsp+2B8h] [rbp+1B8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int *v107; // [rsp+2D0h] [rbp+1D0h]
  __int64 v108; // [rsp+2D8h] [rbp+1D8h]
  __int64 v109; // [rsp+2E0h] [rbp+1E0h]
  __int64 v110; // [rsp+2E8h] [rbp+1E8h]
  __int64 v111; // [rsp+2F0h] [rbp+1F0h]
  __int64 v112; // [rsp+2F8h] [rbp+1F8h]
  __int64 v113; // [rsp+300h] [rbp+200h]
  __int64 v114; // [rsp+308h] [rbp+208h]
  unsigned int *v115; // [rsp+310h] [rbp+210h]
  __int64 v116; // [rsp+318h] [rbp+218h]
  __int64 v117; // [rsp+320h] [rbp+220h]
  unsigned int v118; // [rsp+328h] [rbp+228h]
  int v119; // [rsp+32Ch] [rbp+22Ch]
  __int64 v120; // [rsp+330h] [rbp+230h]
  __int64 v121; // [rsp+338h] [rbp+238h]

  v27 = 0;
  v26 = 0;
  v4 = 0LL;
  DestinationString = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  RtlInitUnicodeString(&DestinationString, &word_140867F00);
  if ( *(_DWORD *)a2 != 5 )
  {
    v5 = 1;
    *(_QWORD *)&v40 = a2 + 392;
LABEL_11:
    memset64((char *)&v40 + 8 * v5, (unsigned __int64)&DestinationString, 3 - v5);
    v4 = v41;
    goto LABEL_12;
  }
  v5 = *(_DWORD *)(a2 + 408);
  if ( v5 <= 3 )
  {
    if ( !v5 )
      goto LABEL_8;
  }
  else
  {
    v5 = 3;
  }
  v6 = &v40;
  v7 = v5;
  do
  {
    v8 = (char *)v4 + a2 + 416;
    v4 += 8;
    *(_QWORD *)v6 = v8;
    v6 = (__int128 *)((char *)v6 + 8);
    --v7;
  }
  while ( v7 );
  v4 = v41;
LABEL_8:
  if ( v5 < 3 )
    goto LABEL_11;
LABEL_12:
  if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
  {
    v31 = a1;
    v43 = &v31;
    v44 = 8LL;
    v45 = &v28;
    v28 = v9;
    v46 = 4LL;
    v10 = *(unsigned __int16 *)v40;
    v11 = *(_QWORD *)(v40 + 8);
    v47 = v50;
    v49 = v11;
    v50[0] = v10;
    v48 = 2LL;
    v50[1] = 0;
    v12 = *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8LL);
    v13 = (unsigned __int16)**((_WORD **)&v40 + 1);
    v51 = v54;
    v53 = v12;
    v54[0] = v13;
    v52 = 2LL;
    v54[1] = 0;
    LODWORD(v12) = *v4;
    v57 = *((_QWORD *)v4 + 1);
    v29 = *(_DWORD *)(a2 + 12);
    v59 = &v29;
    v32 = *(_QWORD *)(a2 + 16);
    v61 = &v32;
    v33 = *(_QWORD *)(a2 + 24);
    v63 = &v33;
    v34 = *(_QWORD *)(a2 + 32);
    v65 = &v34;
    v69 = a2 + 466;
    v58[0] = v12;
    v14 = *(unsigned __int16 *)(a2 + 464);
    v67 = a2 + 464;
    v55 = v58;
    v56 = 2LL;
    v58[1] = 0;
    v60 = 4LL;
    v72 = &unk_140C0BD50;
    v62 = 8LL;
    v74 = a2 + 40;
    v76 = &unk_140C0BDA0;
    v78 = a2 + 76;
    v30 = *(_DWORD *)(a2 + 4);
    v80 = &v30;
    v64 = 8LL;
    v66 = 8LL;
    v68 = 2LL;
    v70 = 10 * v14;
    v71 = 0;
    v73 = 80LL;
    v75 = 36LL;
    v77 = 96LL;
    v79 = 44LL;
    v35 = *(_QWORD *)(a2 + 120);
    v81 = 4LL;
    v82 = &v35;
    v83 = 8LL;
    v84 = a2 + 128;
    v85 = 20LL;
    v86 = a2 + 152;
    v36 = *(_QWORD *)(a2 + 192);
    v88 = &v36;
    v90 = a2 + 200;
    v92 = a2 + 224;
    v37 = *(_QWORD *)(a2 + 264);
    v94 = &v37;
    v96 = a2 + 272;
    v98 = a2 + 296;
    v38 = *(_QWORD *)(a2 + 336);
    v100 = &v38;
    v102 = a2 + 344;
    v104 = a2 + 360;
    v87 = 40LL;
    v89 = 8LL;
    v91 = 20LL;
    v93 = 40LL;
    v95 = 8LL;
    v97 = 20LL;
    v99 = 40LL;
    v101 = 8LL;
    v103 = 12LL;
    v105 = 24LL;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140031A38, 0LL, 0LL, 0x21u, &v42);
  }
  if ( byte_140C5AE16 && EtwEventEnabled(CallbackContext, &stru_14003C0F8) )
  {
    v15 = *(unsigned __int16 *)(a2 + 392);
    v16 = 8;
    v26 = qword_140C21FA8;
    UserData.Ptr = (ULONGLONG)&v26;
    v107 = (unsigned int *)(a2 + 12);
    v109 = a2 + 16;
    v111 = a2 + 24;
    v113 = a2 + 32;
    v27 = v15 >> 1;
    v115 = &v27;
    v117 = *(_QWORD *)(a2 + 400);
    v118 = v15;
    v17 = *(unsigned __int16 *)(a2 + 464);
    *(_QWORD *)&UserData.Size = 1LL;
    v108 = 4LL;
    v110 = 8LL;
    v112 = 8LL;
    v114 = 8LL;
    v116 = 4LL;
    v119 = 0;
    v120 = a2 + 464;
    v121 = 2LL;
    if ( (_WORD)v17 )
    {
      v18 = a2 + 468;
      v19 = v17;
      do
      {
        v20 = 2LL * v16;
        *(&UserData.Ptr + v20) = v18 - 2;
        *((_QWORD *)&UserData.Size + v20) = 2LL;
        v21 = 2LL * (v16 + 1);
        v16 += 2;
        *(&UserData.Ptr + v21) = v18;
        v18 += 10LL;
        *((_QWORD *)&UserData.Size + v21) = 8LL;
        --v19;
      }
      while ( v19 );
    }
    v22 = 2LL * v16;
    *(&UserData.Ptr + v22) = (ULONGLONG)&qword_140C21FA8;
    v23 = CallbackContext;
    *((_QWORD *)&UserData.Size + v22) = 8LL;
    EtwWrite(v23, &stru_14003C0F8, 0LL, v16 + 1, &UserData);
  }
  if ( byte_140C5AE14 )
  {
    v24 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140039950) )
    {
      v25 = *(unsigned __int16 *)(a2 + 392);
      UserData.Ptr = a2 + 8;
      *(_QWORD *)&UserData.Size = 4LL;
      v27 = v25 >> 1;
      v108 = 4LL;
      v107 = &v27;
      v109 = *(_QWORD *)(a2 + 400);
      v110 = v25;
      EtwWrite(v24, &stru_140039950, 0LL, 3u, &UserData);
    }
  }
}
