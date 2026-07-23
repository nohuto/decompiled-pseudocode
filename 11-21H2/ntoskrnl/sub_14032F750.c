/*
 * XREFs of sub_14032F750 @ 0x14032F750
 * Callers:
 *     sub_1402405EC @ 0x1402405EC (sub_1402405EC.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402CF100 @ 0x1402CF100 (sub_1402CF100.c)
 *     sub_14032F0E0 @ 0x14032F0E0 (sub_14032F0E0.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022BAE0 @ 0x14022BAE0 (sub_14022BAE0.c)
 *     sub_140274720 @ 0x140274720 (sub_140274720.c)
 *     sub_1402CCC80 @ 0x1402CCC80 (sub_1402CCC80.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402E599C @ 0x1402E599C (sub_1402E599C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140331CC0 @ 0x140331CC0 (sub_140331CC0.c)
 *     sub_14033BEC0 @ 0x14033BEC0 (sub_14033BEC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 */

__int64 __fastcall sub_14032F750(__int64 a1)
{
  unsigned __int64 v1; // r14
  __int64 result; // rax
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  char v6; // al
  unsigned __int8 v7; // al
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  volatile __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  char v20; // r11
  char v21; // cl
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  unsigned int v24; // r8d
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rax
  unsigned __int64 *v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 *v45; // rbx
  char v46; // cl
  int v47; // edx
  unsigned int v48; // esi
  unsigned __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  unsigned __int64 v53; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v55; // [rsp+40h] [rbp-C0h]
  _OWORD v56[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  int v58; // [rsp+80h] [rbp-80h] BYREF
  __int16 v59; // [rsp+84h] [rbp-7Ch]
  __int16 v60; // [rsp+86h] [rbp-7Ah]
  __int64 v61; // [rsp+88h] [rbp-78h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  __int64 Base; // [rsp+98h] [rbp-68h] BYREF
  __int128 v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-50h]
  __int128 v66; // [rsp+C0h] [rbp-40h]
  __int128 v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int128 v69; // [rsp+F0h] [rbp-10h]
  __int128 v70; // [rsp+100h] [rbp+0h]
  __int128 v71; // [rsp+110h] [rbp+10h]
  __int128 v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  _OWORD v74[2]; // [rsp+140h] [rbp+40h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  result = 0LL;
  v53 = v1;
  v60 = 0;
  v73 = 0LL;
  v57 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  memset(v56, 0, sizeof(v56));
  if ( v1 )
  {
    v4 = *(_QWORD *)a1;
    v54 = v4;
    v5 = (__int64)(v1 << 25) >> 16;
    v6 = *(_BYTE *)(v4 + 184);
    v55 = v5;
    v7 = v6 & 7;
    if ( v7 )
      v8 = v7 < 2u ? 2 : 0;
    else
      v8 = 1;
    v61 = 20LL;
    v59 = 0;
    v62 = 0LL;
    Base = 0LL;
    v58 = v8;
    if ( (*(_BYTE *)(v4 + 184) & 7) == 0 )
    {
      v9 = 0LL;
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_81;
      v10 = 0xFFFFF6FB7FFFFFFFuLL;
      v11 = 0xFFFFF6FFFFFFFFFFuLL;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v1 + 8 * v9);
        v13 = v1 + 8 * v9;
        if ( v13 < 0xFFFFF6FB7DBED000uLL || v13 > 0xFFFFF6FB7DBED7F8uLL )
        {
          v17 = *(_QWORD *)v13;
          v18 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          v53 = v18;
        }
        else
        {
          if ( (dword_140D06880 & 0xC00000) != 0
            && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
            && (v12 & 1) != 0
            && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
          {
            v14 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
            if ( v14 )
            {
              v15 = *(_QWORD *)(v14 + 8 * ((v13 >> 3) & 0x1FF));
              v16 = v12 | 0x20;
              if ( (v15 & 0x20) == 0 )
                v16 = *(_QWORD *)(v1 + 8 * v9);
              v12 = v16;
              if ( (v15 & 0x42) != 0 )
                v12 = v16 | 0x42;
            }
          }
          v53 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( (unsigned int)sub_140229550() )
            goto LABEL_51;
        }
        v19 = ((unsigned int)dword_140D06880 >> 27) & 3;
        if ( v19 > 1 )
        {
          if ( (dword_140D06880 & 0x4000000) != 0 )
            _mm_lfence();
        }
        else
        {
          if ( !v19 )
            goto LABEL_51;
          if ( v13 >= 0xFFFFF6FB40000000uLL && v13 <= v10 && (v17 & 0x80u) == 0LL )
            LOBYTE(v17) = 32;
        }
        if ( (v17 & 0x20) != 0 )
        {
LABEL_51:
          if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)sub_140229550() )
          {
            *(_QWORD *)v13 = v18;
            sub_1402294F0(v13, v18);
          }
          else
          {
            *(_QWORD *)v13 = v18;
          }
          goto LABEL_39;
        }
        if ( (dword_140D06880 & 0x4000000) != 0 )
          _mm_lfence();
        v20 = _InterlockedExchange64((volatile __int64 *)v13, v18);
        if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
          sub_1402294F0(v13, v18);
        if ( (v20 & 0x20) == 0 )
          goto LABEL_72;
        v11 = 0xFFFFF6FFFFFFFFFFuLL;
LABEL_39:
        v21 = v59;
        v22 = 1LL;
        v23 = v5 + (v9 << 12);
        if ( v58 != 1 && (v59 & 8) == 0 && v23 >= 0xFFFFF68000000000uLL && v23 <= v11 )
        {
          v21 = v59 | 8;
          LOBYTE(v59) = v59 | 8;
        }
        v24 = HIDWORD(v61);
        if ( !HIDWORD(v61) || (v21 & 4) != 0 )
        {
LABEL_61:
          if ( HIDWORD(v61) >= (unsigned int)v61 )
          {
            HIBYTE(v59) = 1;
          }
          else
          {
            while ( 1 )
            {
              v29 = 1024LL;
              if ( (unsigned __int64)(v22 - 1) <= 0x3FF )
                v29 = v22;
              v22 -= v29;
              v30 = v23 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v29 - 1) & 0x3FF;
              v23 += v29 << 12;
              *(&Base + v24) = v30;
              v62 += v29;
              v24 = HIDWORD(v61) + 1;
              HIDWORD(v61) = v24;
              if ( v24 == (_DWORD)v61 && (v59 & 4) == 0 )
              {
                qsort(&Base, v24, 8uLL, (int (__cdecl *)(const void *, const void *))sub_14022E340);
                sub_14022BAE0((__int64)&v58);
                v24 = HIDWORD(v61);
                if ( HIDWORD(v61) == (_DWORD)v61 )
                  break;
              }
              if ( !v22 )
                goto LABEL_72;
            }
            if ( v22 )
            {
              HIBYTE(v59) = 1;
              v62 = HIDWORD(v61);
            }
          }
          goto LABEL_72;
        }
        v25 = *(&Base + (unsigned int)(HIDWORD(v61) - 1));
        if ( (v25 & 0xC00) != 0
          || (v26 = *(&Base + (unsigned int)(HIDWORD(v61) - 1)) & 0x3FF,
              (v25 & 0xFFFFFFFFFFFFF000uLL) + ((v26 + 1) << 12) != v23)
          || v26 + 1 < v26
          || v26 + 1 > 0x3FF )
        {
          v27 = *(&Base + (unsigned int)(HIDWORD(v61) - 1));
          if ( (v27 & 0xC00) != 0 )
            goto LABEL_61;
          if ( (v27 & 0xFFFFFFFFFFFFF000uLL) != v23 + 4096 )
            goto LABEL_61;
          v28 = *(&Base + (unsigned int)(HIDWORD(v61) - 1)) & 0x3FF;
          if ( v28 + 1 < v28 || v28 + 1 > 0x3FF )
            goto LABEL_61;
          ++v62;
          *(&Base + (unsigned int)(HIDWORD(v61) - 1)) = (v27 - 4096) ^ ((unsigned __int16)(v27 - 4096) ^ (unsigned __int16)(v27 - 4096 + 1)) & 0x3FF;
        }
        else
        {
          ++v62;
          *(&Base + (unsigned int)(HIDWORD(v61) - 1)) = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)(v25 + 1)) & 0x3FF;
        }
LABEL_72:
        ++v9;
        v10 = 0xFFFFF6FB7FFFFFFFuLL;
        v11 = 0xFFFFF6FFFFFFFFFFuLL;
        if ( v9 >= *(_QWORD *)(a1 + 16) )
        {
          v4 = v54;
          goto LABEL_81;
        }
      }
    }
    if ( (*(_BYTE *)(a1 + 28) & 0xF) == 8 )
    {
      v31 = 0LL;
      if ( *(_QWORD *)(a1 + 16) )
      {
        v32 = (__int64)(v1 << 25) >> 16;
        v33 = v1;
        do
        {
          v34 = sub_140317A10(v33);
          sub_1402E599C(v4, v32, 48 * ((v34 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
          ++v31;
          v33 += 8LL;
          v32 += 4096LL;
        }
        while ( v31 < *(_QWORD *)(a1 + 16) );
        v1 = v53;
        v5 = v55;
      }
    }
    if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
      sub_1402CF280((__int64)&v58, v5, *(_QWORD *)(a1 + 16), 0);
LABEL_81:
    sub_140331CC0(v4, v5, *(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a1 + 28), 10, *(_DWORD *)(a1 + 24) & 1);
    v35 = (unsigned __int64 *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v36 = *v35;
    if ( (unsigned __int64)v35 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v35 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)sub_140229550()
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      v38 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 8 * ((v37 >> 3) & 0x1FF));
        v40 = v36 | 0x20;
        if ( (v39 & 0x20) == 0 )
          v40 = v36;
        v36 = v40;
        if ( (v39 & 0x42) != 0 )
          v36 = v40 | 0x42;
      }
    }
    v54 = v36;
    v41 = (__int64)&v54;
    if ( (unsigned __int64)&v54 >= 0xFFFFF6FB7DBED000uLL )
    {
      v41 = (__int64)&v54;
      if ( (unsigned __int64)&v54 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)sub_140229550()
        && (v36 & 1) != 0
        && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v41 = *((_QWORD *)KeGetCurrentThread() + 23);
        v42 = *(_QWORD *)(v41 + 1928);
        if ( v42 )
        {
          v43 = *(_QWORD *)(v42 + 8 * (((unsigned __int64)&v54 >> 3) & 0x1FF));
          v44 = v36 | 0x20;
          v41 = (unsigned __int8)v43;
          LOBYTE(v41) = v43 & 0x20;
          if ( (v43 & 0x20) == 0 )
            v44 = v36;
          v36 = v44;
          if ( (v43 & 0x42) != 0 )
            v36 = v44 | 0x42;
        }
      }
    }
    v45 = (unsigned __int64 *)(48 * ((v36 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    if ( ((*(_DWORD *)v45 >> 4) & 0x3FF) == 0 )
    {
      sub_140274720(v41, v5, v74);
      v46 = 8;
      while ( 1 )
      {
        v47 = *((_DWORD *)v74 + (unsigned __int8)--v46);
        if ( v47 )
          break;
        if ( !v46 )
          goto LABEL_109;
      }
      *v45 = *v45 & 0xFFFFFFFFFFFE000FuLL | (16 * (v47 & 0x3FF | ((unsigned __int64)(v46 & 7) << 10)));
    }
LABEL_109:
    if ( (*(_BYTE *)(v4 + 184) & 7) != 0 )
    {
      v48 = (2 * (*(_DWORD *)(a1 + 24) & 8)) | 4;
      if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
        v48 = 2 * (*(_DWORD *)(a1 + 24) & 8);
      v49 = 0LL;
      if ( *(_QWORD *)(a1 + 16) )
      {
        while ( 1 )
        {
          sub_14033BEC0(v4, v1, v48, v56);
          if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
            break;
LABEL_129:
          ++v49;
          v1 += 8LL;
          v5 += 4096LL;
          if ( v49 >= *(_QWORD *)(a1 + 16) )
            goto LABEL_130;
        }
        v53 = 0LL;
        sub_1402CCC80((unsigned __int64)&v53);
        v50 = v53;
        if ( sub_140317A80(v1) )
        {
          if ( (unsigned int)sub_140229550() )
          {
            if ( !HIBYTE(word_140C51864) && (v50 & 1) != 0 )
              v50 |= 0x8000000000000000uLL;
            *(_QWORD *)v1 = v50;
            sub_1402294F0(v1, v50);
            goto LABEL_124;
          }
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v50 & 1) != 0 )
            v50 |= 0x8000000000000000uLL;
        }
        *(_QWORD *)v1 = v50;
LABEL_124:
        v51 = v53;
        if ( qword_140C50780 && (v53 & 0x10) == 0 )
          v51 = v53 & ~qword_140C50780;
        if ( (v51 & 0xFFFFFFFF00000000uLL) == 0 )
          sub_1402CF280((__int64)&v58, v5, 1LL, 0);
        goto LABEL_129;
      }
    }
LABEL_130:
    v52 = 0LL;
    if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
      v52 = *((_QWORD *)&v56[0] + 1);
    sub_14032F1B0((__int64)&v58);
    result = v52;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
