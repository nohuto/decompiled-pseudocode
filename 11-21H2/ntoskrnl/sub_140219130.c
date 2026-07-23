/*
 * XREFs of sub_140219130 @ 0x140219130
 * Callers:
 *     sub_1402F9680 @ 0x1402F9680 (sub_1402F9680.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_1403763A8 @ 0x1403763A8 (sub_1403763A8.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140384600 @ 0x140384600 (sub_140384600.c)
 *     sub_14038473C @ 0x14038473C (sub_14038473C.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     sub_1409CB770 @ 0x1409CB770 (sub_1409CB770.c)
 * Callees:
 *     sub_1402197CC @ 0x1402197CC (sub_1402197CC.c)
 *     sub_14021984C @ 0x14021984C (sub_14021984C.c)
 *     sub_1402199DC @ 0x1402199DC (sub_1402199DC.c)
 *     sub_140219A04 @ 0x140219A04 (sub_140219A04.c)
 *     sub_140219B40 @ 0x140219B40 (sub_140219B40.c)
 *     sub_140219B90 @ 0x140219B90 (sub_140219B90.c)
 *     sub_140219CE4 @ 0x140219CE4 (sub_140219CE4.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     sub_1402D6A64 @ 0x1402D6A64 (sub_1402D6A64.c)
 *     sub_140300374 @ 0x140300374 (sub_140300374.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_1405F58AC @ 0x1405F58AC (sub_1405F58AC.c)
 *     sub_14064AF30 @ 0x14064AF30 (sub_14064AF30.c)
 *     sub_14064AFB8 @ 0x14064AFB8 (sub_14064AFB8.c)
 *     sub_14064B0FC @ 0x14064B0FC (sub_14064B0FC.c)
 *     sub_14064B224 @ 0x14064B224 (sub_14064B224.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140219130(
        _DWORD *a1,
        void *a2,
        void *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        char a11,
        _DWORD *a12)
{
  _DWORD *v12; // rdi
  _DWORD *v14; // r14
  int v15; // ebx
  unsigned int v16; // r11d
  PVOID v17; // r12
  __int64 v18; // rcx
  PVOID *v19; // rax
  unsigned int v20; // r12d
  unsigned int v21; // esi
  __int64 v22; // r15
  _BYTE *v23; // r14
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r15
  unsigned int v27; // ecx
  unsigned int v28; // r15d
  int v29; // eax
  PVOID *v30; // r14
  void *v31; // rax
  _DWORD *v32; // rdi
  __int64 v33; // rdi
  int v34; // eax
  bool v35; // zf
  int v36; // eax
  _BYTE *v37; // rdi
  __int64 v38; // r15
  PVOID *v39; // rsi
  char v41; // al
  unsigned int v42; // ebx
  __int64 v43; // r8
  int v44; // eax
  char v45; // al
  __int64 v46; // rcx
  char v47; // al
  __int64 v48; // r10
  bool v49; // zf
  char v50; // al
  __int64 v51; // r8
  __int64 v52; // r9
  char v53; // al
  char v54; // al
  int v55; // eax
  char v56; // di
  BOOL v57; // eax
  char v58; // al
  __int64 v59; // r8
  __int64 v60; // r9
  char v61; // al
  char v62; // al
  __int64 v63; // r10
  char v64; // al
  int v65; // eax
  PVOID v66; // rdi
  char v67; // al
  __int64 v68; // rcx
  __int64 v69; // r8
  char v70; // al
  int v71; // eax
  int v72; // r10d
  __int64 v73; // [rsp+20h] [rbp-E0h]
  _BYTE v74[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v75[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v76; // [rsp+38h] [rbp-C8h] BYREF
  char v77; // [rsp+3Ch] [rbp-C4h]
  char v78; // [rsp+3Dh] [rbp-C3h]
  char v79; // [rsp+3Eh] [rbp-C2h]
  PVOID v80; // [rsp+40h] [rbp-C0h]
  _DWORD *v81; // [rsp+48h] [rbp-B8h]
  int v82; // [rsp+50h] [rbp-B0h] BYREF
  char v83; // [rsp+54h] [rbp-ACh]
  int v84; // [rsp+58h] [rbp-A8h] BYREF
  int v85; // [rsp+5Ch] [rbp-A4h] BYREF
  _DWORD *v86; // [rsp+60h] [rbp-A0h]
  _OWORD v87[5]; // [rsp+70h] [rbp-90h] BYREF
  int v88; // [rsp+C0h] [rbp-40h] BYREF
  void *v89; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v90; // [rsp+D0h] [rbp-30h]
  unsigned int v91; // [rsp+D4h] [rbp-2Ch]
  void *v92; // [rsp+D8h] [rbp-28h]
  _DWORD *v93; // [rsp+E0h] [rbp-20h]
  __int64 v94; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v95; // [rsp+F0h] [rbp-10h]
  void *v96; // [rsp+F8h] [rbp-8h]
  __int64 v97; // [rsp+100h] [rbp+0h]
  __int64 v98; // [rsp+108h] [rbp+8h]
  void *v99; // [rsp+110h] [rbp+10h]
  __int64 CurrentIrql; // [rsp+118h] [rbp+18h]
  __int128 v101; // [rsp+120h] [rbp+20h] BYREF
  __int128 v102; // [rsp+130h] [rbp+30h]
  char *v103; // [rsp+140h] [rbp+40h]
  __int128 v104; // [rsp+150h] [rbp+50h] BYREF
  PVOID P[16]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v106[256]; // [rsp+1E0h] [rbp+E0h] BYREF

  v12 = a8;
  v14 = a12;
  v15 = 0;
  v95 = a5;
  v98 = a6;
  v99 = a3;
  v92 = a2;
  v86 = a1;
  v97 = a7;
  v96 = a4;
  v93 = a8;
  v81 = a12;
  v82 = 0;
  LODWORD(v104) = 0;
  *((_QWORD *)&v104 + 1) = 0LL;
  memset(P, 0, sizeof(P));
  LOWORD(v87[0]) = 0;
  BYTE4(v87[0]) = 0;
  memset((char *)v87 + 5, 0, 0x4BuLL);
  v76 = -1;
  v94 = -1LL;
  LOBYTE(v16) = 0;
  v84 = 0;
  *a12 = -1;
  v103 = 0LL;
  v17 = 0LL;
  v78 = 0;
  v18 = 2LL;
  v77 = 0;
  v19 = &P[1];
  v101 = 0LL;
  v85 = 0;
  v102 = 0LL;
  v88 = 0;
  v75[0] = 0;
  v74[0] = 0;
  v83 = 0;
  v79 = 0;
  v80 = 0LL;
  v89 = 0LL;
  do
  {
    *v19 = 0LL;
    v19 += 9;
    --v18;
  }
  while ( v18 );
  HIDWORD(v101) = 1;
  if ( !a1 || !a8 )
  {
    v15 = -1073741811;
    goto LABEL_45;
  }
  v20 = a9;
  CurrentIrql = KeGetCurrentIrql();
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    v15 = -2147483601;
    goto LABEL_44;
  }
  sub_1402197CC(v87, v75);
  LOBYTE(v16) = 0;
  v21 = 0;
  LODWORD(v22) = 4;
  if ( a9 <= 4 )
    goto LABEL_44;
  while ( 1 )
  {
    v23 = (char *)v12 + (unsigned int)v22;
    v24 = (unsigned __int8)*v23;
    v25 = (unsigned __int8)*v23;
    if ( v24 <= 0x8C )
      break;
    if ( (unsigned int)v25 <= 0x93 )
    {
      if ( (_DWORD)v25 == 147 )
        goto LABEL_134;
      if ( (_DWORD)v25 != 141 )
      {
        if ( (unsigned int)v25 <= 0x8D )
          goto LABEL_93;
        if ( (unsigned int)v25 > 0x8F )
        {
          if ( (_DWORD)v25 != 144 )
          {
            if ( (_DWORD)v25 != 145 )
            {
              v49 = (_DWORD)v25 == 146;
              goto LABEL_110;
            }
LABEL_134:
            LOBYTE(v25) = *v23;
            LODWORD(v22) = v22 + 1;
            v58 = sub_140219A04(v25, v87, v21, v74);
            LOBYTE(v16) = 0;
            if ( !v58 )
            {
              v15 = -1073741406;
              if ( !v74[0] )
                goto LABEL_87;
            }
            if ( v74[0] )
            {
              v62 = v78;
            }
            else
            {
              if ( (_BYTE)v24 == 0x8A || (v61 = 0, (_BYTE)v24 == 0x91) )
                v61 = 1;
              LOBYTE(v60) = a11;
              LOBYTE(v59) = a10;
              LOBYTE(v73) = v61;
              v15 = sub_14064AFB8(v87, v86, v59, v60);
              v62 = v77;
              v78 = v77;
            }
            if ( v15 >= 0 )
            {
              if ( v62 )
              {
                v43 = 1LL;
                v76 = 1;
                v55 = 1;
              }
              else
              {
                v43 = 0LL;
                v76 = 0;
                v55 = 0;
              }
            }
            else
            {
              v43 = 0xFFFFFFFFLL;
              v76 = -1;
              v55 = -1;
            }
            v56 = v24 + 111;
LABEL_127:
            if ( (v56 & 0xFD) == 0 && v55 != -1 )
            {
              v43 = v55 == 0;
              goto LABEL_203;
            }
            goto LABEL_58;
          }
LABEL_111:
          LOBYTE(v25) = *v23;
          LODWORD(v22) = v22 + 1;
          v50 = sub_140219A04(v25, v87, v21, v74);
          LOBYTE(v16) = 0;
          if ( !v50 )
          {
            v15 = -1073741406;
            if ( !v74[0] )
              goto LABEL_87;
          }
          if ( v74[0] )
          {
            v54 = v78;
          }
          else
          {
            if ( (_BYTE)v24 == 0x89 || (v53 = 0, (_BYTE)v24 == 0x90) )
              v53 = 1;
            LOBYTE(v52) = a11;
            LOBYTE(v51) = a10;
            LOBYTE(v73) = v53;
            v15 = sub_14064B0FC(v87, v86, v51, v52);
            v54 = v77;
            v78 = v77;
          }
          if ( v15 >= 0 )
          {
            if ( v54 )
            {
              v43 = 1LL;
              v76 = 1;
              v55 = 1;
            }
            else
            {
              v43 = 0LL;
              v76 = 0;
              v55 = 0;
            }
          }
          else
          {
            v43 = 0xFFFFFFFFLL;
            v76 = -1;
            v55 = -1;
          }
          v56 = v24 + 112;
          goto LABEL_127;
        }
        goto LABEL_68;
      }
LABEL_83:
      LOBYTE(v25) = *v23;
      LODWORD(v22) = v22 + 1;
      v47 = sub_140219A04(v25, v87, v21, v74);
      LOBYTE(v16) = 0;
      if ( !v47 )
        goto LABEL_93;
      v43 = *(_QWORD *)&v87[1] != 0LL;
      v76 = *(_QWORD *)&v87[1] != 0LL;
      if ( (_BYTE)v24 != 0x8D )
        goto LABEL_58;
      goto LABEL_133;
    }
    if ( (unsigned int)v25 < 0xA0 )
      goto LABEL_93;
    if ( (unsigned int)v25 <= 0xA1 )
    {
      LODWORD(v22) = v22 + 1;
      v70 = sub_140219A04(v25, v87, v21, v74);
      LOBYTE(v16) = 0;
      if ( !v70 )
        goto LABEL_93;
      if ( v21 == 2 )
      {
        v84 = sub_140219B40(*(_QWORD *)&v87[1]);
        v71 = sub_140219B40(*((_QWORD *)&v87[3] + 1));
        v85 = v71;
      }
      else
      {
        if ( v21 == 1 )
        {
          v84 = sub_140219B40(*(_QWORD *)&v87[1]);
        }
        else
        {
          v15 = sub_14064B224(v106, &v82, &v84);
          if ( v15 < 0 )
            goto LABEL_87;
        }
        v15 = sub_14064B224(v106, &v82, &v85);
        if ( v15 < 0 )
          goto LABEL_87;
        v71 = v85;
      }
      if ( (_BYTE)v24 == 0xA0 )
      {
        if ( v72 && v71 )
        {
          if ( v72 == -1 || v71 == -1 )
            goto LABEL_196;
LABEL_202:
          v43 = 1LL;
LABEL_203:
          v76 = v43;
LABEL_58:
          v15 = sub_1402199DC(v106, &v82, v43);
          if ( v15 < 0 )
            goto LABEL_87;
          sub_1402197CC(v87, v75);
          LOBYTE(v16) = 0;
          v21 = 0;
          goto LABEL_37;
        }
LABEL_201:
        v43 = v16;
        v76 = v16;
        goto LABEL_58;
      }
      if ( v72 == 1 || v71 == 1 )
        goto LABEL_202;
      if ( v72 != -1 && v71 != -1 )
        goto LABEL_201;
LABEL_196:
      v43 = 0xFFFFFFFFLL;
      goto LABEL_203;
    }
    if ( (_DWORD)v25 == 162 )
    {
      LODWORD(v22) = v22 + 1;
      v41 = sub_140219A04(v25, v87, v21, v74);
      LOBYTE(v16) = 0;
      if ( !v41 )
        goto LABEL_93;
      if ( v21 == 1 )
      {
        v76 = sub_140219B40(*(_QWORD *)&v87[1]);
        v42 = v76;
        sub_1402197CC(v87, v75);
        v16 = 0;
      }
      else
      {
        v15 = sub_14064B224(v106, &v82, &v76);
        if ( v15 < 0 )
          goto LABEL_87;
        v42 = v76;
      }
      if ( v42 == -1 )
      {
        v43 = 0xFFFFFFFFLL;
      }
      else
      {
        v43 = v16;
        LOBYTE(v43) = v42 == 0;
      }
      goto LABEL_58;
    }
    if ( (_DWORD)v25 != 163 )
    {
      if ( (unsigned int)v25 <= 0xF7 || (unsigned int)v25 > 0xFC )
        goto LABEL_93;
      v26 = (unsigned int)(v22 + 1);
      if ( v21 == 2 )
      {
        if ( HIDWORD(v87[0]) == 1 )
          goto LABEL_93;
        v76 = sub_140219B40(*(_QWORD *)&v87[1]);
        v15 = sub_1402199DC(v106, &v82, v76);
        if ( v15 < 0 )
          goto LABEL_87;
        if ( LOBYTE(v75[0]) != (_BYTE)v16 )
        {
          ExFreePoolWithTag(*(PVOID *)(v63 + 24), 0);
          LOBYTE(v16) = 0;
        }
        v104 = *(_OWORD *)&P[7];
        *(_OWORD *)P = *(_OWORD *)&P[9];
        *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
        P[6] = P[15];
        *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
        *(_OWORD *)((char *)&v87[1] + 8) = v87[4];
        *(_QWORD *)&v87[1] = &v104;
        LOBYTE(v75[0]) = HIBYTE(v75[0]);
        v87[0] = *(_OWORD *)((char *)&v87[2] + 8);
        HIBYTE(v75[0]) = v16;
        *(_OWORD *)((char *)&v87[2] + 8) = 0LL;
        *((_QWORD *)&v87[4] + 1) = 0LL;
        *(_OWORD *)((char *)&v87[3] + 8) = 0LL;
        memset(&P[7], 0, 0x48uLL);
        LOBYTE(v16) = 0;
        v21 = 1;
      }
      if ( v20 - (unsigned int)v26 < 4 )
        goto LABEL_93;
      v27 = *(_DWORD *)((char *)v93 + v26);
      v28 = v26 + 4;
      v91 = v27;
      v90 = v28;
      if ( v20 - v28 < v27 )
        goto LABEL_93;
      if ( v27 > 0xFFFE )
      {
        v15 = -1073741562;
        goto LABEL_87;
      }
      DWORD2(v102) = v27;
      v103 = (char *)v93 + v28;
      v29 = sub_14021984C(&v101, 0LL, &P[9 * v21], (char *)v75 + v21, v73);
      LOBYTE(v16) = 0;
      v15 = v29;
      if ( v29 < 0 )
        goto LABEL_87;
      v30 = &P[9 * v21 - 2];
      switch ( (_BYTE)v24 )
      {
        case 0xF9:
          v31 = (void *)v95;
          if ( !a11 )
            v31 = v96;
          *(_DWORD *)v30 = 3;
          break;
        case 0xFB:
          v31 = (void *)v97;
          if ( !a11 )
            v31 = (void *)v98;
          *(_DWORD *)v30 = 5;
          break;
        case 0xFA:
          v31 = v99;
          *(_DWORD *)v30 = 4;
          break;
        case 0xFC:
          v32 = v86;
          v31 = v86;
          *(_DWORD *)v30 = 6;
LABEL_27:
          P[9 * v21 - 1] = v31;
          *(_OWORD *)&P[9 * v21 + 5] = 0LL;
          v15 = sub_140300374(&P[9 * v21 - 2]);
          if ( v15 == -1073741275 )
          {
            if ( *(_DWORD *)v30 != 2 || (off_140C06A88[4] & 1) == 0 || (v32[50] & 0x20000) != 0 )
              goto LABEL_30;
            v64 = sub_1402D6A64((PCUNICODE_STRING)&P[9 * v21]);
            LOBYTE(v16) = 0;
            if ( !v64 || v83 )
              goto LABEL_31;
            if ( v79 )
            {
              v66 = v80;
            }
            else
            {
              v65 = sub_1405F58AC(v92, &v89);
              LOBYTE(v16) = 0;
              v15 = v65;
              if ( v65 < 0 )
              {
                v83 = 1;
                v79 = 0;
                if ( v65 != -1073741275 )
                {
                  v17 = v89;
                  v80 = v89;
LABEL_73:
                  if ( v15 != -1073741275 )
                  {
                    v14 = v81;
                    goto LABEL_45;
                  }
                  goto LABEL_74;
                }
                v80 = v89;
                goto LABEL_31;
              }
              v66 = v89;
              v80 = v89;
              v79 = 1;
            }
            P[9 * v21 - 1] = v66;
            v15 = sub_140300374(&P[9 * v21 - 2]);
            if ( v15 == -1073741275 )
            {
              P[9 * v21 - 1] = v92;
LABEL_30:
              LOBYTE(v16) = 0;
LABEL_31:
              if ( (unsigned __int8)CurrentIrql >= 2u || *(_DWORD *)v30 != 2 )
              {
LABEL_74:
                v15 = 0;
                v33 = 40LL * v21;
                *(_WORD *)((char *)v87 + v33) = 0;
                *(_DWORD *)((char *)v87 + v33 + 4) = 0;
                *(_QWORD *)((char *)&v87[1] + v33) = 0LL;
                if ( *((_BYTE *)v75 + v21) )
                {
                  ExFreePoolWithTag(P[9 * v21 + 1], 0);
                  if ( v21 >= 2uLL )
                    sub_140502A3C();
                  LOBYTE(v16) = 0;
                  *((_BYTE *)v75 + v21) = 0;
                }
                goto LABEL_36;
              }
              *(_DWORD *)v30 = 7;
              P[9 * v21 - 1] = 0LL;
              v15 = sub_140300374(&P[9 * v21 - 2]);
            }
          }
          LOBYTE(v16) = 0;
          if ( v15 >= 0 )
          {
            v33 = 40LL * v21;
            *(_WORD *)((char *)v87 + v33) = P[9 * v21 + 2];
            *(_DWORD *)((char *)v87 + v33 + 4) = P[9 * v21 + 3];
            *(_QWORD *)((char *)&v87[1] + v33) = v30;
LABEL_36:
            ++v21;
            v34 = *(_DWORD *)v30;
            LODWORD(v22) = v91 + v90;
            v20 = a9;
            *(_DWORD *)((char *)&v87[1] + v33 + 8) = 0;
            *(_QWORD *)((char *)&v87[2] + v33) = 0LL;
            *(_DWORD *)((char *)v87 + v33 + 8) = 0;
            *(_DWORD *)((char *)v87 + v33 + 12) = v34;
            goto LABEL_37;
          }
          v17 = v80;
          goto LABEL_73;
        default:
          v31 = v92;
          *(_DWORD *)v30 = 2;
          break;
      }
      v32 = v86;
      goto LABEL_27;
    }
    LODWORD(v22) = v22 + 1;
    v67 = sub_140219A04(v25, v87, v21, v74);
    LOBYTE(v16) = 0;
    if ( !v67 )
    {
      v15 = -1073741406;
      if ( !v74[0] )
        goto LABEL_87;
    }
    if ( v74[0] )
    {
      v69 = 0xFFFFFFFFLL;
    }
    else
    {
      LOBYTE(v68) = v24;
      sub_14064AF30(v68, v87, &v94);
      v69 = v94 == -1 ? 0xFFFFFFFFLL : v94 != 0;
    }
    v76 = v69;
    v15 = sub_1402199DC(v106, &v82, v69);
    if ( v15 < 0 )
      goto LABEL_87;
    sub_1402197CC(v87, v75);
    LOBYTE(v16) = 0;
LABEL_37:
    if ( (unsigned int)v22 >= v20 )
      goto LABEL_41;
    v12 = v93;
  }
  if ( v24 == 140 )
    goto LABEL_134;
  if ( (unsigned int)v25 > 0x86 )
  {
    v25 = (unsigned int)(v25 - 135);
    if ( !(_DWORD)v25 )
      goto LABEL_83;
    v25 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v25 )
    {
      v25 = (unsigned int)(v25 - 1);
      if ( (_DWORD)v25 )
      {
        v25 = (unsigned int)(v25 - 1);
        if ( !(_DWORD)v25 )
          goto LABEL_134;
        v49 = (_DWORD)v25 == 1;
LABEL_110:
        if ( !v49 )
          goto LABEL_93;
      }
      goto LABEL_111;
    }
LABEL_68:
    LOBYTE(v25) = *v23;
    LODWORD(v22) = v22 + 1;
    v45 = sub_140219A04(v25, v87, v21, v74);
    LOBYTE(v16) = 0;
    if ( !v45 )
    {
      v15 = -1073741406;
      if ( !v74[0] )
        goto LABEL_87;
    }
    if ( v74[0] )
      goto LABEL_196;
    LOBYTE(v46) = v24;
    sub_140219B90(v46, v87, &v76);
    v43 = v76;
    if ( (_BYTE)v24 != 0x8E && (_BYTE)v24 != 0x8F || v76 == -1 )
      goto LABEL_58;
LABEL_133:
    v57 = v43 == 0;
    v43 = (_DWORD)v43 == 0;
    v76 = v57;
    goto LABEL_58;
  }
  if ( (unsigned int)v25 >= 0x80 )
    goto LABEL_68;
  if ( (_BYTE)v24 )
  {
    if ( (_DWORD)v25 != 16
      && (unsigned int)v25 > 4
      && (_DWORD)v25 != 24
      && ((unsigned int)v25 <= 0x4F || (unsigned int)v25 > 0x51) )
    {
      goto LABEL_93;
    }
    if ( v21 == 2 )
    {
      if ( HIDWORD(v87[0]) == 1 )
        goto LABEL_93;
      v76 = sub_140219B40(*(_QWORD *)&v87[1]);
      v15 = sub_1402199DC(v106, &v82, v76);
      if ( v15 < 0 )
        goto LABEL_87;
      if ( LOBYTE(v75[0]) != (_BYTE)v16 )
      {
        ExFreePoolWithTag(*(PVOID *)(v48 + 24), 0);
        LOBYTE(v16) = 0;
      }
      v104 = *(_OWORD *)&P[7];
      *(_OWORD *)P = *(_OWORD *)&P[9];
      *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
      P[6] = P[15];
      *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
      *(_OWORD *)((char *)&v87[1] + 8) = v87[4];
      *(_QWORD *)&v87[1] = &v104;
      LOBYTE(v75[0]) = HIBYTE(v75[0]);
      v87[0] = *(_OWORD *)((char *)&v87[2] + 8);
      HIBYTE(v75[0]) = v16;
      *(_OWORD *)((char *)&v87[2] + 8) = 0LL;
      *((_QWORD *)&v87[4] + 1) = 0LL;
      *(_OWORD *)((char *)&v87[3] + 8) = 0LL;
      memset(&P[7], 0, 0x48uLL);
      v21 = 1;
    }
    v44 = sub_140219CE4(v23, v20 - (unsigned int)v22, (char *)v87 + 40 * v21, &v88);
    LOBYTE(v16) = 0;
    v15 = v44;
    if ( v44 < 0 )
      goto LABEL_87;
    ++v21;
    LODWORD(v22) = v88 + v22;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v22 = (unsigned int)(v22 + 1);
    v35 = (_DWORD)v22 == v20;
    if ( (unsigned int)v22 >= v20 )
      break;
    if ( *((_BYTE *)v93 + v22) )
    {
      v35 = (_DWORD)v22 == v20;
      break;
    }
  }
  if ( !v35 )
  {
LABEL_93:
    v15 = -1073741406;
    goto LABEL_87;
  }
LABEL_41:
  if ( v82 == 1 )
  {
    v36 = v106[0];
LABEL_43:
    v14 = v81;
    *v81 = v36;
    goto LABEL_44;
  }
  if ( !v82 && v21 == 1 )
  {
    v36 = sub_140219B40(*(_QWORD *)&v87[1]);
    goto LABEL_43;
  }
LABEL_87:
  v14 = v81;
LABEL_44:
  v17 = v80;
LABEL_45:
  v37 = v75;
  v38 = 2LL;
  v39 = &P[1];
  do
  {
    if ( *v37 != (_BYTE)v16 )
    {
      ExFreePoolWithTag(*v39, 0);
      LOBYTE(v16) = 0;
    }
    ++v37;
    v39 += 9;
    --v38;
  }
  while ( v38 );
  if ( v79 != (_BYTE)v16 && v17 )
  {
    sub_14028AB90(v17);
    ExFreePoolWithTag(v17, 0x74416553u);
  }
  if ( v15 < 0 )
    *v14 = -1;
  return (unsigned int)v15;
}
