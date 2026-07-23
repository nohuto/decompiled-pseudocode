/*
 * XREFs of sub_1406A7BF4 @ 0x1406A7BF4
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1402F614C @ 0x1402F614C (sub_1402F614C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A8890 @ 0x1406A8890 (sub_1406A8890.c)
 *     sub_1406A88DC @ 0x1406A88DC (sub_1406A88DC.c)
 *     sub_1406A892C @ 0x1406A892C (sub_1406A892C.c)
 *     sub_1406A894C @ 0x1406A894C (sub_1406A894C.c)
 *     sub_1406BF0AC @ 0x1406BF0AC (sub_1406BF0AC.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1406A7BF4(ULONG_PTR a1, size_t a2, unsigned int a3)
{
  char *v5; // rbx
  char v6; // r13
  int v7; // esi
  char *v8; // r11
  unsigned int v9; // r9d
  unsigned int v10; // esi
  unsigned int v11; // r15d
  _QWORD *v12; // r10
  unsigned int v13; // r9d
  __int64 v14; // rdx
  _QWORD **i; // rdx
  unsigned __int16 *v16; // rdx
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char *v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __int64 v25; // r14
  unsigned int v26; // r12d
  char *v27; // r10
  int v28; // ebx
  unsigned __int8 *v29; // r8
  __int64 v30; // r9
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rdx
  __int64 *v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rax
  _DWORD *v38; // rsi
  int v39; // ecx
  size_t v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  int v43; // r9d
  int v44; // r9d
  int v45; // r9d
  int v46; // r9d
  int v47; // r9d
  int v48; // r9d
  __int64 j; // r10
  __int64 v50; // rdx
  __int64 *k; // rdx
  unsigned int v53; // [rsp+40h] [rbp-138h]
  size_t Size; // [rsp+48h] [rbp-130h] BYREF
  PVOID Object; // [rsp+50h] [rbp-128h] BYREF
  __int64 *v56; // [rsp+58h] [rbp-120h]
  int v57; // [rsp+60h] [rbp-118h]
  int v58; // [rsp+64h] [rbp-114h]
  __m128i v59; // [rsp+68h] [rbp-110h] BYREF
  __int128 v60; // [rsp+78h] [rbp-100h] BYREF
  __int128 v61; // [rsp+88h] [rbp-F0h]
  __int128 v62; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v63; // [rsp+A8h] [rbp-D0h]
  char *v64; // [rsp+B8h] [rbp-C0h]
  __int64 v65; // [rsp+C0h] [rbp-B8h]
  _QWORD *v66; // [rsp+C8h] [rbp-B0h]
  __int128 v67; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-98h]
  __int64 v69; // [rsp+F0h] [rbp-88h]
  __int64 *v70; // [rsp+F8h] [rbp-80h]
  __int128 v71; // [rsp+100h] [rbp-78h] BYREF
  __int128 v72; // [rsp+110h] [rbp-68h]
  __int64 v73; // [rsp+120h] [rbp-58h] BYREF
  __int64 v74; // [rsp+128h] [rbp-50h]
  __int128 v75; // [rsp+130h] [rbp-48h] BYREF
  __int128 v76; // [rsp+140h] [rbp-38h]
  __int64 v77; // [rsp+198h] [rbp+20h]

  v5 = 0LL;
  Object = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v6 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  if ( !qword_140C5AE28 )
  {
    v7 = -1073741637;
    goto LABEL_80;
  }
  v7 = sub_140732D40(a1, 0x74456F50u, (__int64)&Object, 0LL, 0LL);
  v5 = (char *)Object;
  if ( v7 >= 0 )
  {
    v75 = 2uLL;
    v76 = (unsigned __int64)Object;
    v7 = sub_1406BF0AC(sub_1407A5B90, &v75);
    if ( v7 >= 0 )
    {
      sub_1402D66A8((ULONG_PTR)(v5 + 16));
      v6 = 1;
      v8 = v5 + 48;
      v9 = *((_DWORD *)v5 + 12);
      v53 = v9;
      v10 = 0;
      v11 = 44;
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 )
        {
          v13 = *((_DWORD *)v8 + 1);
          Size = v12[1] & (-1LL << (v13 & 0x1F));
          v14 = *((_QWORD *)v8 + 1)
              + 8LL
              * ((37
                * (BYTE6(Size)
                 + 37
                 * (BYTE5(Size)
                  + 37
                  * (BYTE4(Size)
                   + 37
                   * (BYTE3(Size) + 37 * (BYTE2(Size) + 37 * (BYTE1(Size) + 37 * ((unsigned __int8)Size + 11623883)))))))
                + HIBYTE(Size)) & ((v13 >> 5) - 1));
          v9 = v53;
        }
        else
        {
          v12 = (_QWORD *)*((_QWORD *)v8 + 1);
          v14 = (__int64)v12;
        }
        if ( !v12 )
          goto LABEL_8;
        if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v5 = (char *)Object;
        v12 = (_QWORD *)*v12;
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
LABEL_8:
          for ( i = (_QWORD **)(v14 + 8);
                (unsigned __int64)i < *((_QWORD *)v8 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v8 + 1) >> 5);
                ++i )
          {
            v12 = *i;
            if ( ((unsigned __int8)*i & 1) == 0 )
              goto LABEL_13;
          }
          v12 = 0LL;
        }
LABEL_13:
        if ( !v12 )
          break;
        v16 = (unsigned __int16 *)v12[2];
        if ( v10 >= 0x10000000 )
        {
          v7 = -1073741619;
          goto LABEL_80;
        }
        v11 += v16[43];
        v10 += v16[41] + v16[42] + v16[40];
        v17 = v12[3];
        if ( v17 )
          v10 += ((unsigned int)(*(_QWORD *)(v17 + 24) >> 16) >> 1) & 0x1FFFFFFF;
      }
      LODWORD(Size) = 72;
      v62 = 0LL;
      v63 = 0LL;
      HIDWORD(v62) = 104;
      LODWORD(v63) = 8;
      sub_1406A88DC(&v62, v9, &Size);
      v71 = 0LL;
      v72 = 0LL;
      HIDWORD(v71) = 432;
      LODWORD(v72) = 8;
      sub_1406A88DC(&v71, v53, &Size);
      v67 = 0LL;
      v68 = 0LL;
      HIDWORD(v67) = 1;
      LODWORD(v68) = 4;
      sub_1406A88DC(&v67, v11, &Size);
      v60 = 0LL;
      v61 = 0LL;
      HIDWORD(v60) = 2;
      LODWORD(v61) = 2;
      sub_1406A88DC(&v60, v10, &Size);
      v18 = Size;
      if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
      {
        if ( a3 >= 0xC )
        {
          *(_QWORD *)a2 = 0LL;
          *(_DWORD *)a2 = 2097171;
          *(_DWORD *)(a2 + 8) = v18;
        }
        v7 = -1073741789;
        goto LABEL_80;
      }
      memset((void *)a2, 0, (unsigned int)Size);
      sub_1406A892C(&v62, a2);
      sub_1406A892C(&v71, v19);
      sub_1406A892C(&v67, v20);
      sub_1406A892C(&v60, v21);
      Size = a2;
      *(_DWORD *)a2 = 2097171;
      *(_DWORD *)(a2 + 4) = 72;
      *(_DWORD *)(a2 + 8) = v18;
      *(_DWORD *)(a2 + 12) = *((_DWORD *)v5 + 150);
      *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(a2 + 36) = v62;
      *(_DWORD *)(a2 + 40) = v53;
      *(_DWORD *)(a2 + 56) = 1048680;
      *(_DWORD *)(a2 + 52) = DWORD1(v68);
      *(_WORD *)(a2 + 60) = 12;
      v22 = (char *)Object;
      sub_1406A8890(&v67, (char *)Object + 32, 12LL);
      *(_DWORD *)(a2 + 44) = DWORD1(v68);
      sub_1406A8890(&v67, v22 + 604, 16LL);
      v23 = *(__m128i *)(v22 + 620);
      v59 = v23;
      v59.m128i_i32[0] = *((_DWORD *)v22 + 151) + _mm_cvtsi128_si32(v23);
      v59.m128i_i32[1] = *((_DWORD *)v22 + 152) + v23.m128i_i32[1];
      v59.m128i_i32[2] = *((_DWORD *)v22 + 153) + v23.m128i_i32[2];
      v59.m128i_i32[3] = *((_DWORD *)v22 + 154) + v23.m128i_i32[3];
      *(_DWORD *)(a2 + 48) = DWORD1(v68);
      sub_1406A8890(&v67, &v59, 16LL);
      v24 = 0LL;
      v25 = *((_QWORD *)&v63 + 1);
      v26 = HIDWORD(v62);
      while ( 1 )
      {
        v27 = (char *)Object + 48;
        v64 = (char *)Object + 48;
        if ( !v24 )
        {
          v33 = *((_QWORD *)Object + 7);
          v66 = (_QWORD *)v33;
          v24 = v33;
          v65 = v33;
          goto LABEL_30;
        }
        v65 = v24;
        v28 = *((_DWORD *)Object + 13) >> 5;
        v73 = *(_QWORD *)(v24 + 8) & (-1LL << (*((_DWORD *)Object + 13) & 0x1F));
        v29 = (unsigned __int8 *)&v73;
        v56 = &v73;
        v30 = 8LL;
        v69 = 8LL;
        v31 = 314159;
        v32 = 314159;
        while ( v30 >= 8 )
        {
          v31 = v29[7]
              + 37
              * (v29[6]
               + 37 * (v29[5] + 37 * (v29[4] + 37 * (v29[3] + 37 * (v29[2] + 37 * (v29[1] + 37 * (*v29 + 37 * v31)))))));
          v32 = v31;
          v29 += 8;
          v56 = (__int64 *)v29;
          v30 -= 8LL;
          v69 = v30;
        }
        if ( v30 >= 1 )
        {
          v43 = v30 - 1;
          if ( !v43 )
            goto LABEL_65;
          v44 = v43 - 1;
          if ( !v44 )
            goto LABEL_64;
          v45 = v44 - 1;
          if ( !v45 )
            goto LABEL_63;
          v46 = v45 - 1;
          if ( !v46 )
            goto LABEL_62;
          v47 = v46 - 1;
          if ( !v47 )
            goto LABEL_61;
          v48 = v47 - 1;
          if ( !v48 )
            goto LABEL_60;
          if ( v48 == 1 )
            break;
        }
LABEL_29:
        v33 = *((_QWORD *)Object + 7) + 8LL * (v31 & (unsigned int)(v28 - 1));
        v66 = (_QWORD *)v33;
LABEL_30:
        v70 = 0LL;
        if ( !v24 )
          goto LABEL_31;
        if ( (*(_QWORD *)v24 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v25 = *((_QWORD *)&v63 + 1);
          v26 = HIDWORD(v62);
          v33 = (__int64)v66;
          v24 = v65;
          v27 = v64;
        }
        if ( !v24 || (v24 = *(_QWORD *)v24, (v24 & 1) != 0) )
        {
LABEL_31:
          v34 = (__int64 *)(v33 + 8);
          v35 = *((_QWORD *)v27 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v27 + 1) >> 5);
          while ( 1 )
          {
            v70 = v34;
            if ( (unsigned __int64)v34 >= v35 )
            {
              v24 = 0LL;
              goto LABEL_34;
            }
            v24 = *v34;
            if ( (*v34 & 1) == 0 )
              break;
            ++v34;
          }
          v66 = v34;
        }
        v65 = v24;
LABEL_34:
        if ( !v24 )
        {
          v57 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v58 = sub_1402F5718() / 0x2710uLL;
          v74 = MEMORY[0xFFFFF78000000014];
          v38 = Object;
          v39 = v57;
          v40 = Size;
          *(_DWORD *)(Size + 16) = v57 - *((_DWORD *)Object + 148);
          *(_DWORD *)(v40 + 20) = v58 - v38[149];
          *(_DWORD *)(v40 + 28) = v39;
          v41 = sub_1402F614C();
          *(_DWORD *)(v42 + 32) = v41;
          *(_QWORD *)(v42 + 64) = v74;
          for ( j = 0LL; ; *(_DWORD *)(j + 484) &= ~0x80000000 )
          {
            if ( j )
            {
              v77 = *(_QWORD *)(j + 8) & (-1LL << (v38[17] & 0x1F));
              v50 = *((_QWORD *)v38 + 9)
                  + 8LL
                  * ((37
                    * (BYTE6(v77)
                     + 37
                     * (BYTE5(v77)
                      + 37
                      * (BYTE4(v77)
                       + 37
                       * (BYTE3(v77) + 37 * (BYTE2(v77) + 37 * (BYTE1(v77) + 37 * ((unsigned __int8)v77 + 11623883)))))))
                    + HIBYTE(v77)) & (unsigned int)((v38[17] >> 5) - 1));
            }
            else
            {
              j = *((_QWORD *)v38 + 9);
              v50 = j;
            }
            if ( !j || (j = *(_QWORD *)j, (j & 1) != 0) )
            {
              for ( k = (__int64 *)(v50 + 8);
                    (unsigned __int64)k < *((_QWORD *)v38 + 9) + 8 * ((unsigned __int64)(unsigned int)v38[17] >> 5);
                    ++k )
              {
                j = *k;
                if ( (*k & 1) == 0 )
                  goto LABEL_74;
              }
              j = 0LL;
            }
LABEL_74:
            if ( !j )
              break;
          }
          v5 = (char *)Object;
          sub_1406A894C(Object);
          ++*((_DWORD *)v5 + 150);
          v38[148] = v57;
          v38[149] = v58;
          *(_OWORD *)(v5 + 604) = 0LL;
          *(__m128i *)(v5 + 620) = v59;
          v7 = 0;
          goto LABEL_80;
        }
        v36 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)v25 = *(_QWORD *)(v24 + 32);
        *(_DWORD *)(v25 + 8) = *(_DWORD *)(v24 + 40);
        *(_DWORD *)(v25 + 12) = (unsigned __int16)*(_DWORD *)(v24 + 44);
        *(_DWORD *)(v25 + 72) = *(_DWORD *)(v24 + 504);
        *(_DWORD *)(v25 + 76) = *(_DWORD *)(v24 + 508);
        *(_OWORD *)(v25 + 80) = *(_OWORD *)(v24 + 480);
        *(_QWORD *)(v25 + 96) = *(_QWORD *)(v24 + 496);
        *(_DWORD *)(v25 + 20) = **(_DWORD **)(v36 + 32);
        *(_DWORD *)(v25 + 24) = *(_DWORD *)(*(_QWORD *)(v36 + 32) + 4LL);
        *(_DWORD *)(v25 + 44) = **(_DWORD **)(v36 + 40);
        *(_DWORD *)(v25 + 48) = *(_DWORD *)(*(_QWORD *)(v36 + 40) + 4LL);
        *(_DWORD *)(v25 + 40) = DWORD1(v68);
        *(_WORD *)(v25 + 60) = *(_WORD *)(v36 + 86);
        sub_1406A8890(&v67, *(_QWORD *)(v36 + 72), *(unsigned __int16 *)(v36 + 86));
        *(_WORD *)(v25 + 52) = *(_WORD *)(v36 + 80);
        *(_DWORD *)(v25 + 16) = DWORD1(v61);
        sub_1406A8890(&v60, *(_QWORD *)(v36 + 48), 2 * (unsigned int)*(unsigned __int16 *)(v36 + 80));
        *(_WORD *)(v25 + 54) = *(_WORD *)(v36 + 82);
        *(_DWORD *)(v25 + 28) = DWORD1(v61);
        sub_1406A8890(&v60, *(_QWORD *)(v36 + 56), 2 * (unsigned int)*(unsigned __int16 *)(v36 + 82));
        *(_WORD *)(v25 + 56) = *(_WORD *)(v36 + 84);
        *(_DWORD *)(v25 + 32) = DWORD1(v61);
        sub_1406A8890(&v60, *(_QWORD *)(v36 + 64), 2 * (unsigned int)*(unsigned __int16 *)(v36 + 84));
        v37 = *(_QWORD *)(v24 + 24);
        if ( v37 )
        {
          *(_WORD *)(v25 + 58) = (unsigned __int16)WORD1(*(_QWORD *)(v37 + 24)) >> 1;
          *(_DWORD *)(v25 + 36) = DWORD1(v61);
          sub_1406A8890(&v60, *(_QWORD *)(v24 + 24) + 32LL, 2 * (unsigned int)*(unsigned __int16 *)(v25 + 58));
        }
        else
        {
          *(_WORD *)(v25 + 58) = 0;
          *(_DWORD *)(v25 + 36) = DWORD1(v61);
        }
        *(_DWORD *)(v25 + 64) = DWORD1(v72);
        *(_DWORD *)(v25 + 68) = 432;
        sub_1406A8890(&v71, v24 + 48, HIDWORD(v71));
        if ( v26 + DWORD1(v63) <= DWORD2(v62) )
        {
          DWORD1(v63) += v26;
          v25 += v26;
          *((_QWORD *)&v63 + 1) = v25;
        }
      }
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_60:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_61:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_62:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_63:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_64:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_65:
      v31 = *v29 + 37 * v32;
      v56 = (__int64 *)(v29 + 1);
      goto LABEL_29;
    }
  }
LABEL_80:
  if ( v6 )
    sub_1402935D0((ULONG_PTR)(v5 + 16));
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v7;
}
