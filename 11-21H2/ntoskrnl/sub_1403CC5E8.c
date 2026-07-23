/*
 * XREFs of sub_1403CC5E8 @ 0x1403CC5E8
 * Callers:
 *     sub_14064B24C @ 0x14064B24C (sub_14064B24C.c)
 *     sub_140844C0C @ 0x140844C0C (sub_140844C0C.c)
 * Callees:
 *     sub_1403CCB18 @ 0x1403CCB18 (sub_1403CCB18.c)
 *     sub_1403CCB34 @ 0x1403CCB34 (sub_1403CCB34.c)
 *     sub_14064B46C @ 0x14064B46C (sub_14064B46C.c)
 *     sub_1406EB810 @ 0x1406EB810 (sub_1406EB810.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     sub_14084501C @ 0x14084501C (sub_14084501C.c)
 *     sub_1408450D8 @ 0x1408450D8 (sub_1408450D8.c)
 *     sub_140845214 @ 0x140845214 (sub_140845214.c)
 *     sub_1408452CC @ 0x1408452CC (sub_1408452CC.c)
 *     sub_140A1B260 @ 0x140A1B260 (sub_140A1B260.c)
 *     sub_140A1B718 @ 0x140A1B718 (sub_140A1B718.c)
 *     sub_140A1B7E4 @ 0x140A1B7E4 (sub_140A1B7E4.c)
 *     sub_140A1B9F0 @ 0x140A1B9F0 (sub_140A1B9F0.c)
 *     sub_140A1BC24 @ 0x140A1BC24 (sub_140A1BC24.c)
 *     sub_140A1BCE4 @ 0x140A1BCE4 (sub_140A1BCE4.c)
 *     sub_140A1BE50 @ 0x140A1BE50 (sub_140A1BE50.c)
 *     sub_140A1C148 @ 0x140A1C148 (sub_140A1C148.c)
 *     sub_140A1C5E8 @ 0x140A1C5E8 (sub_140A1C5E8.c)
 *     sub_140A1C88C @ 0x140A1C88C (sub_140A1C88C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403CC5E8(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  UNICODE_STRING *v9; // r9
  unsigned __int16 v10; // si
  unsigned __int16 v11; // r11
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r10
  unsigned int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // r8
  void *v19; // rdx
  __int64 v20; // r12
  int v21; // ebx
  UNICODE_STRING *v22; // rdx
  __int64 v23; // rdi
  int v24; // eax
  unsigned __int8 *v25; // r8
  char v26; // r9
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // r9
  unsigned __int16 v32; // r11
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rcx
  unsigned __int16 v36; // si
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rbx
  int v42; // edx
  int v43; // eax
  int v45; // ebx
  int v46; // ebx
  int v47; // ebx
  __int64 v48; // rcx
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // rcx
  unsigned __int16 v52; // si
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rbx
  unsigned int v58; // edi
  BOOLEAN valid; // al
  __int64 v60; // rax
  bool v61; // zf
  unsigned int v62; // eax
  __int64 v63; // rdx
  unsigned int *v64; // r10
  unsigned int v65; // ecx
  unsigned int v66; // eax
  int v67; // ebx
  int v68; // ebx
  void *v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // eax
  __int64 v72; // r10
  unsigned __int16 *v73; // rbx
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned __int16 v76; // r11
  int v77; // ecx
  __int64 v78; // rbx
  __int16 v79; // r11
  int v80; // ecx
  unsigned int v81; // edx
  __int64 v82; // rcx
  int v83; // ecx
  int v84; // ecx
  int v85; // ecx
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // r12
  __int64 v89; // r8
  unsigned __int16 *v90; // rdi
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // r8
  __int64 v96; // r10
  __int64 v97; // rax
  __int64 v98; // rcx
  int v99; // edx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rdx
  int v103; // ecx
  __int64 v104; // rax
  __int64 v105; // r8
  unsigned int v106; // eax
  __int64 v107; // rdx
  unsigned __int16 *v108; // rdi
  int v109; // eax
  __int64 v110; // rbx
  unsigned int v111; // ecx
  PUNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h]
  PUNICODE_STRING v113; // [rsp+30h] [rbp-50h]
  char v114; // [rsp+60h] [rbp-20h] BYREF
  __int16 v115; // [rsp+62h] [rbp-1Eh]
  int v116; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v117; // [rsp+68h] [rbp-18h]
  unsigned int v118; // [rsp+6Ch] [rbp-14h]
  __int64 v119; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v120; // [rsp+78h] [rbp-8h] BYREF
  char v121; // [rsp+C0h] [rbp+40h] BYREF
  int v122; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v123; // [rsp+D8h] [rbp+58h]

  v123 = a4;
  v122 = a3;
  v8 = a4;
  v9 = 0LL;
  v115 = 0;
  v10 = 0;
  v116 = 0;
  v11 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( !a2 )
    {
      v13 = *(_DWORD *)(a1 + 8);
      v14 = a1 + 24;
      goto LABEL_4;
    }
LABEL_68:
    v12 = -1073741811;
    goto LABEL_39;
  }
  if ( !a2 )
    goto LABEL_68;
  v13 = *(_DWORD *)(a2 + 12);
  v14 = a2 + 32;
LABEL_4:
  v15 = 2LL;
  v119 = v14;
  v118 = v13;
  v16 = 2;
  v117 = 2;
  if ( v13 > 2 )
  {
    v17 = a6;
    v18 = 1LL;
    v19 = &unk_140D3CDE0;
    while ( 1 )
    {
      if ( v10 >= 0x2Au || v11 >= 0xEu )
        goto LABEL_68;
      v20 = 32LL * v16;
      v21 = *(_DWORD *)(v20 + v14);
      if ( v21 > 16 )
        break;
      if ( v21 == 16 )
      {
        v43 = sub_140A1BCE4(
                *(_QWORD *)(v20 + v14 + 24),
                (_DWORD)v19,
                (unsigned int)v17 + 16 * v10,
                v8,
                (__int64)&v116,
                v10 + a8);
        goto LABEL_35;
      }
      if ( v21 > 8 )
      {
        v45 = v21 - 9;
        if ( v45 )
        {
          v46 = v45 - 1;
          if ( v46 )
          {
            v47 = v46 - 1;
            if ( !v47 )
              goto LABEL_51;
            v67 = v47 - 1;
            if ( !v67 )
              goto LABEL_51;
            v68 = v67 - 1;
            if ( v68 )
            {
              if ( (unsigned int)(v68 - 1) > 1 )
                goto LABEL_68;
LABEL_51:
              v48 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v48) = v20 + v14 + 8;
              *(_QWORD *)(v17 + 8 * v48 + 8) = 8LL;
            }
            else
            {
              v69 = &unk_140D3D398;
              if ( *(_QWORD *)(v20 + v14 + 24) )
                v69 = *(void **)(v20 + v14 + 24);
              v70 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v70) = v69;
              *(_QWORD *)(v17 + 8 * v70 + 8) = 16LL;
            }
          }
          else
          {
LABEL_118:
            v101 = 2LL * v10;
            *(_QWORD *)(v17 + 8 * v101) = v20 + v14 + 8;
            *(_QWORD *)(v17 + 8 * v101 + 8) = 4LL;
          }
LABEL_52:
          v10 += v18;
          goto LABEL_38;
        }
        v71 = *(_DWORD *)(v20 + v14 + 16);
        if ( v71 >= v16 )
          goto LABEL_68;
        v72 = 32LL * v71;
        if ( *(_DWORD *)(v72 + v14) != (_DWORD)v18 )
          goto LABEL_68;
        v73 = (unsigned __int16 *)(a5 + 16LL * v11);
        LODWORD(DestinationString) = a5 + 16 * v11;
        sub_140A1C5E8(
          *(_QWORD *)(v14 + 56),
          *(_QWORD *)(v72 + v14 + 24),
          *(_QWORD *)(v20 + v14 + 24),
          *(_DWORD *)(v20 + v14 + 4) / 0x18u);
        v74 = 2LL * v10;
        v75 = *((_QWORD *)v73 + 1);
        v15 = 2LL;
        v76 = v115;
        v77 = *v73 + 2;
        v9 = 0LL;
        *(_DWORD *)(v17 + 8 * v74 + 12) = 0;
        *(_QWORD *)(v17 + 8 * v74) = v75;
        v18 = 1LL;
        *(_DWORD *)(v17 + 8 * v74 + 8) = v77;
LABEL_100:
        v11 = v76 + 1;
        ++v10;
LABEL_30:
        v115 = v11;
LABEL_31:
        v8 = v123;
        goto LABEL_37;
      }
      switch ( v21 )
      {
        case 8:
          v64 = *(unsigned int **)(v20 + v14 + 24);
          if ( !v64 )
            goto LABEL_68;
          v65 = *v64;
          v66 = *v64 ? 12 * v65 + 8 : 8;
          if ( *(_DWORD *)(v20 + v14 + 4) < v66 || v65 > 0x42 )
            goto LABEL_68;
          DestinationString = (PUNICODE_STRING)&v116;
          v43 = sub_140A1B260(*(_QWORD *)(v20 + v14 + 24), 0LL, v17 + 16LL * v10, v8);
          goto LABEL_35;
        case 0:
          sub_1406EB810(v17 + 16LL * v10, v19, v18);
          goto LABEL_52;
        case 1:
          if ( !(unsigned __int8)sub_1403CCB18(*(_QWORD *)(v20 + v14 + 24)) )
            goto LABEL_68;
LABEL_34:
          v43 = sub_14084501C((unsigned int)v17 + 16 * v10, v42, v8, (unsigned int)&v116, v10 + a8);
LABEL_35:
          v9 = 0LL;
          v12 = v43;
          if ( v43 < 0 )
            goto LABEL_39;
          v11 = v115;
          v18 = 1LL;
          ++v10;
          v15 = 2LL;
          goto LABEL_37;
        case 2:
          v41 = *(_QWORD *)(v20 + v14 + 24);
          if ( !(unsigned __int8)sub_1403CCB18(v41) )
            goto LABEL_68;
          sub_1408450D8();
          v42 = v41;
          goto LABEL_34;
        case 3:
          v43 = sub_140A1BE50(*(_DWORD *)(v20 + v14 + 8), 0, (unsigned int)v17 + 16 * v10, v8, (__int64)&v116, v10 + a8);
          goto LABEL_35;
        case 4:
          v57 = *(_QWORD *)(v20 + v14 + 24);
          v58 = 4 * *(unsigned __int8 *)(v57 + 1) + 8;
          if ( *(_DWORD *)(v20 + v14 + 4) < v58 || (valid = RtlValidSid(*(PSID *)(v20 + v14 + 24)), v9 = 0LL, !valid) )
          {
            v12 = -1073741704;
            goto LABEL_39;
          }
          v11 = v115;
          v18 = 1LL;
          v15 = 2LL;
          v60 = 2LL * v10++;
          *(_QWORD *)(v17 + 8 * v60) = v57;
          *(_DWORD *)(v17 + 8 * v60 + 8) = v58;
          *(_DWORD *)(v17 + 8 * v60 + 12) = 0;
          goto LABEL_31;
        case 5:
          goto LABEL_18;
      }
      if ( v21 != 6 )
      {
        if ( v21 != 7 )
          goto LABEL_68;
        v62 = *(_DWORD *)(v20 + v14 + 16);
        if ( v62 >= v117 )
          goto LABEL_68;
        v63 = 32LL * v62;
        if ( *(_DWORD *)(v63 + v14) != (_DWORD)v18 )
          goto LABEL_68;
        v43 = sub_140A1C148(
                *(_QWORD *)(v14 + 56),
                *(_QWORD *)(v63 + v14 + 24),
                *(_DWORD *)(v20 + v14 + 8),
                0,
                v9,
                v17 + 16LL * v10,
                v8,
                (__int64)&v116,
                v10 + a8);
        goto LABEL_35;
      }
      v51 = 2LL * v10;
      v52 = v18 + v10;
      v53 = 4 * (unsigned __int8)byte_140D3CDE1 + 8;
      *(_QWORD *)(v17 + 8 * v51) = v19;
      v54 = v15;
      *(_DWORD *)(v17 + 8 * v51 + 8) = v53;
      *(_DWORD *)(v17 + 8 * v51 + 12) = (_DWORD)v9;
      do
      {
        sub_1406EB810(v17 + 16LL * v52, v54, v18);
        v52 += v18;
        v54 = v55 - v18;
      }
      while ( v54 );
      v56 = 2LL * v52;
      v10 = v18 + v52;
      *(_QWORD *)(v17 + 8 * v56) = &unk_140D3CFB8;
      *(_QWORD *)(v17 + 8 * v56 + 8) = 8LL;
LABEL_37:
      v19 = &unk_140D3CDE0;
LABEL_38:
      v16 = v18 + v117;
      v117 = v16;
      if ( v16 >= v118 )
        goto LABEL_39;
    }
    if ( v21 > 27 )
    {
      switch ( v21 )
      {
        case 28:
          LODWORD(DestinationString) = (_DWORD)v9;
          v108 = (unsigned __int16 *)(a5 + 16LL * v11);
          v109 = sub_140A1BC24(*(_QWORD *)(v20 + v14 + 24), v108, v10 + a8, 0LL);
          v9 = 0LL;
          v12 = v109;
          if ( v109 < 0 )
            goto LABEL_39;
          v18 = 1LL;
          v15 = 2LL;
          v110 = 2LL * v10;
          v111 = *v108 + 2;
          ++v10;
          v11 = v115 + 1;
          *(_QWORD *)(v17 + 8 * v110) = *((_QWORD *)v108 + 1);
          *(_QWORD *)(v17 + 8 * v110 + 8) = v111;
          goto LABEL_30;
        case 29:
          goto LABEL_129;
        case 30:
          if ( *(UNICODE_STRING **)(v20 + v14 + 8) != v9 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
            goto LABEL_68;
LABEL_129:
          v105 = *(_QWORD *)(v20 + v14 + 24);
          v106 = *(_DWORD *)(v105 + 132);
          if ( v106 >= v117 )
            goto LABEL_68;
          v107 = 32LL * v106;
          if ( *(_DWORD *)(v107 + v14) != 1 )
            goto LABEL_68;
          LOBYTE(v9) = v21 == 30;
          v43 = sub_14064B46C(
                  *(_QWORD *)(v14 + 56),
                  *(_QWORD *)(v107 + v14 + 24),
                  v105,
                  (_DWORD)v9,
                  (_DWORD)DestinationString,
                  v17 + 16LL * v10,
                  v8,
                  (__int64)&v116,
                  v10 + a8);
          goto LABEL_35;
        case 31:
          if ( *(_DWORD *)(v20 + v14 + 8) != 32 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
            goto LABEL_68;
          v43 = sub_140A1B7E4(
                  32,
                  *(_QWORD *)(v20 + v14 + 24),
                  0,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v116,
                  v10 + a8);
          goto LABEL_35;
      }
      v49 = v21 - 31 - v15;
      if ( !v49 )
      {
LABEL_18:
        v113 = (PUNICODE_STRING)&v114;
        v22 = (UNICODE_STRING *)&v120;
        v23 = 16LL * v11;
        LOBYTE(v122) = (_BYTE)v9;
        v121 = (char)v9;
        v114 = (char)v9;
        v120 = (unsigned __int8 *)v9;
        if ( v21 != 35 )
          v22 = v9;
        DestinationString = (PUNICODE_STRING)&v121;
        v24 = sub_1408452CC(v14 + 8 + v20, v22, &v122, v23 + a5);
        v12 = v24;
        if ( v21 == 35 )
        {
          v26 = v122;
          v25 = v120;
        }
        else
        {
          v25 = *(unsigned __int8 **)(v14 + 24);
          v26 = 0;
        }
        if ( v24 < 0 )
          goto LABEL_39;
        v27 = *(_DWORD *)(v20 + v14);
        if ( v27 == 5 || v27 == 35 )
        {
          if ( !v25 )
          {
            v25 = (unsigned __int8 *)&unk_140D3CDE0;
            v26 = 0;
          }
          v28 = 4 * v25[1] + 8;
          v29 = v17 + 16LL * v10;
          *(_DWORD *)(v29 + 12) = 0;
          *(_QWORD *)v29 = v25;
          *(_DWORD *)(v29 + 8) = v28;
          *(_BYTE *)(v10 + a8) = v26;
        }
        else
        {
          if ( v21 != 33 )
          {
            if ( v26 && v25 )
              ExFreePoolWithTag(v25, 0);
            goto LABEL_28;
          }
          v102 = *(_QWORD *)(v20 + v14 + 24);
          v103 = 4 * *(unsigned __int8 *)(v102 + 1) + 8;
          v104 = v17 + 16LL * v10;
          *(_DWORD *)(v104 + 12) = 0;
          *(_QWORD *)v104 = v102;
          *(_DWORD *)(v104 + 8) = v103;
          *(_BYTE *)(v10 + a8) = v26;
        }
        ++v10;
LABEL_28:
        v30 = a5;
        v31 = a8;
        v32 = v115;
        v33 = *(_QWORD *)(v23 + a5 + 8);
        v34 = *(unsigned __int16 *)(v23 + a5) + 2;
        v35 = v17 + 16LL * v10;
        *(_DWORD *)(v35 + 12) = 0;
        *(_QWORD *)v35 = v33;
        LOBYTE(v33) = v121;
        *(_DWORD *)(v35 + 8) = v34;
        *(_BYTE *)(v10 + v31) = v33;
        v36 = v10 + 1;
        ++v32;
        v37 = v17 + 16LL * v36;
        v38 = *(_QWORD *)(v30 + 16LL * v32 + 8);
        v39 = *(unsigned __int16 *)(v30 + 16LL * v32) + 2;
        *(_DWORD *)(v37 + 12) = 0;
        *(_QWORD *)v37 = v38;
        LOBYTE(v38) = v114;
        *(_DWORD *)(v37 + 8) = v39;
        *(_BYTE *)(v36 + v31) = v38;
        v18 = 1LL;
        v9 = 0LL;
        ++v36;
        v11 = v32 + 1;
        v40 = 2LL * v36;
        v10 = v36 + 1;
        *(_QWORD *)(v17 + 8 * v40) = v20 + v14 + 8;
        *(_QWORD *)(v17 + 8 * v40 + 8) = 8LL;
LABEL_29:
        v15 = 2LL;
        goto LABEL_30;
      }
      v50 = v49 - 1;
      if ( !v50 )
      {
        v43 = sub_1403CCB34(*(_QWORD *)(v20 + v14 + 24), v17 + 16LL * v10, v10 + a8);
        goto LABEL_35;
      }
      v61 = v50 == 1;
    }
    else
    {
      switch ( v21 )
      {
        case 27:
          goto LABEL_118;
        case 17:
          v43 = sub_140A1B9F0(
                  *(_QWORD *)(v20 + v14 + 24),
                  (_DWORD)v19,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v116,
                  v10 + a8);
          goto LABEL_35;
        case 18:
          v100 = 2LL * v10;
          *(_QWORD *)(v17 + 8 * v100) = &v121;
          *(_QWORD *)(v17 + 8 * v100 + 8) = 8LL;
          goto LABEL_52;
        case 19:
          v94 = sub_140A1C88C(
                  *(_DWORD *)(v20 + v14 + 8),
                  (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 1)),
                  a8 + (unsigned int)v10 + 1,
                  (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 2)),
                  a8 + (unsigned int)v10 + 2);
          v9 = 0LL;
          v12 = v94;
          if ( v94 < 0 )
            goto LABEL_39;
          v11 = v115;
          v95 = 3LL;
          v96 = a5;
          do
          {
            v97 = v11++;
            v97 *= 2LL;
            v98 = 2LL * v10++;
            v99 = *(unsigned __int16 *)(v96 + 8 * v97);
            *(_QWORD *)(v17 + 8 * v98) = *(_QWORD *)(v96 + 8 * v97 + 8);
            *(_QWORD *)(v17 + 8 * v98 + 8) = (unsigned int)(v99 + 2);
            --v95;
          }
          while ( v95 );
          v14 = v119;
          v18 = 1LL;
          goto LABEL_29;
        case 20:
          v92 = 3LL;
          do
          {
            sub_1406EB810(v17 + 16LL * v10, v92, v18);
            v10 += v18;
            v92 = v93 - v18;
          }
          while ( v92 );
          goto LABEL_37;
        case 21:
          v43 = sub_140845214(
                  *(_DWORD *)(v20 + v14 + 8),
                  (_DWORD)v19,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v116,
                  v10 + a8);
          goto LABEL_35;
      }
      v83 = v21 - 21 - v15;
      if ( !v83 )
      {
        v87 = *(_QWORD *)(v20 + v14 + 24);
        v88 = a5;
        v89 = v10 + a8;
        v90 = (unsigned __int16 *)(a5 + 16LL * v11);
        LODWORD(DestinationString) = v89 + 1;
        v91 = sub_140A1BC24(v87, v90, v89, v90 + 8);
        v9 = 0LL;
        v12 = v91;
        if ( v91 < 0 )
          goto LABEL_39;
        v78 = 2LL * v10;
        v15 = 2LL;
        v79 = v115;
        v80 = *v90 + 2;
        *(_QWORD *)(v17 + 8 * v78) = *((_QWORD *)v90 + 1);
        *(_DWORD *)(v17 + 8 * v78 + 8) = v80;
        v18 = 1LL;
        *(_DWORD *)(v17 + 8 * v78 + 12) = 0;
        v76 = v79 + 1;
        ++v10;
        v81 = *(unsigned __int16 *)(v88 + 16LL * v76) + 2;
        v82 = 2LL * v10;
        *(_QWORD *)(v17 + 8 * v82) = *(_QWORD *)(v88 + 16LL * v76 + 8);
        *(_QWORD *)(v17 + 8 * v82 + 8) = v81;
        goto LABEL_100;
      }
      v84 = v83 - 1;
      if ( !v84 )
      {
        v85 = *(_DWORD *)(v20 + v14 + 8);
        ++v117;
        v8 = v123;
        v86 = sub_140A1B718(
                v85,
                *(_QWORD *)(v20 + v14 + 24),
                *(_QWORD *)(32LL * v117 + v14 + 24),
                (unsigned int)v17 + 16 * (v10 + 1),
                v17 + 16LL * v10,
                v10 + a8,
                (_DWORD)v113,
                v17 + 16 * (v10 + 1LL),
                v10 + 1LL + a8,
                v123,
                (__int64)&v116);
        v9 = 0LL;
        v12 = v86;
        if ( v86 < 0 )
          goto LABEL_39;
        v11 = v115;
        v15 = 2LL;
        v10 += 2;
        v18 = 1LL;
        goto LABEL_37;
      }
      v61 = v84 == (_DWORD)v15;
    }
    if ( !v61 )
      goto LABEL_68;
    goto LABEL_18;
  }
LABEL_39:
  *a7 = v10;
  return v12;
}
