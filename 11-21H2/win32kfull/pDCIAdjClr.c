/*
 * XREFs of pDCIAdjClr @ 0x1C0094724
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C0092FAC (HT_HalftoneBitmap.c)
 *     HT_CreateStandardMonoPattern @ 0x1C013D000 (HT_CreateStandardMonoPattern.c)
 *     HT_CreateHalftoneBrush @ 0x1C025DF88 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     AdjustSrcDevGamma @ 0x1C00950A4 (AdjustSrcDevGamma.c)
 *     DivFD6 @ 0x1C00952E0 (DivFD6.c)
 *     RaisePower @ 0x1C0095584 (RaisePower.c)
 *     Log @ 0x1C00957B4 (Log.c)
 *     ComputeColorSpaceXForm @ 0x1C0095D6C (ComputeColorSpaceXForm.c)
 *     CompareMemory @ 0x1C0113BF4 (CompareMemory.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GenCMYMaskXlate @ 0x1C025F3D4 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C025F608 (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(__int64 a1, __m128i *a2, char **a3, unsigned int a4, __int16 a5, int a6, _DWORD *a7)
{
  __int64 v11; // rdi
  char *v12; // rax
  char *v13; // r12
  int v14; // r15d
  __int16 v15; // r8
  __int16 v16; // dx
  __int16 v17; // si
  __m128i v18; // xmm1
  __int64 v19; // xmm0_8
  int v20; // ebx
  __int8 v21; // r8d^2
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // ecx
  int v38; // r9d
  __int16 v39; // cx
  char v40; // r14
  int v41; // eax
  __m128i v42; // xmm2
  __int64 v43; // rdx
  __int8 v44; // cl
  char v45; // al
  unsigned int v46; // ebx
  int v47; // ebx
  int v48; // eax
  int v49; // eax
  __int64 v50; // r9
  int v51; // eax
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  int v64; // eax
  int v66; // ebx
  char v67; // r15
  __int64 v68; // r15
  unsigned __int16 epi16; // ax
  unsigned int v70; // ebx
  int v71; // r12d
  __int64 v72; // rdx
  int v73; // r15d
  int v74; // ecx
  unsigned int v75; // ecx
  __int64 v76; // xmm0_8
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  int v90; // eax
  unsigned int *v91; // r8
  unsigned int i; // ecx
  unsigned int v93; // eax
  int v94; // ebx
  char v95; // r8
  unsigned __int8 v96; // r9
  char v97; // dl
  char *v98; // rcx
  __int64 v99; // rax
  char v100; // al
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  char v104; // al
  __int16 v105; // [rsp+30h] [rbp-D0h]
  int v106; // [rsp+30h] [rbp-D0h]
  __int128 v107; // [rsp+38h] [rbp-C8h]
  __int128 v108; // [rsp+48h] [rbp-B8h]
  __int16 v109; // [rsp+58h] [rbp-A8h]
  char *v110; // [rsp+60h] [rbp-A0h]
  __int128 v111; // [rsp+70h] [rbp-90h] BYREF
  __int128 v112; // [rsp+80h] [rbp-80h]
  __int128 v113; // [rsp+90h] [rbp-70h] BYREF
  __m256i v114; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v115; // [rsp+C0h] [rbp-40h]
  __int128 v116; // [rsp+D0h] [rbp-30h]
  __int128 v117; // [rsp+E0h] [rbp-20h]
  __int128 v118; // [rsp+F0h] [rbp-10h]
  __int128 v119; // [rsp+100h] [rbp+0h] BYREF
  __int128 v120; // [rsp+110h] [rbp+10h]
  __int128 v121; // [rsp+120h] [rbp+20h]
  __int128 v122; // [rsp+130h] [rbp+30h]
  __int128 v123; // [rsp+140h] [rbp+40h]
  int v124; // [rsp+150h] [rbp+50h]
  __int128 v125; // [rsp+160h] [rbp+60h] BYREF
  __int64 v126; // [rsp+170h] [rbp+70h]
  __int128 v127; // [rsp+178h] [rbp+78h]
  __int64 v128; // [rsp+188h] [rbp+88h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    if ( (a5 & 0x200) != 0 && dwABPreMul )
    {
      dwABPreMul = 0;
      v91 = (unsigned int *)&unk_1C032F774;
      for ( i = 1; i < 0x100; ++i )
      {
        v93 = (i - 16777217) / i;
        *v91++ = v93;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v12 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      *a3 = v12;
      v110 = v12;
      v13 = v12;
      if ( v12 )
      {
        v14 = *(_DWORD *)(v11 + 184);
        DWORD1(v107) = a6;
        v15 = a5 | 8;
        v105 = v14;
        if ( (v14 & 0x80u) == 0 )
          v15 = a5;
        if ( HIBYTE(a6) == 1 || (v16 = v15, HIBYTE(a6) == 0xFE) && (*(_DWORD *)(v11 + 184) & 0x300) == 0x300 )
          v16 = v15 | 0x41;
        v17 = v16 & 0xFFEF;
        v109 = v16 & 0x10;
        if ( (v16 & 8) == 0 )
          v17 = v16;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v18 = *a2;
        v19 = a2[1].m128i_i64[0];
        v20 = 24;
        v125 = (__int128)v18;
        v126 = v19;
        if ( (unsigned __int16)_mm_cvtsi128_si32(v18) != 24 || (v21 = BYTE2(v125), (WORD1(v125) & 0xFFFC) != 0) )
        {
          v125 = DefaultCA;
          v21 = BYTE2(DefaultCA);
          v126 = 0LL;
        }
        v22 = *(_QWORD *)(v11 + 212);
        v127 = *(_OWORD *)(v11 + 196);
        v23 = *(_OWORD *)(v11 + 220);
        v128 = v22;
        v24 = *(_OWORD *)(v11 + 236);
        WORD1(v125) = v21 & 3;
        v111 = v23;
        v25 = *(_OWORD *)(v11 + 252);
        v112 = v24;
        v26 = *(_OWORD *)(v11 + 268);
        v113 = v25;
        v27 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v114.m256i_i8 = v26;
        v28 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v114.m256i_u64[2] = v27;
        v29 = *(_OWORD *)(v11 + 316);
        v115 = v28;
        v30 = *(_OWORD *)(v11 + 332);
        v116 = v29;
        v31 = *(_OWORD *)(v11 + 348);
        v117 = v30;
        v32 = *(_OWORD *)(v11 + 364);
        v118 = v31;
        v33 = *(_OWORD *)(v11 + 380);
        v119 = v32;
        v34 = *(_OWORD *)(v11 + 396);
        v120 = v33;
        v35 = *(_OWORD *)(v11 + 412);
        v121 = v34;
        v36 = *(_OWORD *)(v11 + 428);
        v37 = *(_DWORD *)(v11 + 444);
        v122 = v35;
        v123 = v36;
        v124 = v37;
        if ( WORD2(v125) > 8u )
          WORD2(v125) = 0;
        if ( WORD3(v125) < 0x540u )
        {
          WORD3(v125) = 1344;
        }
        else if ( WORD3(v125) > 0xFDE8u )
        {
          WORD3(v125) = -536;
        }
        if ( WORD4(v125) < 0x540u )
        {
          WORD4(v125) = 1344;
        }
        else if ( WORD4(v125) > 0xFDE8u )
        {
          WORD4(v125) = -536;
        }
        if ( WORD5(v125) < 0x540u )
        {
          WORD5(v125) = 1344;
        }
        else if ( WORD5(v125) > 0xFDE8u )
        {
          WORD5(v125) = -536;
        }
        if ( WORD6(v125) > 0xFA0u )
          WORD6(v125) = 4000;
        if ( HIWORD(v125) < 0x1770u )
        {
          HIWORD(v125) = 6000;
        }
        else if ( HIWORD(v125) > 0x2710u )
        {
          HIWORD(v125) = 10000;
        }
        v38 = 100;
        if ( (__int16)v126 < -100 )
        {
          LOWORD(v126) = -100;
        }
        else if ( (__int16)v126 > 100 )
        {
          LOWORD(v126) = 100;
        }
        if ( SWORD1(v126) < -100 )
        {
          WORD1(v126) = -100;
        }
        else if ( SWORD1(v126) > 100 )
        {
          WORD1(v126) = 100;
        }
        v39 = WORD2(v126);
        if ( SWORD2(v126) < -100 )
        {
          v39 = -100;
          WORD2(v126) = -100;
        }
        else if ( SWORD2(v126) > 100 )
        {
          v39 = 100;
          WORD2(v126) = 100;
        }
        if ( SHIWORD(v126) < -100 )
        {
          HIWORD(v126) = -100;
        }
        else if ( SHIWORD(v126) > 100 )
        {
          HIWORD(v126) = 100;
        }
        if ( (v17 & 1) != 0 || v39 == -100 )
          HIDWORD(v126) = 65436;
        v40 = 2;
        if ( (v17 & 2) != 0 )
          WORD1(v125) = v21 & 2 | 1;
        LOBYTE(v38) = HIBYTE(a6);
        LOWORD(v125) = v17 & 0x8059;
        v41 = AdjustSrcDevGamma(v11, (unsigned int)&v111, (unsigned int)&v125, v38, v17);
        v42 = (__m128i)v125;
        if ( !v41 )
        {
          v43 = 0LL;
          while ( 1 )
          {
            v44 = *((_BYTE *)&v125 + v43);
            --v20;
            v45 = *((_BYTE *)&v127 + v43++);
            if ( v44 != v45 )
              break;
            if ( !v20 )
            {
              v46 = v111;
              goto LABEL_54;
            }
          }
        }
        v66 = v111 & 0x1007;
        LODWORD(v111) = v66;
        if ( (v17 & 0x40) != 0 )
        {
          v66 |= 0x2000u;
          LODWORD(v111) = v66;
        }
        v67 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v125, 2));
        if ( (v67 & 2) != 0 )
        {
          if ( !LogFilterMax )
            LogFilterMax = Log(8000000LL);
          v66 |= 0x100u;
          LODWORD(v111) = v66;
        }
        if ( (v67 & 1) != 0 )
        {
          v66 |= 0x200u;
          LODWORD(v111) = v66;
        }
        v68 = v11 + (-(__int64)((v66 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + 72;
        if ( (((unsigned __int16)_mm_cvtsi128_si32(v42) ^ (unsigned __int16)v127) & 0x8008) != 0 )
        {
          ComputeColorSpaceXForm(
            v11,
            v11 + (-(__int64)((v66 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + 72,
            (char *)&v119 + 4,
            0xFFFFFFFFLL);
          v66 = v111;
        }
        epi16 = _mm_extract_epi16(v42, 2);
        if ( epi16 != WORD2(v127) )
        {
          ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v114.m256i_u64[2] + 4, epi16);
          v66 = v111;
        }
        if ( (v66 & 0x2000) != 0 || (unsigned int)CompareMemory(v68, v11 + 36, 36LL) )
          v70 = v66 & 0xFFFF7FFF;
        else
          v70 = v66 | 0x8000;
        v71 = (unsigned __int16)_mm_extract_epi16(v42, 6);
        v72 = (unsigned int)(100 * v71);
        v73 = (unsigned __int16)_mm_extract_epi16(v42, 7);
        v114.m256i_i32[0] = 100 * v71;
        v114.m256i_i32[1] = 100 * v73;
        if ( v71 || 100 * v73 != 1000000 )
        {
          v46 = v70 | 8;
          LODWORD(v111) = v46;
          v114.m256i_i32[2] = DivFD6(0LL, v72);
          v114.m256i_i32[3] = DivFD6(0LL, (unsigned int)(100 * (10000 - v73)));
          v114.m256i_i32[4] = DivFD6(1000000LL, (unsigned int)(100 * (v73 - v71)));
        }
        else
        {
          v46 = v70 & 0xFFFFFFF7;
          v114.m256i_i32[0] = 0;
          *(__int64 *)((char *)&v114.m256i_i64[1] + 4) = 0LL;
          LODWORD(v111) = v46;
          *(__int64 *)((char *)v114.m256i_i64 + 4) = 1000000LL;
        }
        if ( (_WORD)v126 )
        {
          v46 |= 0x10u;
          HIDWORD(v112) = RaisePower(1015000LL, (unsigned int)(__int16)v126, 2LL);
          LODWORD(v111) = v46;
        }
        if ( WORD1(v126) )
        {
          v46 |= 0x20u;
          LODWORD(v111) = v46;
          LODWORD(v113) = 3750 * SWORD1(v126);
        }
        if ( (v46 & 0x2000) != 0 )
        {
          LOWORD(v14) = v105;
        }
        else
        {
          v74 = 10000 * SWORD2(v126);
          DWORD1(v113) = v74 + 1000000;
          if ( v74 )
          {
            v46 |= 0x40u;
            LODWORD(v111) = v46;
          }
          if ( HIWORD(v126) )
          {
            TintAngle((unsigned int)SHIWORD(v126), v72, (char *)&v113 + 8, (char *)&v113 + 12);
            v46 = v111 | 0x80;
            LODWORD(v111) = v111 | 0x80;
          }
          LOWORD(v14) = v105;
          v75 = v46;
          if ( (v105 & 4) != 0 && (v46 & 0x1001) == 0x1000 )
          {
            v46 |= 0x400u;
            LODWORD(v111) = v46;
            if ( (v105 & 1) != 0 )
            {
              v46 = v75 | 0xC00;
              LODWORD(v111) = v75 | 0xC00;
            }
          }
        }
        v76 = v126;
        v77 = v112;
        v13 = v110;
        *(__m128i *)(v11 + 196) = v42;
        *(_QWORD *)(v11 + 212) = v76;
        *(_OWORD *)(v11 + 220) = v111;
        v78 = v113;
        *(_OWORD *)(v11 + 236) = v77;
        v79 = *(_OWORD *)v114.m256i_i8;
        *(_OWORD *)(v11 + 252) = v78;
        v80 = *(_OWORD *)&v114.m256i_u64[2];
        *(_OWORD *)(v11 + 268) = v79;
        v81 = v115;
        *(_OWORD *)(v11 + 284) = v80;
        v82 = v116;
        *(_OWORD *)(v11 + 300) = v81;
        v83 = v117;
        *(_OWORD *)(v11 + 316) = v82;
        v84 = v118;
        *(_OWORD *)(v11 + 332) = v83;
        v85 = v119;
        *(_OWORD *)(v11 + 348) = v84;
        v86 = v120;
        *(_OWORD *)(v11 + 364) = v85;
        v87 = v121;
        *(_OWORD *)(v11 + 380) = v86;
        v88 = v122;
        *(_OWORD *)(v11 + 396) = v87;
        v89 = v123;
        v90 = v124;
        *(_OWORD *)(v11 + 412) = v88;
        *(_OWORD *)(v11 + 428) = v89;
        *(_DWORD *)(v11 + 444) = v90;
LABEL_54:
        v47 = v46 & 0x3DB4BFFF;
        LODWORD(v111) = v47;
        if ( (v47 & 0x97FE) == 0 )
        {
          v47 |= 0x80000000;
          LODWORD(v111) = v47;
        }
        if ( (v47 & 0x84C0) == 0 || (v47 & 0x2000) != 0 )
        {
          v47 |= 0x40000000u;
          LODWORD(v111) = v47;
        }
        if ( (v17 & 0x20) != 0 || (v14 & 0x1000) != 0 )
        {
          v47 |= 0x80000u;
          LODWORD(v111) = v47;
        }
        v48 = v47;
        if ( (v17 & 0x80u) == 0 )
        {
LABEL_61:
          if ( (v17 & 4) != 0 )
          {
            v47 |= 0x4000u;
            LODWORD(v111) = v47;
          }
          HIDWORD(v108) = 1000000;
          v128 = 0LL;
          LODWORD(v107) = 67372032;
          BYTE4(v107) = 3;
          v127 = 0LL;
          if ( (v47 & 0x2000) != 0 )
          {
            v47 |= 0x40000u;
            LOBYTE(v107) = 1;
            LODWORD(v111) = v47;
            v49 = 0xFFFF;
            DWORD1(v108) = 0;
          }
          else
          {
            DWORD1(v108) = 4096;
            v49 = 4095;
          }
          DWORD2(v107) = v49;
          HIDWORD(v107) = v49;
          LODWORD(v108) = v49;
          switch ( HIBYTE(a6) )
          {
            case 1u:
              BYTE6(v107) = 0;
              goto LABEL_69;
            case 2u:
LABEL_140:
              LODWORD(v127) = 0x100000;
              *(_QWORD *)((char *)&v127 + 4) = 0x40000000200000LL;
              HIDWORD(v127) = 0x10000;
              v128 = 0x4000000020000LL;
              WORD1(v107) = 1541;
              DWORD1(v108) = 0;
              goto LABEL_69;
            case 5u:
            case 6u:
              WORD1(v107) = 0;
              *(_QWORD *)&v108 = 255LL;
              BYTE1(v107) = 0;
              *((_QWORD *)&v107 + 1) = 0xFF000000FFLL;
              *(_QWORD *)((char *)&v127 + 4) = 0x200000001LL;
              goto LABEL_69;
            case 0xFCu:
              if ( BYTE2(a6) )
              {
                v104 = BYTE2(a6);
                if ( BYTE2(a6) != 4 )
                  v104 = 0;
                BYTE6(v107) = v104;
              }
              LODWORD(v108) = 126975;
              *((_QWORD *)&v107 + 1) = 0x3EFFF0001EFFFLL;
              v128 = -1LL;
              *(_QWORD *)&v127 = 0x7E00000001F0000LL;
              *((_QWORD *)&v127 + 1) = -134217728LL;
              WORD1(v107) = 3849;
              goto LABEL_69;
            case 0xFDu:
              *(_QWORD *)&v127 = 0x3E00000001F0000LL;
              LODWORD(v108) = 126975;
              *((_QWORD *)&v107 + 1) = 0x1EFFF0001EFFFLL;
              v128 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v127 + 1) = 0x7FFF7FFF7C000000LL;
              WORD1(v107) = 3593;
              goto LABEL_69;
          }
          if ( HIBYTE(a6) != 254 )
          {
            if ( HIBYTE(a6) == 255 )
            {
              BYTE6(v107) = 4;
              LODWORD(v111) = v47 | 0x4000;
              goto LABEL_140;
            }
LABEL_69:
            *(__m128i *)v13 = v42;
            v50 = (unsigned __int8)BYTE1(DstOrderTable[BYTE6(v107)]);
            DWORD2(v108) = DstOrderTable[BYTE6(v107)];
            v51 = *((_DWORD *)&v127 + v50);
            *(_OWORD *)(v13 + 24) = v107;
            *((_QWORD *)v13 + 2) = v126;
            *(_OWORD *)(v13 + 40) = v108;
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 868) = v51;
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 864) = *((_DWORD *)&v127 + BYTE10(v108));
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 860) = *((_DWORD *)&v127 + BYTE11(v108));
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 880) = *((_DWORD *)&v127 + v50 + 3);
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 876) = *((_DWORD *)&v127 + BYTE10(v108) + 3);
            *(_DWORD *)((-(__int64)(v109 != 0) & 0xC1C) + v11 + 872) = *((_DWORD *)&v127 + BYTE11(v108) + 3);
            v52 = v112;
            *(_OWORD *)(v13 + 56) = v111;
            v53 = v113;
            *(_OWORD *)(v13 + 72) = v52;
            v54 = *(_OWORD *)v114.m256i_i8;
            *(_OWORD *)(v13 + 88) = v53;
            v55 = *(_OWORD *)&v114.m256i_u64[2];
            *(_OWORD *)(v13 + 104) = v54;
            v56 = v115;
            *(_OWORD *)(v13 + 120) = v55;
            v57 = v116;
            *(_OWORD *)(v13 + 136) = v56;
            v58 = v117;
            *(_OWORD *)(v13 + 152) = v57;
            *(_OWORD *)(v13 + 168) = v58;
            v59 = v119;
            *(_OWORD *)(v13 + 184) = v118;
            v60 = v120;
            *(_OWORD *)(v13 + 200) = v59;
            v61 = v121;
            *(_OWORD *)(v13 + 216) = v60;
            v62 = v122;
            *(_OWORD *)(v13 + 232) = v61;
            v63 = v123;
            v64 = v124;
            *(_OWORD *)(v13 + 248) = v62;
            *(_OWORD *)(v13 + 264) = v63;
            *((_DWORD *)v13 + 70) = v64;
            *((_QWORD *)v13 + 36) = v11 + 32;
            *((_QWORD *)v13 + 37) = v11 + 808;
            *((_QWORD *)v13 + 38) = v11 + 832;
            return v11;
          }
          if ( (v14 & 0x100) == 0 )
          {
            *(_QWORD *)&v127 = 0x38000000070000LL;
            LODWORD(v108) = 20479;
            *((_QWORD *)&v107 + 1) = 0x4FFF00004FFFLL;
            LODWORD(v111) = v47 & 0xFFFEFFFF;
            DWORD2(v127) = 29360128;
            WORD1(v107) = 2567;
            BYTE6(v107) = 4;
            goto LABEL_69;
          }
          v94 = v47 | 0x10000;
          LOWORD(v106) = 0;
          LODWORD(v111) = v94;
          if ( *(_BYTE *)(v11 + 804) )
          {
            GenCMYMaskXlate(
              v11 + 548,
              v14 & 0x2000,
              *(unsigned __int8 *)(v11 + 448),
              *(unsigned __int8 *)(v11 + 449),
              *(unsigned __int8 *)(v11 + 450));
            *(_BYTE *)(v11 + 804) = 0;
          }
          if ( (v14 & 0x2000) != 0 )
            LOWORD(v106) = -254;
          else
            v40 = 0;
          HIBYTE(v106) = -((v14 & 0x2000) != 0);
          BYTE2(v106) = HIBYTE(v106) ^ *(_BYTE *)(v11 + 452);
          if ( (v14 & 0x200) != 0 )
          {
            WORD3(v107) = -1280;
            *(_QWORD *)((char *)&v127 + 4) = 0xFF000000FF0000LL;
            LODWORD(v127) = 16711680;
LABEL_168:
            HIDWORD(v128) = v106;
            LODWORD(v128) = v106;
            HIDWORD(v127) = v106;
            goto LABEL_69;
          }
          v95 = 7;
          v96 = *(_BYTE *)(v11 + 453);
          v97 = 10;
          WORD1(v107) = 2567;
          DWORD2(v107) = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
          HIDWORD(v107) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
          LODWORD(v108) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
          LODWORD(v127) = *(unsigned __int16 *)(v11 + 458);
          DWORD1(v127) = *(unsigned __int16 *)(v11 + 456);
          DWORD2(v127) = *(unsigned __int16 *)(v11 + 454);
          if ( v96 < 4u || v96 > 5u )
          {
            WORD1(v107) = 2310;
            v101 = 250;
            BYTE7(v107) = -6;
            v95 = 6;
            v97 = 9;
            if ( (v14 & 0x2000) == 0 )
            {
LABEL_160:
              if ( *(_DWORD *)(v11 + 472) )
              {
                HIDWORD(v108) = *(_DWORD *)(v11 + 472);
                LODWORD(v111) = v94 | 0x20000;
                BYTE1(v107) = 0;
                BYTE2(v107) = v95 - 4;
                BYTE3(v107) = v97 - 4;
                v102 = v101 - 248;
                if ( v102 )
                {
                  v103 = v102 - 1;
                  if ( v103 )
                  {
                    if ( v103 == 1 )
                      BYTE7(v107) = -9;
                  }
                  else
                  {
                    BYTE7(v107) = -10;
                  }
                }
                else
                {
                  BYTE7(v107) = -11;
                }
              }
              BYTE6(v107) = 0;
              goto LABEL_168;
            }
            v94 |= 0x2000000u;
            BYTE2(v106) = *(_BYTE *)(v11 + 803);
            v100 = *(_BYTE *)(v11 + 548);
          }
          else
          {
            if ( v96 == 4 )
            {
              BYTE7(v107) = -7;
            }
            else
            {
              BYTE7(v107) = -8;
              v40 |= 1u;
            }
            v94 |= 0x400000u;
            LOBYTE(v106) = v40 & 3;
            v98 = (char *)*(&p8BPPXlate + (v40 & 3));
            v99 = 292LL;
            if ( v96 != 4 )
              v99 = 365LL;
            BYTE2(v106) = v98[v99];
            v100 = *v98;
            v101 = 249 - (v96 != 4);
          }
          HIBYTE(v106) = v100;
          LODWORD(v111) = v94;
          goto LABEL_160;
        }
        v47 |= 0x100000u;
        LODWORD(v111) = v47;
        if ( (v17 & 0x100) != 0 )
        {
          v47 = v48 | 0x300000;
        }
        else
        {
          if ( (v17 & 0x200) != 0 )
          {
            v47 = v48 | 0x900000;
            LODWORD(v111) = v48 | 0x900000;
          }
          if ( (v17 & 0x400) == 0 )
            goto LABEL_61;
          v47 |= 0x1000000u;
        }
        LODWORD(v111) = v47;
        goto LABEL_61;
      }
    }
    *a7 = -2;
    EngReleaseSemaphore(*(HSEMAPHORE *)(v11 + 8));
  }
  else
  {
    *a7 = -12;
  }
  return 0LL;
}
