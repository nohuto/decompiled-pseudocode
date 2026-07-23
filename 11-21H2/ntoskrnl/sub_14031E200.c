/*
 * XREFs of sub_14031E200 @ 0x14031E200
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140232E08 @ 0x140232E08 (sub_140232E08.c)
 *     sub_14023C9A4 @ 0x14023C9A4 (sub_14023C9A4.c)
 *     sub_14023EE78 @ 0x14023EE78 (sub_14023EE78.c)
 *     sub_14024EF40 @ 0x14024EF40 (sub_14024EF40.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_140280308 @ 0x140280308 (sub_140280308.c)
 *     sub_14031E900 @ 0x14031E900 (sub_14031E900.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14031E200(__int64 a1, _QWORD *a2)
{
  __m128i v3; // xmm3
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __m128i v6; // xmm2
  __m128i v7; // xmm4
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int64 v11; // rbx
  unsigned __int64 v12; // r15
  unsigned int v13; // r14d
  _QWORD *v14; // r13
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // r11
  unsigned __int64 v19; // rbx
  int v20; // eax
  int v21; // ecx
  __int8 v22; // al
  char v23; // dl
  __int64 v24; // xmm1_8
  __int64 v26; // rcx
  __int64 v27; // r10
  __int16 v28; // ax
  bool v29; // dl
  void *v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rax
  _DWORD *v33; // rax
  unsigned __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C8h]
  __int64 v44; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B8h]
  _QWORD *v46; // [rsp+58h] [rbp-B0h]
  __int128 v47; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v48[3]; // [rsp+70h] [rbp-98h]
  __int128 v49; // [rsp+88h] [rbp-80h]
  __m256i v50; // [rsp+98h] [rbp-70h]
  __int128 v51; // [rsp+B8h] [rbp-50h]
  __int128 v52; // [rsp+C8h] [rbp-40h]
  __int128 v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E8h] [rbp-20h]

  *a2 = 0LL;
  v3 = *(__m128i *)a1;
  v4 = *(_OWORD *)(a1 + 80);
  v46 = a2;
  v5 = *(_OWORD *)(a1 + 32);
  v44 = 0LL;
  v6 = *(__m128i *)(a1 + 48);
  v7 = *(__m128i *)(a1 + 16);
  v51 = v4;
  v8 = *(_OWORD *)(a1 + 112);
  v49 = v5;
  v9 = *(_OWORD *)(a1 + 64);
  v53 = v8;
  *(_OWORD *)&v50.m256i_u64[2] = v9;
  v10 = *(_OWORD *)(a1 + 96);
  *((_QWORD *)&v47 + 1) = v3.m128i_i64[0];
  *(__m128i *)v50.m256i_i8 = v6;
  v48[0] = _mm_srli_si128(v3, 8).m128i_u64[0];
  v43 = v48[0] & 2;
  v11 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v52 = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a1 + 128);
  v45 = v11;
  *(__m128i *)&v48[1] = v7;
  v54 = v10;
  v12 = (((unsigned __int64)v3.m128i_i64[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 0;
  if ( (_mm_cvtsi128_si32(v7) & 1) == 0
    || (v14 = (_QWORD *)(v48[1] & 0xFFFFFFFFFFFFFFFEuLL), *(_BYTE *)(v48[1] & 0xFFFFFFFFFFFFFFFEuLL) != 5)
    && (v14 = (_QWORD *)(v48[1] & 0xFFFFFFFFFFFFFFFEuLL), *(_BYTE *)(v48[1] & 0xFFFFFFFFFFFFFFFEuLL) != 2)
    && (v14 = (_QWORD *)(v48[1] & 0xFFFFFFFFFFFFFFFEuLL), *(_BYTE *)(v48[1] & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
  {
    v14 = 0LL;
  }
  v15 = 0LL;
  v16 = sub_14031E900((char *)&v47 + 8, 0LL);
  v17 = v16;
  if ( v16 > 1 )
  {
    v50.m256i_i8[21] |= 4u;
    v50.m256i_i8[21] &= ~2u;
  }
  else
  {
    v50.m256i_i8[21] &= ~2u;
    if ( !v16 )
    {
LABEL_22:
      v23 = v51;
      goto LABEL_23;
    }
  }
  v18 = v48[1];
  while ( 1 )
  {
    if ( (v50.m256i_i8[21] & 8) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 188) & 2) != 0
        || (*(_BYTE *)(v11 + 184) & 0x40) != 0
        && (unsigned __int64)(*(_QWORD *)(v11 + 128) + 1LL) >= *(_QWORD *)(v11 + 120) )
      {
        goto LABEL_22;
      }
      v33 = (*(_BYTE *)(v11 + 184) & 7) == 2 ? &unk_140C53D00 : (_DWORD *)(v11 + 192);
      if ( (*v33 & 0x40000000) != 0
        || (v50.m256i_i8[21] & 1) != 0
        || (unsigned int)sub_140274C80(v11, ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
        || KeShouldYieldProcessor() )
      {
        goto LABEL_22;
      }
      v18 = v48[1];
    }
    v19 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v39 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 8 * ((v12 >> 3) & 0x1FF));
          if ( (v40 & 0x20) != 0 )
            v19 |= 0x20uLL;
          if ( (v40 & 0x42) != 0 )
            v19 |= 0x42uLL;
        }
      }
      v18 = v48[1];
    }
    if ( !v19 || (v19 & 1) != 0 )
    {
      v21 = 0;
      goto LABEL_15;
    }
    LODWORD(v42) = 256;
    if ( (v19 & 0x400) != 0 )
    {
      if ( (_QWORD)v52 )
        goto LABEL_12;
      v36 = sub_140280308(v12, &v42);
      v18 = v48[1];
      if ( !v36 )
      {
        v21 = -1073741819;
        goto LABEL_15;
      }
      LODWORD(v26) = v42;
      *(_QWORD *)&v52 = v36;
    }
    else
    {
      if ( (v50.m256i_i8[21] & 8) == 0 )
        goto LABEL_12;
      v26 = (v19 >> 5) & 0x1F;
    }
    if ( (_DWORD)v26 == 256 )
      goto LABEL_12;
    if ( (v26 & 0xFFFFFFF8) == 0x10 && (v50.m256i_i8[21] & 8) != 0 )
    {
      v21 = -1073741819;
      goto LABEL_15;
    }
    v37 = sub_14023EE78((unsigned __int64 *)v12, v43, (v51 & 0x40) != 0, v26, v18, 0);
    v18 = v48[1];
    v21 = v37;
    if ( !v37 )
    {
LABEL_12:
      if ( (v48[1] & 1) != 0 && *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
      {
        sub_14023C9A4((_QWORD *)&v47 + 1);
        v18 = v48[1];
      }
      if ( (v19 & 0x400) != 0 )
      {
        v20 = sub_14031EAA0((char *)&v47 + 8, v43, &v44);
        v18 = v48[1];
        v21 = v20;
        goto LABEL_15;
      }
      if ( (v19 & 0x800) != 0 )
      {
        v35 = sub_140325B30((char *)&v47 + 8, v12, 0LL, v43, &v44);
        v18 = v48[1];
        v21 = v35;
        goto LABEL_15;
      }
      if ( (v19 & 4) != 0 )
      {
        if ( (v50.m256i_i8[21] & 8) != 0 )
        {
          if ( v14 )
          {
            sub_140232E08(v14);
            v18 = v48[1];
          }
          v21 = -1073740748;
        }
        else
        {
          v38 = sub_1403927C4((char *)&v47 + 8, v12, 0LL, &v44);
          v18 = v48[1];
          v21 = v38;
        }
        goto LABEL_15;
      }
      v21 = 0;
      v27 = v18 & 1;
      if ( (v18 & 1) != 0 )
      {
        if ( *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
        {
          if ( (*(_DWORD *)((v18 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
            goto LABEL_15;
        }
        else if ( *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) != 3 && *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        {
LABEL_39:
          v31 = sub_14031FD60((char *)&v47 + 8, v12, 0LL, v43);
          v18 = v48[1];
          v21 = v31;
          goto LABEL_15;
        }
      }
      else
      {
        if ( !v18 )
          goto LABEL_39;
        v28 = *(_WORD *)(v18 + 368);
        v29 = 0;
        if ( v28 == 16 )
        {
          if ( (*(_DWORD *)(v18 + 376) & 0x200) == 0
            && (sub_14024EF40(3u, *(_QWORD *)(v18 + 384)) || sub_14024EF40(2u, v41)) )
          {
            goto LABEL_39;
          }
          v30 = &loc_140429897;
          v34 = *(_QWORD *)(v18 + 360);
          v29 = dword_140D069BC && v34 >= qword_140D070E8 && v34 < qword_140D070F0 && KeGetCurrentIrql() == 15;
        }
        else
        {
          if ( v28 != 51 )
            goto LABEL_39;
          v30 = (void *)qword_140D071B0;
        }
        if ( *(void **)(v18 + 360) == v30 )
          goto LABEL_97;
        if ( !v29 )
          goto LABEL_39;
        if ( !v27 )
          goto LABEL_97;
      }
      if ( *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) == 6 )
        goto LABEL_39;
LABEL_97:
      if ( *((_QWORD *)&v47 + 1) < 0xFFFF800000000000uLL || ((v19 >> 5) & 0x18) != 0x10 )
        goto LABEL_39;
      v21 = -1073741819;
    }
LABEL_15:
    if ( (v50.m256i_i8[21] & 8) == 0 )
      v13 = v21;
    if ( v21 < 0 )
      break;
    v12 += 8LL;
    *((_QWORD *)&v47 + 1) += 4096LL;
    v22 = v50.m256i_i8[21] | 8;
    ++v15;
    v50.m256i_i8[21] = v22;
    v48[2] = v12;
    if ( (v22 & 2) != 0 )
    {
      v50.m256i_i8[21] = v22 & 0xFD;
      if ( v15 == v17 )
        goto LABEL_22;
      v17 = sub_14031E900((char *)&v47 + 8, v17 - v15);
      if ( v17 == 1 && (v50.m256i_i8[21] & 4) != 0 )
        v50.m256i_i8[21] &= ~4u;
      v18 = v48[1];
      v15 = 0LL;
    }
    *(_QWORD *)&v52 = 0LL;
    if ( (v18 & 1) != 0 && *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) == 2 || (v48[0] &= ~2uLL, v43 = 0LL, (v18 & 1) != 0) )
    {
      v32 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
      {
        v18 &= ~1uLL;
        v48[1] = v32;
      }
    }
    if ( v15 >= v17 )
      goto LABEL_22;
    v11 = v45;
  }
  if ( v21 != -1073741802 )
    goto LABEL_22;
  v23 = v51;
  if ( (v51 & 0x100) != 0 )
    *(_DWORD *)(a1 + 80) |= 0x100u;
LABEL_23:
  v24 = v50.m256i_i64[3];
  *(_OWORD *)(a1 + 112) = v53;
  *(_QWORD *)(a1 + 128) = v54;
  *(_QWORD *)(a1 + 104) = *((_QWORD *)&v52 + 1);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v50.m256i_u64[1];
  *(_QWORD *)(a1 + 72) = v24;
  if ( v23 < 0 )
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int8)v23 ^ (unsigned __int8)*(_DWORD *)(a1 + 80)) & 0x80;
  if ( v13 == -1073532109 )
    *v46 = v44;
  return v13;
}
