/*
 * XREFs of sub_14070E104 @ 0x14070E104
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140417880 @ 0x140417880 (sub_140417880.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1406DAA90 @ 0x1406DAA90 (sub_1406DAA90.c)
 *     sub_1406DD598 @ 0x1406DD598 (sub_1406DD598.c)
 *     sub_1406E1C0C @ 0x1406E1C0C (sub_1406E1C0C.c)
 *     sub_1406E71BC @ 0x1406E71BC (sub_1406E71BC.c)
 *     sub_1409614A8 @ 0x1409614A8 (sub_1409614A8.c)
 */

unsigned __int64 __fastcall sub_14070E104(__int64 a1, __int64 a2, __m128i *a3, __int128 *a4, int a5)
{
  __m128i v5; // xmm2
  unsigned __int64 v8; // xmm3_8
  unsigned __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  bool v12; // zf
  ULONG_PTR v13; // rax
  int v14; // eax
  int v15; // r10d
  __int64 v16; // r11
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // cl
  int v19; // eax
  char v20; // si
  int v21; // edx
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 result; // rax
  char v25; // bl
  unsigned __int64 v26; // xmm1_8
  __m128i v27; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-50h]
  __m128i v29; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-30h]
  __int128 v31; // [rsp+58h] [rbp-28h]
  unsigned __int64 v32; // [rsp+68h] [rbp-18h]

  v5 = *a3;
  v8 = a3[1].m128i_u64[0];
  v10 = *((_QWORD *)a4 + 2);
  v11 = *a4;
  v29 = *a3;
  v31 = v11;
  v30 = v8;
  v32 = v10;
  if ( *(_WORD *)(a1 + 2412) == 332 )
  {
    v27 = v5;
    v28 = v8;
    *(_BYTE *)(a1 + 643) = sub_1406E1C0C(&v27);
  }
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_7;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10u);
LABEL_7:
  if ( (v29.m128i_i8[2] & 3) != 0 )
    v12 = (v29.m128i_i8[2] & 3) == 2;
  else
    v12 = (a5 & 1) == 0;
  if ( v12 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x40) == 0 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 20) & 3) != 0 )
    {
      if ( (((unsigned __int64)v29.m128i_i64[0] >> 20) & 3) != 1 )
        goto LABEL_18;
    }
    else if ( (a5 & 2) == 0 )
    {
      goto LABEL_18;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20u);
  }
LABEL_18:
  if ( !a2 )
    goto LABEL_27;
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 24) & 3) == 0 )
  {
    if ( (a5 & 4) == 0 )
      goto LABEL_25;
LABEL_23:
    v13 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)a1);
    if ( v13 )
    {
      sub_1406DAA90(v13, 1);
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(a1 + 1112));
    }
    goto LABEL_25;
  }
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 24) & 3) == 1 )
    goto LABEL_23;
LABEL_25:
  if ( _bittest((const signed __int32 *)(a2 + 2512), 0xCu) )
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
LABEL_27:
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x3000u);
  if ( !_bittest((const signed __int32 *)(a1 + 2512), 0xCu) && (((unsigned __int64)v31 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x2000u);
  v14 = sub_140417880();
  v15 = 0;
  if ( v14 )
  {
    if ( a2 && (*(_DWORD *)(a2 + 2928) & 2) != 0 )
      v30 = v30 & 0xFFFFFFFFFCFFFFFFuLL | 0x1000000;
    if ( ((v30 >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2928), 6u);
    if ( (*(_DWORD *)(a1 + 2928) & 2) == 0 && ((v32 >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2928), 4u);
  }
  v16 = 512LL;
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 36) & 3) != 1 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 36) & 3) != 3 )
      goto LABEL_45;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x900u);
LABEL_45:
  v29.m128i_i64[1] = _mm_srli_si128(_mm_loadu_si128(&v29), 8).m128i_u64[0];
  if ( (v29.m128i_i8[15] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x400u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x100) != 0 )
  {
    v29.m128i_i64[1] = v29.m128i_i64[1] & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&v31 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( (((unsigned __int64)v31 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x800u);
  }
  if ( (v29.m128i_i8[4] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x80u);
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 40) & 3) != 0 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 40) & 3) != 1 )
    {
      if ( (((unsigned __int64)v29.m128i_i64[0] >> 40) & 3) == 3 )
      {
        if ( dword_140D06BE4 || dword_140C29794 )
        {
          v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 2u);
          v29.m128i_i64[0] |= 0x30000000000uLL;
        }
        _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
        if ( (a5 & 0x10) == 0 )
          sub_1409614A8(a1, 1LL);
      }
      goto LABEL_69;
    }
LABEL_67:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
    if ( (a5 & 0x10) == 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 5u);
    goto LABEL_69;
  }
  if ( (a5 & 8) != 0 )
  {
    v17 = v29.m128i_i64[0] & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
    v29.m128i_i64[0] = v17;
    if ( (a5 & 0x20) != 0 && !dword_140D06BE4 && !dword_140C29794 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 2u);
      v29.m128i_i64[0] = v17 | 0x30000000000LL;
    }
    goto LABEL_67;
  }
LABEL_69:
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 8) & 3) == 1 && (*(_DWORD *)(a1 + 2512) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 4u);
  if ( ((v30 >> 8) & 3) == 0 )
    goto LABEL_77;
  if ( ((v30 >> 8) & 3) != 1 )
    goto LABEL_78;
  if ( (*(_DWORD *)(a1 + 2512) & 1) != 0 && dword_140C29794 != v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x2000000u);
  else
LABEL_77:
    v30 = v16 | v30 & 0xFFFFFFFFFFFFFEFFuLL;
LABEL_78:
  if ( ((v32 >> 8) & 3) == 1 )
  {
    if ( (BYTE1(v30) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000000u);
    else
      v32 = v16 | v32 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 44) & 3) == 1 )
  {
    if ( *(_BYTE *)(a1 + 2168) < 8u )
      *(_BYTE *)(a1 + 2168) = 8;
    if ( *(_BYTE *)(a1 + 2169) < 8u )
      *(_BYTE *)(a1 + 2169) = 8;
  }
  else
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 44) & 3) != 3 )
      goto LABEL_93;
    if ( *(_BYTE *)(a1 + 2168) < 6u )
      *(_BYTE *)(a1 + 2168) = 6;
    if ( *(_BYTE *)(a1 + 2169) < 6u )
      *(_BYTE *)(a1 + 2169) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x800000u);
LABEL_93:
  if ( (*(_DWORD *)(a1 + 2512) & 0x800000) == 0 )
  {
    if ( (((unsigned __int64)v31 >> 44) & 3) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x1000000u);
    }
    else if ( (((unsigned __int64)v31 >> 44) & 3) == 3 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x2000000u);
    }
  }
  v18 = v29.m128i_i8[0];
  if ( (((unsigned __int8)v29.m128i_i8[0] >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 2512) & 1) != 0 )
  {
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v18 = v29.m128i_i8[0];
  }
  if ( ((v18 >> 4) & 3) != 1 && (((unsigned __int64)v31 >> 4) & 3) == 1 )
    v29.m128i_i64[0] |= 0x30uLL;
  if ( (a5 & 0x30000) == 0x10000 )
  {
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
  }
  else if ( (a5 & 0x30000) == 0x30000 && (v29.m128i_i8[6] & 3) != 1 )
  {
    v29.m128i_i64[0] |= 0x3000000000000uLL;
  }
  if ( (HIWORD(v29.m128i_i64[0]) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10000u);
  }
  else if ( (HIWORD(v29.m128i_i64[0]) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20000u);
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x30000) == 0 && (WORD3(v31) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20000u);
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x80000) != 0 )
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x80000u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x80000) == 0 && (((unsigned __int64)v31 >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x100000u);
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x200000) != 0 )
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
  if ( (v29.m128i_i8[7] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x200000u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x200000) == 0 && (BYTE7(v31) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x400000u);
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x40000) != 0 )
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40000u);
  if ( a2 )
  {
    v19 = *(_DWORD *)(a2 + 2512);
    if ( (v19 & 0x4000000) != 0 )
    {
      v29.m128i_i64[1] = v29.m128i_i64[1] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else if ( (v19 & 0x8000000) != 0 )
    {
      v29.m128i_i64[1] |= 0x30uLL;
    }
  }
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0xC000000u);
  }
  else if ( (((unsigned __int64)v29.m128i_i64[1] >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0xC000000) == 0 && ((*((_QWORD *)&v31 + 1) >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x8000000u);
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 1u);
  if ( (*(_DWORD *)(a1 + 2516) & 1) == 0 && ((*((_QWORD *)&v31 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 2u);
  if ( (v29.m128i_i8[12] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 4u);
  if ( (HIWORD(v29.m128i_i64[1]) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40000000u);
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x2000u);
  if ( (*(_DWORD *)(a1 + 2516) & 4) == 0 && (BYTE12(v31) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 8u);
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x400u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x400) == 0 && ((*((_QWORD *)&v31 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x800u);
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x10u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x10) == 0 && ((*((_QWORD *)&v31 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x20u);
  if ( *(_WORD *)(a1 + 2412) == 332 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[1] >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40u);
    if ( (*(_DWORD *)(a1 + 2516) & 0x40) == 0 && ((*((_QWORD *)&v31 + 1) >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x80u);
    if ( (((unsigned __int64)v29.m128i_i64[1] >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100u);
    if ( (*(_DWORD *)(a1 + 2516) & 0x100) == 0 && ((*((_QWORD *)&v31 + 1) >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200u);
  }
  v20 = (unsigned __int64)v29.m128i_i64[1] >> 36;
  if ( (v20 & 3) == 1 )
  {
    v21 = 1;
    goto LABEL_188;
  }
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 36) & 3) == 3 )
  {
    v21 = 2;
LABEL_188:
    sub_1406E71BC(a1, v21);
  }
  if ( (v20 & 3) != 1 && ((*((_QWORD *)&v31 + 1) >> 36) & 3) == 1 )
    sub_1406E71BC(a1, 3);
  if ( a2 )
  {
    v22 = *(_DWORD *)(a2 + 2512);
    if ( (v22 & 0x10000000) != 0 && (v22 & 0x20000000) == 0 )
      v29.m128i_i64[1] = v29.m128i_i64[1] & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
  }
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 44) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10000000u);
  }
  else if ( (((unsigned __int64)v29.m128i_i64[1] >> 44) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x30000000u);
  }
  switch ( ((unsigned __int64)v29.m128i_i64[1] >> 60) & 3 )
  {
    case 0uLL:
      if ( (a5 & 0x40000) == 0 || (a5 & 0x800000) != 0 || (a5 & 0x1000000) != 0 )
        break;
      if ( (a5 & 0x100000) != 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100000u);
      v29.m128i_i64[1] = v29.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
LABEL_210:
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000u);
      break;
    case 1uLL:
      goto LABEL_210;
    case 3uLL:
      v29.m128i_i64[1] = v29.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100000u);
      break;
  }
  if ( ((*((_QWORD *)&v31 + 1) >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x8000u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x4000) == 0 )
  {
    v23 = v30 & 0xFFFFFFFFFFFFFFFCuLL | 2;
    goto LABEL_221;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x20000u);
  if ( (v30 & 3) != 0 )
  {
    if ( (v30 & 3) == 3 )
      goto LABEL_219;
  }
  else if ( (a5 & 0x200000) != 0 )
  {
LABEL_219:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x80000000);
  }
  v23 = v30 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_221:
  v30 = v23;
  if ( (v32 & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40000u);
  if ( ((v30 >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200000u);
  }
  else if ( ((v30 >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200000u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x400000u);
  }
  if ( ((v32 >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x800000u);
  if ( ((v30 >> 12) & 3) == 0 )
  {
    v30 = v30 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
    goto LABEL_233;
  }
  if ( ((v30 >> 12) & 3) == 1 )
LABEL_233:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x8000000u);
  if ( ((v32 >> 12) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x10000000u);
  if ( ((v30 >> 16) & 3) == 0 )
  {
    if ( (a5 & 0x400000) != 0 )
      goto LABEL_241;
    goto LABEL_240;
  }
  if ( ((v30 >> 16) & 3) == 1 )
LABEL_240:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40000000u);
LABEL_241:
  result = v30 >> 20;
  v25 = v30 >> 20;
  if ( (v25 & 3) == 1 )
    result = sub_1406DD598(a1, 1);
  if ( (v25 & 3) != 1 && ((v32 >> 20) & 3) == 1 )
    result = sub_1406DD598(a1, 2);
  v26 = v30;
  *a3 = v29;
  a3[1].m128i_i64[0] = v26;
  return result;
}
