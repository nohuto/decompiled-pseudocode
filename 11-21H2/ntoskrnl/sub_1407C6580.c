/*
 * XREFs of sub_1407C6580 @ 0x1407C6580
 * Callers:
 *     sub_1407C5CB0 @ 0x1407C5CB0 (sub_1407C5CB0.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_1402E1260 @ 0x1402E1260 (sub_1402E1260.c)
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     sub_140417378 @ 0x140417378 (sub_140417378.c)
 *     sub_14069A7B0 @ 0x14069A7B0 (sub_14069A7B0.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C4990 @ 0x1407C4990 (sub_1407C4990.c)
 *     sub_1407C8130 @ 0x1407C8130 (sub_1407C8130.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14087D6D0 @ 0x14087D6D0 (sub_14087D6D0.c)
 */

__int64 __fastcall sub_1407C6580(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7)
{
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int i; // ecx
  char v18; // r12
  signed int v19; // edi
  signed int v20; // eax
  unsigned int v21; // edx
  unsigned int j; // ecx
  signed int v23; // eax
  __int64 v24; // rax
  signed int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // edi
  int v28; // r15d
  signed int v29; // eax
  signed int v30; // eax
  signed int v31; // eax
  __int64 v32; // rax
  char v33; // cl
  int v34; // ecx
  __int16 v35; // ax
  signed int v36; // eax
  __int16 v37; // ax
  __int64 v38; // rax
  signed int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // r12
  signed int v44; // eax
  signed int v45; // eax
  signed int v46; // eax
  signed int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r15
  unsigned __int16 v50; // cx
  int v51; // eax
  signed int v52; // eax
  __int16 v53; // cx
  signed int v54; // eax
  signed int v55; // eax
  int v56; // edx
  int v57; // eax
  __int64 v58; // r9
  bool v59; // zf
  __int64 *v60; // rdx
  __int64 v61; // r13
  unsigned int v62; // edi
  __int64 v63; // rax
  __int64 v64; // r15
  signed int v65; // eax
  int v66; // r15d
  signed int v67; // eax
  unsigned int v68; // r13d
  signed int v69; // eax
  signed int v70; // eax
  unsigned int v71; // edi
  __int64 v72; // rax
  _DWORD *v73; // r13
  unsigned int v74; // eax
  _RTL_BITMAP *v75; // r14
  __int16 *v76; // rax
  __int16 *v77; // r10
  unsigned int v78; // r8d
  __int16 v79; // dx
  int v80; // r9d
  int v81; // eax
  int v82; // ecx
  int v83; // eax
  int v84; // eax
  int v85; // r12d
  int v86; // r15d
  __int16 *v87; // rdi
  _WORD *v88; // rax
  _WORD *v89; // r14
  unsigned int v90; // edx
  __int16 v91; // r8
  int v92; // r9d
  int v93; // eax
  int v94; // ecx
  int v95; // eax
  bool v96; // cl
  signed int v97; // eax
  bool v98; // al
  signed int v99; // eax
  int v100; // eax
  ULONG_PTR v101; // [rsp+20h] [rbp-81h]
  unsigned int v102; // [rsp+20h] [rbp-81h]
  unsigned int v103; // [rsp+20h] [rbp-81h]
  __int64 v104; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v105; // [rsp+58h] [rbp-49h]
  __int64 v106; // [rsp+60h] [rbp-41h] BYREF
  __int64 v107; // [rsp+68h] [rbp-39h] BYREF
  __int16 *v108; // [rsp+70h] [rbp-31h]
  __int64 v109; // [rsp+78h] [rbp-29h] BYREF
  __int64 v110; // [rsp+80h] [rbp-21h] BYREF
  __int64 v111; // [rsp+88h] [rbp-19h] BYREF
  __int64 v112; // [rsp+90h] [rbp-11h] BYREF
  __int64 v113; // [rsp+98h] [rbp-9h] BYREF
  unsigned int v114; // [rsp+A0h] [rbp-1h] BYREF
  int v115; // [rsp+A4h] [rbp+3h] BYREF
  unsigned int v116; // [rsp+A8h] [rbp+7h]
  ULONG_PTR BugCheckParameter4; // [rsp+ACh] [rbp+Bh]
  char v120; // [rsp+120h] [rbp+7Fh]

  v109 = 0LL;
  v110 = 0xFFFFFFFFLL;
  v112 = 0xFFFFFFFFLL;
  v106 = 0xFFFFFFFFLL;
  v104 = 0xFFFFFFFFLL;
  v113 = 0xFFFFFFFFLL;
  v120 = 0;
  v108 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, a3, BitMapHeader) )
  {
    sub_14020A890(a7, 0, 14, 0xC000014C, 0);
    return 3221225804LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v13 = sub_1406BF400(BugCheckParameter3, a3, &v112);
  else
    v13 = sub_1407C9820(BugCheckParameter3);
  v14 = v13;
  if ( !v13 )
  {
    sub_14020A890(a7, 0, 14, 0xC000009A, 0x10u);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v13;
  v15 = -4 - *(_DWORD *)(v13 - 4);
  if ( v15 - 76 > 0x410 )
  {
    v102 = 32;
    goto LABEL_463;
  }
  v16 = *(unsigned __int16 *)(v13 + 72);
  if ( !(_WORD)v16 || v16 + 76 > v15 )
  {
    v102 = 48;
    goto LABEL_463;
  }
  if ( (*(_BYTE *)(v13 + 2) & 0x20) != 0 )
  {
    if ( (unsigned __int16)v16 > 0x100u )
    {
      v102 = 53;
      goto LABEL_463;
    }
    if ( !*(_BYTE *)(v13 + 76) )
    {
      v102 = 64;
      goto LABEL_463;
    }
    for ( i = 0; i < v16; ++i )
    {
      if ( *(_BYTE *)(i + v13 + 76) == 92 )
      {
        v102 = 1280;
        goto LABEL_463;
      }
    }
  }
  else
  {
    if ( (unsigned __int16)v16 > 0x200u )
    {
      v102 = 69;
      goto LABEL_463;
    }
    if ( (v16 & 1) != 0 )
    {
      v102 = 80;
      goto LABEL_463;
    }
    if ( !*(_WORD *)(v13 + 76) )
    {
      v102 = 96;
      goto LABEL_463;
    }
    v21 = v16 >> 1;
    for ( j = 0; j < v21; ++j )
    {
      if ( *(_WORD *)(v13 + 2LL * j + 76) == 92 )
      {
        v102 = 1296;
        goto LABEL_463;
      }
    }
  }
  v18 = 1;
  if ( *(_WORD *)v13 != 27502 )
  {
    v120 = 1;
    v19 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
    {
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x90u);
      goto LABEL_465;
    }
    sub_14020A890(a7, 1, 14, 0xC000014C, 0x70u);
    v20 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
    v19 = v20;
    if ( v20 < 0 )
    {
      sub_14020A890(a7, 0, 14, v20, 0x80u);
      goto LABEL_465;
    }
    *(_WORD *)v14 = 27502;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v14 + 13) & 3) != 0 )
  {
    v120 = 1;
    v19 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
    {
      sub_14020A890(a7, 0, 14, 0xC000014C, 0x94u);
      goto LABEL_465;
    }
    sub_14020A890(a7, 1, 14, 0xC000014C, 0x92u);
    v23 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
    v19 = v23;
    if ( v23 < 0 )
    {
      sub_14020A890(a7, 0, 14, v23, 0x96u);
      goto LABEL_465;
    }
    *(_BYTE *)(v14 + 13) &= 0xFCu;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  if ( a4 == -1 )
  {
    if ( (*(_BYTE *)(v14 + 13) & 1) != 0 )
    {
      v120 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0x1ECu);
        goto LABEL_465;
      }
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x1E4u);
      v30 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
      v19 = v30;
      if ( v30 < 0 )
      {
        sub_14020A890(a7, 0, 14, v30, 0x1E8u);
        goto LABEL_465;
      }
      *(_BYTE *)(v14 + 13) = *(_BYTE *)(v14 + 13) & 0xFC | 2;
      goto LABEL_67;
    }
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v24 = sub_1406BF400(BugCheckParameter3, a4, &v106);
    else
      v24 = sub_1407C9820(BugCheckParameter3);
    if ( (*(_BYTE *)(v24 + 13) & 3) == 3 && (((*(_BYTE *)(v14 + 13) & 3) - 1) & 0xFD) != 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v106);
      else
        sub_1407C97C0(BugCheckParameter3, &v106);
      v120 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0x9Cu);
        goto LABEL_465;
      }
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x98u);
      v25 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
      v19 = v25;
      if ( v25 < 0 )
      {
        sub_14020A890(a7, 0, 14, v25, 0x9Au);
        goto LABEL_465;
      }
      *(_BYTE *)(v14 + 13) |= 3u;
LABEL_67:
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
      goto LABEL_68;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v106);
    else
      sub_1407C97C0(BugCheckParameter3, &v106);
  }
LABEL_68:
  v26 = *(unsigned __int16 *)(v14 + 74);
  v27 = *(_DWORD *)(v14 + 48);
  v28 = *(_DWORD *)(v14 + 44);
  v116 = *(_DWORD *)(v14 + 36);
  LODWORD(BugCheckParameter4) = *(_DWORD *)(v14 + 40);
  v105 = v26;
  if ( !v26 )
  {
    if ( v27 != -1 )
    {
      v19 = -1073741492;
      v120 = 1;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0xE4u);
        goto LABEL_465;
      }
      sub_14020A890(a7, 1, 14, 0xC000014C, 0xE8u);
      v39 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
      v19 = v39;
      if ( v39 < 0 )
      {
        sub_14020A890(a7, 1, 14, v39, 0xECu);
        goto LABEL_465;
      }
      *(_DWORD *)(v14 + 48) = -1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
      goto LABEL_110;
    }
    goto LABEL_109;
  }
  if ( v27 == -1 )
  {
    v19 = -1073741492;
    v120 = 1;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
    {
      sub_14020A890(a7, 0, 14, 0xC000014C, 0x9Du);
      goto LABEL_465;
    }
    sub_14020A890(a7, 0, 14, 0xC000014C, 0x9Bu);
    v29 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
    v19 = v29;
    if ( v29 < 0 )
    {
      sub_14020A890(a7, 0, 14, v29, 0x9Fu);
      goto LABEL_465;
    }
    v105 = 0;
    *(_WORD *)(v14 + 74) = 0;
    goto LABEL_110;
  }
  if ( (*(_BYTE *)(v14 + 13) & 3) == 1 )
  {
    sub_14020A890(a7, 1, 14, 0xC000014C, 0x9Eu);
    goto LABEL_91;
  }
  if ( (unsigned __int8)sub_1407C8130(BugCheckParameter3, v27, BitMapHeader) )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v32 = sub_1406BF400(BugCheckParameter3, v27, &v113);
    else
      v32 = sub_1407C9820(BugCheckParameter3);
    if ( !v32 )
    {
      v19 = -1073741670;
      sub_14020A890(a7, 0, 14, 0xC000009A, 0xD0u);
      goto LABEL_465;
    }
    v33 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
    if ( v105 > -4 - *(_DWORD *)(v32 - 4) )
    {
      if ( v33 )
        sub_1406BF450(BugCheckParameter3, &v113);
      else
        sub_1407C97C0(BugCheckParameter3, &v113);
      sub_14020A890(a7, 1, 14, 0xC000014C, 0xE0u);
      goto LABEL_91;
    }
    if ( v33 )
      sub_1406BF450(BugCheckParameter3, &v113);
    else
      sub_1407C97C0(BugCheckParameter3, &v113);
LABEL_109:
    v18 = v120;
    goto LABEL_110;
  }
LABEL_91:
  if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
  {
    sub_14020A890(a7, 0, 14, 0xC000014C, 0xC0u);
LABEL_128:
    v19 = -1073741492;
    goto LABEL_465;
  }
  sub_14020A890(a7, 1, 14, 0xC000014C, 0xA0u);
  v31 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
  v19 = v31;
  if ( v31 < 0 )
  {
    sub_14020A890(a7, 0, 14, v31, 0xB0u);
    goto LABEL_465;
  }
  v120 = 1;
  *(_WORD *)(v14 + 74) = 0;
  *(_DWORD *)(v14 + 48) = -1;
  v38 = *(_QWORD *)(BugCheckParameter3 + 64);
  v105 = 0;
  *(_DWORD *)(v38 + 4088) |= 4u;
LABEL_110:
  if ( v28 == -1 )
  {
    sub_14020A890(a7, 1, 14, 0xC000014C, 0x100u);
    goto LABEL_141;
  }
  v34 = a2;
  if ( a4 == -1 )
  {
    v35 = *(_WORD *)(v14 + 2);
    if ( (v35 & 0x50) == 0 )
    {
      v120 = v18;
      if ( (v35 & 2) == 0 )
        goto LABEL_199;
      v18 = 1;
      v19 = -1073741492;
      v120 = 1;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0x1E0u);
        goto LABEL_465;
      }
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x1C0u);
      v36 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
      v19 = v36;
      if ( v36 < 0 )
      {
        sub_14020A890(a7, 0, 14, v36, 0x1D0u);
        goto LABEL_465;
      }
      v37 = -3;
      goto LABEL_124;
    }
    v102 = 432;
LABEL_463:
    v19 = -1073741492;
    sub_14020A890(a7, 0, 14, 0xC000014C, v102);
    goto LABEL_465;
  }
  if ( (a2 & 0x20000) == 0 && (BYTE3(NlsMbOemCodePageTag) || (dword_140C4986C & 6) != 0) && a5 )
    goto LABEL_142;
  while ( 1 )
  {
    if ( *(_DWORD *)(v14 + 16) != a4 )
    {
      v18 = 1;
      v120 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0x160u);
        goto LABEL_465;
      }
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x140u);
      v47 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
      v19 = v47;
      if ( v47 < 0 )
      {
        sub_14020A890(a7, 0, 14, v47, 0x150u);
        goto LABEL_465;
      }
      *(_DWORD *)(v14 + 16) = a4;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v48 = sub_1406BF400(BugCheckParameter3, a4, &v106);
    else
      v48 = sub_1407C9820(BugCheckParameter3);
    v49 = v48;
    if ( !v48 )
    {
      v19 = -1073741670;
      sub_14020A890(a7, 0, 14, 0xC000009A, 0x170u);
      goto LABEL_465;
    }
    v50 = 2 * *(_WORD *)(v14 + 72);
    v51 = *(_DWORD *)(v48 + 52);
    if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
      v50 = *(_WORD *)(v14 + 72);
    if ( (unsigned __int16)v51 < (unsigned int)v50 )
    {
      v18 = 1;
      v120 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0x172u);
        goto LABEL_206;
      }
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x174u);
      v52 = sub_14087D6D0(BugCheckParameter3, a4, 0LL);
      v19 = v52;
      if ( v52 < 0 )
      {
        sub_14020A890(a7, 1, 14, v52, 0x176u);
LABEL_206:
        v59 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
        v60 = &v106;
        goto LABEL_446;
      }
      v53 = 2 * *(_WORD *)(v14 + 72);
      if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
        v53 = *(_WORD *)(v14 + 72);
      *(_WORD *)(v49 + 52) = v53;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( *(_DWORD *)(v49 + 56) < v105 )
    {
      v18 = 1;
      v120 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0x178u);
        goto LABEL_206;
      }
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x17Au);
      v54 = sub_14087D6D0(BugCheckParameter3, a4, 0LL);
      v19 = v54;
      if ( v54 < 0 )
      {
        sub_14020A890(a7, 0, 14, v54, 0x17Cu);
        goto LABEL_206;
      }
      *(_DWORD *)(v49 + 56) = v105;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v106);
    else
      sub_1407C97C0(BugCheckParameter3, &v106);
    if ( (*(_BYTE *)(v14 + 2) & 0xE) != 0 )
    {
      v18 = 1;
      v120 = 1;
      v19 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0x1A0u);
        goto LABEL_465;
      }
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x180u);
      v55 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
      v19 = v55;
      if ( v55 < 0 )
      {
        sub_14020A890(a7, 0, 14, v55, 0x190u);
        goto LABEL_465;
      }
      v37 = -15;
LABEL_124:
      *(_WORD *)(v14 + 2) &= v37;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
LABEL_199:
    v56 = *(_DWORD *)(v14 + 44);
    v114 = 0;
    v115 = 0;
    if ( sub_140346D80(BugCheckParameter3, v56, &v114) )
      break;
LABEL_202:
    sub_14020A890(a7, 1, 14, 0xC000014C, 0x1F0u);
LABEL_141:
    v34 = a2;
LABEL_142:
    if ( (v34 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
    {
      sub_14020A890(a7, 0, 14, 0xC000014C, 0x130u);
      goto LABEL_128;
    }
    v111 = 0xFFFFFFFFLL;
    v107 = 0xFFFFFFFFLL;
    if ( a4 == -1 )
    {
      v102 = 272;
      goto LABEL_463;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v40 = sub_1406BF400(BugCheckParameter3, a4, &v111);
    else
      v40 = sub_1407C9820(BugCheckParameter3);
    v41 = v40;
    if ( !v40 )
    {
      v19 = -1073741670;
      sub_14020A890(a7, 0, 14, 0xC000009A, 0x114u);
      goto LABEL_465;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v42 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v40 + 44), &v107);
    else
      v42 = sub_1407C9820(BugCheckParameter3);
    v43 = v42;
    if ( !v42 )
    {
      v19 = -1073741670;
      sub_14020A890(a7, 0, 14, 0xC000009A, 0x118u);
      v60 = &v111;
      goto LABEL_445;
    }
    v44 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
    v19 = v44;
    if ( v44 < 0 )
    {
      sub_14020A890(a7, 0, 14, v44, 0x11Cu);
      goto LABEL_453;
    }
    v45 = sub_14087D6D0(BugCheckParameter3, *(unsigned int *)(v41 + 44), 0LL);
    v19 = v45;
    if ( v45 < 0 )
    {
      sub_14020A890(a7, 0, 14, v45, 0x120u);
      goto LABEL_453;
    }
    v46 = sub_140417378(v43, BugCheckParameter3, *(_DWORD *)(v41 + 44));
    v19 = v46;
    if ( v46 < 0 )
    {
      sub_14020A890(a7, 0, 14, v46, 0x124u);
LABEL_453:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v107);
      else
        sub_1407C97C0(BugCheckParameter3, &v107);
      v60 = &v111;
LABEL_445:
      v59 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
LABEL_446:
      if ( v59 )
        sub_1407C97C0(BugCheckParameter3, v60);
      else
        sub_1406BF450(BugCheckParameter3, v60);
      goto LABEL_465;
    }
    *(_DWORD *)(v14 + 44) = *(_DWORD *)(v41 + 44);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v107);
    else
      sub_1407C97C0(BugCheckParameter3, &v107);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v111);
    else
      sub_1407C97C0(BugCheckParameter3, &v111);
    v18 = 1;
    v120 = 1;
  }
  v57 = sub_1402E1260(
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v114 + 8) + 28LL),
          1,
          &v115);
  if ( v57 < 0 )
  {
    if ( v57 != -1073741275 )
    {
      v19 = -1073741492;
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x1F4u);
      goto LABEL_465;
    }
    goto LABEL_202;
  }
  *(_DWORD *)(v58 + 28) = v115;
  if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
  {
    v66 = a2;
    v18 = 1;
    v120 = 1;
    v19 = -1073741492;
    v105 = a2 & 0x20000;
    if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
    {
      sub_14020A890(a7, 0, 14, 0xC000014C, 0x288u);
      goto LABEL_465;
    }
    v70 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
    v19 = v70;
    if ( v70 < 0 )
    {
      sub_14020A890(a7, 0, 14, v70, 0x28Cu);
      goto LABEL_465;
    }
    *(_DWORD *)(v14 + 36) = 0;
    *(_WORD *)(v14 + 2) &= ~0x40u;
    *(_DWORD *)(v14 + 40) = -1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v61 = v116;
    if ( !v116 )
      goto LABEL_233;
    if ( (*(_BYTE *)(v14 + 13) & 3) == 1 )
    {
      v103 = 504;
LABEL_218:
      v19 = -1073741492;
      sub_14020A890(a7, 1, 14, 0xC000014C, v103);
      goto LABEL_236;
    }
    v62 = BugCheckParameter4;
    if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, (unsigned int)BugCheckParameter4, BitMapHeader) )
    {
      v19 = -1073741492;
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x200u);
      goto LABEL_236;
    }
    v107 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v63 = sub_1406BF400(BugCheckParameter3, v62, &v107);
    else
      v63 = sub_1407C9820(BugCheckParameter3);
    v64 = v63;
    if ( !v63 )
    {
      v19 = -1073741670;
      sub_14020A890(a7, 0, 14, 0xC000009A, 0x210u);
      goto LABEL_465;
    }
    if ( (unsigned __int64)(4 * v61) > 0xFFFFFFFF || 4 * (int)v61 > (unsigned int)(-4 - *(_DWORD *)(v63 - 4)) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v107);
      else
        sub_1407C97C0(BugCheckParameter3, &v107);
      v103 = 544;
      goto LABEL_218;
    }
    LODWORD(v101) = a3;
    v19 = sub_1407C4990(
            BugCheckParameter3,
            (*(_BYTE *)(v14 + 2) & 0x10) != 0,
            v63,
            v61,
            v101,
            a2,
            BitMapHeader,
            a7,
            &v109,
            (unsigned int *)&v109 + 1);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v107);
    else
      sub_1407C97C0(BugCheckParameter3, &v107);
    if ( v19 == -2147483606 )
    {
      v18 = 1;
      v120 = 1;
      goto LABEL_233;
    }
    if ( v19 >= 0 )
      goto LABEL_233;
    if ( v19 != -1073741492 )
      goto LABEL_465;
    if ( a7 )
      *(_QWORD *)(a7 + 248) = v64;
    sub_14020A890(a7, 1, 14, 0xC000014C, 0x230u);
    while ( 1 )
    {
LABEL_236:
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, v19, 0x250u);
        goto LABEL_465;
      }
      v65 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
      v19 = v65;
      if ( v65 < 0 )
      {
        sub_14020A890(a7, 0, 14, v65, 0x240u);
        goto LABEL_465;
      }
      *(_DWORD *)(v14 + 40) = -1;
      *(_DWORD *)(v14 + 36) = 0;
      v18 = 1;
      v120 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_233:
      if ( *(_DWORD *)(v14 + 36) )
        break;
      if ( *(_DWORD *)(v14 + 40) == -1 )
      {
        v109 = 0LL;
        break;
      }
      v19 = -1073741492;
      sub_14020A890(a7, 1, 14, 0xC000014C, 0x260u);
    }
    v66 = a2;
    if ( *(_DWORD *)(v14 + 60) < (unsigned int)v109 )
    {
      v18 = 1;
      v19 = -1073741492;
      v120 = 1;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0x262u);
        goto LABEL_465;
      }
      v67 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
      v19 = v67;
      if ( v67 < 0 )
      {
        sub_14020A890(a7, 0, 14, v67, 0x264u);
        goto LABEL_465;
      }
      *(_DWORD *)(v14 + 60) = v109;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( *(_DWORD *)(v14 + 64) >= HIDWORD(v109) )
    {
      v105 = a2 & 0x20000;
      if ( (a2 & 0x20000) == 0 )
      {
        v68 = a3;
        goto LABEL_271;
      }
    }
    else
    {
      v18 = 1;
      v120 = 1;
      v19 = -1073741492;
      v105 = a2 & 0x20000;
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
      {
        sub_14020A890(a7, 0, 14, 0xC000014C, 0x266u);
        goto LABEL_465;
      }
      v68 = a3;
      v69 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
      v19 = v69;
      if ( v69 < 0 )
      {
        sub_14020A890(a7, 0, 14, v69, 0x268u);
        goto LABEL_465;
      }
      *(_DWORD *)(v14 + 64) = HIDWORD(v109);
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_271:
      if ( *(_DWORD *)(v14 + 60) != (_DWORD)v109 && (int)sub_14087D6D0(BugCheckParameter3, v68, 0LL) >= 0 )
        *(_DWORD *)(v14 + 60) = v109;
      if ( *(_DWORD *)(v14 + 64) != HIDWORD(v109) && (int)sub_14087D6D0(BugCheckParameter3, v68, 0LL) >= 0 )
        *(_DWORD *)(v14 + 64) = HIDWORD(v109);
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v112);
  else
    sub_1407C97C0(BugCheckParameter3, &v112);
  v71 = a3;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v72 = sub_1406BF400(BugCheckParameter3, a3, &v112);
  else
    v72 = sub_1407C9820(BugCheckParameter3);
  v73 = (_DWORD *)v72;
  if ( !v72 )
  {
    sub_14020A890(a7, 0, 14, 0xC000009A, 0x2B0u);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v72;
  if ( (a3 & 0x80000000) != 0 )
  {
    if ( !*(_DWORD *)(v72 + 20) )
      goto LABEL_410;
    v102 = 704;
    goto LABEL_463;
  }
  if ( !*(_DWORD *)(v72 + 20) )
    goto LABEL_410;
  if ( (*(_BYTE *)(v72 + 13) & 3) == 1 )
  {
    v19 = -1073741492;
    v74 = 712;
    goto LABEL_418;
  }
  v75 = BitMapHeader;
  if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, *(unsigned int *)(v72 + 28), BitMapHeader) )
  {
    v19 = -1073741492;
    v74 = 720;
    goto LABEL_418;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v76 = (__int16 *)sub_1406BF400(BugCheckParameter3, (unsigned int)v73[7], &v104);
  else
    v76 = (__int16 *)sub_1407C9820(BugCheckParameter3);
  v108 = v76;
  v77 = v76;
  if ( !v76 )
  {
    v19 = -1073741670;
    sub_14020A890(a7, 0, 14, 0xC000009A, 0x2E0u);
    goto LABEL_465;
  }
  v78 = -4 - *((_DWORD *)v76 - 1);
  if ( v78 < 8 )
    goto LABEL_413;
  v79 = *v76;
  v80 = (unsigned __int16)v76[1];
  v59 = ((*v76 - 26220) & 0xFDFF) == 0;
  v81 = 8;
  if ( !v59 )
    v81 = 4;
  if ( (unsigned __int64)(unsigned int)(v80 * v81) + 4 < 4 )
    goto LABEL_413;
  v82 = 8;
  if ( ((v79 - 26220) & 0xFDFF) != 0 )
    v82 = 4;
  if ( (unsigned __int64)(unsigned int)(v80 * v82) + 4 > v78 )
  {
LABEL_413:
    v19 = -1073741492;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v104);
    else
      sub_1407C97C0(BugCheckParameter3, &v104);
    v74 = 752;
    goto LABEL_417;
  }
  if ( !(_WORD)v80 )
  {
    v19 = -1073741492;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v104);
    else
      sub_1407C97C0(BugCheckParameter3, &v104);
    v74 = 784;
    goto LABEL_417;
  }
  if ( a7 )
  {
    *(_QWORD *)(a7 + 256) = v77;
    v79 = *v77;
  }
  if ( v79 != 26988 && v79 != 26220 && v79 != 26732 && v79 != 26994 )
  {
    v19 = -1073741492;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v104);
    else
      sub_1407C97C0(BugCheckParameter3, &v104);
    v74 = 992;
    goto LABEL_417;
  }
  v83 = (unsigned __int16)v77[1];
  if ( v79 != 26994 )
  {
    if ( v83 != v73[5] )
    {
      v19 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v104);
      else
        sub_1407C97C0(BugCheckParameter3, &v104);
      v74 = 816;
      goto LABEL_417;
    }
    v84 = sub_14069A7B0(BugCheckParameter3, v66, v77, v73[7], a7);
    v19 = v84;
    if ( v84 == -2147483606 )
    {
      v18 = 1;
    }
    else if ( v84 < 0 )
    {
      if ( v84 == -1073741492 )
      {
        v74 = 832;
        goto LABEL_418;
      }
      goto LABEL_444;
    }
LABEL_406:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v104);
    else
      sub_1407C97C0(BugCheckParameter3, &v104);
    v71 = a3;
    v108 = 0LL;
    goto LABEL_410;
  }
  v85 = 0;
  v86 = 0;
  if ( !(_WORD)v83 )
  {
LABEL_400:
    if ( v73[5] != v85 )
    {
      v19 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v104);
      else
        sub_1407C97C0(BugCheckParameter3, &v104);
      v74 = 960;
      goto LABEL_417;
    }
    v18 = v120;
    goto LABEL_406;
  }
  while ( 2 )
  {
    if ( a7 )
      *(_DWORD *)(a7 + 264) = v86;
    v87 = &v77[2 * v86];
    if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, *((unsigned int *)v87 + 1), v75) )
    {
      v19 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v104);
      else
        sub_1407C97C0(BugCheckParameter3, &v104);
      v74 = 848;
      goto LABEL_417;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v88 = (_WORD *)sub_1406BF400(BugCheckParameter3, *((unsigned int *)v87 + 1), &v110);
    else
      v88 = (_WORD *)sub_1407C9820(BugCheckParameter3);
    v89 = v88;
    if ( !v88 )
    {
      v19 = -1073741670;
      sub_14020A890(a7, 0, 14, 0xC000009A, 0x360u);
      goto LABEL_444;
    }
    v90 = -4 - *((_DWORD *)v88 - 1);
    if ( v90 < 8 )
      goto LABEL_388;
    v91 = *v88;
    v92 = (unsigned __int16)v88[1];
    v59 = ((*v88 - 26220) & 0xFDFF) == 0;
    v93 = 8;
    if ( !v59 )
      v93 = 4;
    if ( (unsigned __int64)(unsigned int)(v92 * v93) + 4 < 4 )
      goto LABEL_388;
    v94 = 8;
    if ( ((v91 - 26220) & 0xFDFF) != 0 )
      v94 = 4;
    if ( (unsigned __int64)(unsigned int)(v92 * v94) + 4 > v90 )
    {
LABEL_388:
      v19 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v110);
      else
        sub_1407C97C0(BugCheckParameter3, &v110);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v104);
      else
        sub_1407C97C0(BugCheckParameter3, &v104);
      v74 = 880;
      goto LABEL_417;
    }
    if ( !(_WORD)v92 )
    {
      v19 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v110);
      else
        sub_1407C97C0(BugCheckParameter3, &v110);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v104);
      else
        sub_1407C97C0(BugCheckParameter3, &v104);
      v74 = 912;
      goto LABEL_417;
    }
    if ( ((v91 - 26220) & 0xFCFF) != 0 || v91 == 26476 )
    {
      v19 = -1073741492;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v110);
      else
        sub_1407C97C0(BugCheckParameter3, &v110);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v104);
      else
        sub_1407C97C0(BugCheckParameter3, &v104);
      v74 = 944;
      goto LABEL_417;
    }
    v95 = sub_14069A7B0(BugCheckParameter3, a2, v89, *((_DWORD *)v87 + 1), a7);
    v19 = v95;
    if ( v95 == -2147483606 )
    {
      v120 = 1;
LABEL_361:
      v85 += (unsigned __int16)v89[1];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v110);
      else
        sub_1407C97C0(BugCheckParameter3, &v110);
      v77 = v108;
      if ( ++v86 >= (unsigned int)(unsigned __int16)v108[1] )
        goto LABEL_400;
      v75 = BitMapHeader;
      continue;
    }
    break;
  }
  if ( v95 >= 0 )
    goto LABEL_361;
  if ( v95 != -1073741492 )
    goto LABEL_444;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v110);
  else
    sub_1407C97C0(BugCheckParameter3, &v110);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v104);
  else
    sub_1407C97C0(BugCheckParameter3, &v104);
  v74 = 952;
LABEL_417:
  v108 = 0LL;
LABEL_418:
  sub_14020A890(a7, 1, 14, v19, v74);
  if ( v105 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
  {
LABEL_424:
    sub_14020A890(a7, 0, 14, v19, 0x410u);
    goto LABEL_443;
  }
  sub_14020A890(a7, 1, 14, v19, 0x3F0u);
  v97 = sub_14087D6D0(BugCheckParameter3, a3, 0LL);
  v19 = v97;
  if ( v97 < 0 )
  {
    sub_14020A890(a7, 0, 14, v97, 0x400u);
    goto LABEL_443;
  }
  v71 = a3;
  v73[7] = -1;
  v18 = 1;
  v73[5] = 0;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_410:
  v96 = v73[8] != -1 || v73[6];
  if ( (a2 & 0x40000) != 0 && v96 )
  {
    v19 = -1073741492;
    goto LABEL_424;
  }
  v98 = (a2 & 2) != 0;
  if ( (a2 & 0xD) != 0 && v96 )
    v98 = 1;
  if ( (a2 & 8) != 0 && *(_DWORD *)(BugCheckParameter3 + 220) < 4u || v98 )
  {
    v99 = sub_14087D6D0(BugCheckParameter3, v71, 0LL);
    v19 = v99;
    if ( v99 < 0 )
    {
      sub_14020A890(a7, 0, 14, v99, 0x420u);
      goto LABEL_443;
    }
    v73[6] = 0;
    if ( (a2 & 4) != 0 && *(_DWORD *)(BugCheckParameter3 + 220) >= 4u )
      v100 = -1163005939;
    else
      v100 = -1;
    v73[8] = v100;
  }
  v19 = v18 != 0 ? 0x8000002A : 0;
LABEL_443:
  if ( v108 )
  {
LABEL_444:
    v60 = &v104;
    goto LABEL_445;
  }
LABEL_465:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v112);
  else
    sub_1407C97C0(BugCheckParameter3, &v112);
  return (unsigned int)v19;
}
