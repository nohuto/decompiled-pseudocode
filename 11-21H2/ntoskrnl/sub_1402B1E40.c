/*
 * XREFs of sub_1402B1E40 @ 0x1402B1E40
 * Callers:
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1402B1D10 @ 0x1402B1D10 (sub_1402B1D10.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_1403C4E98 @ 0x1403C4E98 (sub_1403C4E98.c)
 *     sub_14058CAEC @ 0x14058CAEC (sub_14058CAEC.c)
 *     sub_14058FE88 @ 0x14058FE88 (sub_14058FE88.c)
 * Callees:
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_14026B1C0 @ 0x14026B1C0 (sub_14026B1C0.c)
 *     sub_14027B234 @ 0x14027B234 (sub_14027B234.c)
 *     sub_14027B54C @ 0x14027B54C (sub_14027B54C.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_14058CAA0 @ 0x14058CAA0 (sub_14058CAA0.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

__int64 __fastcall sub_1402B1E40(__m128i *a1, _QWORD *a2)
{
  __m128i v2; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  ULONG_PTR v7; // r11
  char v8; // r10
  int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  bool v12; // bl
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // r10d
  __int64 v16; // rbx
  ULONG_PTR v17; // r14
  int v18; // r13d
  int v19; // esi
  int v20; // r12d
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // r13
  unsigned int v26; // r11d
  int v27; // edx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rsi
  ULONG_PTR v32; // rbx
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 j; // rcx
  unsigned __int64 k; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rdx
  __int64 result; // rax
  __int8 v42; // r11
  __int64 v43; // rsi
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rsi
  __int64 v50; // r9
  __int64 v51; // r8
  unsigned int v52; // r12d
  unsigned __int64 v53; // rax
  unsigned int v54; // r15d
  unsigned __int64 v55; // rsi
  unsigned int v56; // ecx
  ULONG_PTR v57; // rbx
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // r8
  ULONG_PTR v64; // r11
  unsigned int v65; // r8d
  ULONG_PTR v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // r12
  unsigned int v69; // edx
  __int64 *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // r8
  __int64 v75; // rsi
  __int64 v76; // r13
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rcx
  int v81; // eax
  int i; // ecx
  struct _KPRCB *v83; // rcx
  __int64 v84; // rdx
  int v85; // eax
  unsigned __int64 v86; // rdx
  __int16 v87; // r8
  unsigned __int64 v88; // rbx
  unsigned __int64 v89; // rbx
  unsigned __int64 v90; // rbx
  int v91; // eax
  ULONG_PTR v92; // [rsp+30h] [rbp-69h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-61h] BYREF
  _QWORD *v94; // [rsp+40h] [rbp-59h]
  int v95; // [rsp+48h] [rbp-51h] BYREF
  __m128i v96; // [rsp+50h] [rbp-49h] BYREF
  __m128i v97; // [rsp+60h] [rbp-39h]
  __m128i v98; // [rsp+70h] [rbp-29h]
  __int128 v99; // [rsp+80h] [rbp-19h] BYREF
  __int64 v100; // [rsp+90h] [rbp-9h]
  _OWORD v101[2]; // [rsp+98h] [rbp-1h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v2 = *a1;
  v5 = a1[1];
  v92 = (ULONG_PTR)a1;
  v6 = a1[2];
  v96 = v2;
  v97 = v5;
  v98 = v6;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 2));
  a2[1] = v7;
  v9 = v8 & 7;
  v10 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | (16LL * (v8 & 7));
  BugCheckParameter2 = v7;
  LOBYTE(v11) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 3));
  v12 = (v11 & 8) != 0;
  if ( (v11 & 8) != 0 )
    v11 = 5;
  else
    v11 = (unsigned __int8)v11;
  v13 = v10 ^ (v10 ^ ((unsigned __int64)v11 << 57)) & 0xE00000000000000LL;
  v14 = v98.m128i_i64[1];
  *a2 = v13;
  if ( (v14 & 0x10000000000LL) == 0 )
  {
    v42 = v96.m128i_i8[0];
    v43 = v97.m128i_i64[0];
    if ( v9 == 2 )
    {
LABEL_78:
      if ( v98.m128i_i16[0] )
      {
        v13 |= 0x100uLL;
        *a2 = v13;
      }
      if ( (v97.m128i_i64[1] & 0x4000000000000000LL) != 0 )
      {
        if ( v14 >= 0 )
          a2[2] = (v96.m128i_i64[1] << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
        *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        return 1LL;
      }
      if ( (v43 & 0x400) != 0 )
        v48 = (unsigned __int64)v43 >> 11;
      else
        v48 = (unsigned __int64)v43 >> 3;
      if ( (v48 & 1) != 0 )
      {
        v13 |= 0x80uLL;
        goto LABEL_89;
      }
    }
    else
    {
      if ( v9 != 6 )
      {
        switch ( v8 & 7 )
        {
          case 0:
          case 1:
          case 5:
            return 1LL;
          case 2:
          case 6:
            goto LABEL_90;
          case 3:
          case 4:
            goto LABEL_78;
          case 7:
            v44 = v13 | 0x100;
            v45 = v96.m128i_i64[1] | 0x8000000000000000uLL;
            *a2 = v44;
            if ( v14 >= 0 )
              a2[2] = ((__int64)(v45 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
            if ( (((unsigned __int64)v14 >> 60) & 7) == 1 )
            {
              v46 = sub_14058CAA0(&v96, 3LL, v44);
              *a2 = v47 & 0xFE000000000001F9uLL | ((unsigned __int64)v46 << 9) | 9;
            }
            else if ( (v14 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
            {
              *a2 = v44 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
            }
            else
            {
              *a2 = v44 & 0xFFFFFFFFFFFFFFF0uLL;
            }
            return 1LL;
        }
      }
      if ( (v96.m128i_i8[0] & 1) == 0 || v12 || v98.m128i_i16[0] > 1u )
      {
        v13 |= 0x100uLL;
LABEL_89:
        *a2 = v13;
      }
    }
LABEL_90:
    if ( v14 < 0 )
    {
      if ( (v43 & 0x400) == 0 )
      {
        v72 = v96.m128i_i64[1];
        v73 = v96.m128i_i64[1] | 0x8000000000000000uLL;
        a2[2] = v96.m128i_i64[1] | 0x8000000000000000uLL;
        if ( (v72 & 0x8000000000000000uLL) == 0 && v72 )
        {
          a2[2] = v73 | 1;
          v74 = *(_QWORD *)(v73 - 16);
          if ( v74 >= 0x1000000000000LL )
            v74 = 0xFFFFFFFFFFFFLL;
          v13 = *a2 ^ (*a2 ^ (v74 << 9)) & 0x1FFFFFFFFFFFE00LL;
        }
        *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 2;
        return 1LL;
      }
      if ( qword_140C50780 && (v43 & 0x10) == 0 )
        v43 &= ~qword_140C50780;
      v75 = v43 >> 16;
      v76 = *(_QWORD *)v75;
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        LOBYTE(v14) = -1;
        sub_140461A66(v76 + 72, v14);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LODWORD(v92) = 0;
        v78 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v78 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v79 = *(_DWORD *)(v78 + 24);
            *(_DWORD *)(v78 + 24) = v79 + 1;
            if ( v79 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset((volatile signed __int32 *)(v76 + 72), 0x1Fu) )
        {
          v80 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v80 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v81 = *(_DWORD *)(v80 + 24) - 1;
              *(_DWORD *)(v80 + 24) = v81;
              if ( !v81 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          LODWORD(v92) = sub_140220C30((int *)(v76 + 72), 0xFFu);
        }
        for ( i = *(_DWORD *)(v76 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v76 + 72) )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr((volatile signed __int32 *)(v76 + 72), 0x40000000u);
          sub_1402F32E0(&v92);
        }
      }
      if ( (*(_QWORD *)(v76 + 64) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v76 + 72));
        return 1LL;
      }
      a2[2] = *(_QWORD *)((*(_QWORD *)(v76 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
        sub_14063D8B0(v76 + 72, retaddr);
      else
        *(_DWORD *)(v76 + 72) = 0;
      v83 = KeGetCurrentPrcb();
      v84 = *((_QWORD *)v83 + 4375);
      if ( v84 )
      {
        if ( *((_BYTE *)v83 + 32) <= 1u )
        {
          v85 = *(_DWORD *)(v84 + 24) - 1;
          *(_DWORD *)(v84 + 24) = v85;
          if ( !v85 )
            sub_140418E4C(v83);
        }
      }
      a2[2] ^= (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v76 + 56) >> 5)) & 1;
      v86 = *(_QWORD *)(v75 + 8);
      if ( v86 )
      {
        v87 = *(_WORD *)(v75 + 34);
        if ( (v87 & 2) != 0 && (*(_DWORD *)(v76 + 56) & 0x8000000) != 0 )
        {
          *a2 ^= (sub_1403342D0(v75, v86, 0xFFFFFFFFLL) ^ *a2) & 0x1FFFFFFFFFFFE00LL;
        }
        else
        {
          v88 = v96.m128i_i64[1] | 0x8000000000000000uLL;
          if ( (*(_DWORD *)(*(_QWORD *)v75 + 56LL) & 0x20) != 0 )
          {
            if ( v88 < v86 || v88 >= v86 + 8LL * *(unsigned int *)(v75 + 44) )
            {
              if ( (v87 & 2) != 0 )
                v89 = (v88 << 9) - (*(_QWORD *)(sub_140256DF8(*(_QWORD *)v75, 0xFFFFFFFF, v75) + 72) << 9);
              else
                v89 = (v88 << 9) - (*(_QWORD *)(sub_14027B234((_QWORD *)v75) + 72) << 9);
            }
            else
            {
              v89 = (v88 << 9) - (v86 << 9);
            }
            v90 = ((unsigned __int64)*(unsigned int *)(v75 + 36) << 9) + (v89 & 0xFFFFFFFFFFFFF000uLL);
          }
          else
          {
            v90 = ((__int64)(v88 - v86) >> 3 << 12)
                + ((*(unsigned int *)(v75 + 36) | ((unsigned __int64)(*(_WORD *)(v75 + 32) & 0xFFC0) << 26)) << 12);
          }
          *a2 ^= (v90 ^ *a2) & 0x1FFFFFFFFFFFE00LL;
        }
      }
      v91 = *(_DWORD *)(v76 + 56);
      if ( (v91 & 8) == 0 || (v91 & 1) != 0 )
        v53 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 1;
      else
        v53 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 8;
      goto LABEL_218;
    }
    v49 = v96.m128i_u64[1];
    if ( v96.m128i_i64[1] && (((unsigned __int64)v14 >> 60) & 7) != 1 )
      v49 = v96.m128i_i64[1] | 0x8000000000000000uLL;
    if ( v49 >= 0xFFFF800000000000uLL )
    {
      if ( byte_140C53F50[((v49 >> 39) & 0x1FF) - 256] == 5 )
      {
        *a2 = v13 & 0xFE000000000001F3uLL | ((unsigned __int64)*(unsigned int *)(v49 - 344) << 9) | 3;
        a2[2] = 0xFFFFF6FB7DBED000uLL;
        return 1LL;
      }
      if ( v49 == -8LL )
      {
        *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        a2[2] = MmBadPointer;
        return 1LL;
      }
    }
    v50 = ((unsigned __int64)v14 >> 60) & 7;
    if ( v50 == 1 )
    {
      if ( *(_QWORD *)sub_14024A35C(&v96) == 399680LL )
        v52 = 0;
      else
        v52 = sub_14058CAA0(&v96, 3LL, v51);
      v53 = v51 & 0xFE000000000001F9uLL | ((unsigned __int64)v52 << 9) | 9;
      goto LABEL_218;
    }
    v54 = 0;
    if ( v49 )
    {
      if ( v49 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        *a2 = v13 & 0xF1FFFFFFFFFFFF8FuLL | 0x10;
        return 1LL;
      }
      v55 = (__int64)(v49 << 25) >> 16;
      if ( v55 >= 0xFFFF800000000000uLL )
      {
        v56 = (unsigned __int8)byte_140C53F50[((v55 >> 39) & 0x1FF) - 256];
        if ( v56 == 5 )
        {
          a2[2] = v55;
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
          return 1LL;
        }
        goto LABEL_112;
      }
    }
    else
    {
      v55 = 0LL;
    }
    v56 = 0;
LABEL_112:
    a2[2] = v55 & 0xFFFFFFFFFFFFF000uLL;
    if ( (v14 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
    {
      result = 1LL;
      if ( v56 == 9 )
        *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
      else
        *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
      return result;
    }
    if ( v55 > 0x7FFFFFFEFFFFLL )
    {
      if ( v50 == 2 )
      {
        *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
        return 1LL;
      }
      if ( v56 == 1 )
      {
        v57 = v92;
        v58 = sub_14026B1C0(v92);
        if ( (*(_QWORD *)(v58 + 24) & 0x4000000000000000LL) == 0 )
          v54 = *(_DWORD *)(((*(_QWORD *)v58 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) + 8);
        v59 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)v54 << 9);
        *a2 = v59;
        if ( v58 != v57 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v59 = *a2;
        }
        *a2 = v59 & 0xFFFFFFFFFFFFFFF0uLL | 7;
        return 1LL;
      }
      if ( v56 == 6 )
      {
        *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 4;
        return 1LL;
      }
      if ( v56 <= 0x10 )
      {
        v60 = 86528;
        if ( _bittest(&v60, v56) )
        {
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
          return 1LL;
        }
      }
    }
    if ( (v8 & 7) == 6 && ((v42 & 1) == 0 || v12) )
    {
      if ( v55 > 0x7FFFFFFEFFFFLL && (unsigned int)sub_14027B54C((__int64)&v96) )
      {
        v61 = sub_14026B1C0(v92);
        v62 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)(unsigned int)sub_14058CAA0(v61, 2LL, v61) << 9);
        *a2 = v62;
        if ( v63 != v92 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v62 = *a2;
        }
        *a2 = v62 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
        return 1LL;
      }
      if ( v55 < 0xFFFFF68000000000uLL || v55 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v53 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        goto LABEL_218;
      }
      goto LABEL_140;
    }
    v64 = v92;
    v65 = 0;
    v66 = v92;
    memset(v101, 0, sizeof(v101));
    v67 = *(_QWORD *)(v92 + 40);
    if ( (v67 & 0xFFFFFFFFFFLL) != BugCheckParameter2 )
    {
      do
      {
        v68 = v67 & 0xFFFFFFFFFFLL;
        v66 = 48 * (v67 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( ++v54 > 4 )
          KeBugCheckEx(0x1Au, 0x9696uLL, v92, 0LL, 0LL);
        LODWORD(BugCheckParameter2) = 0;
        *((_QWORD *)v101 + v54 - 1) = v66;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) )
        {
          do
          {
            do
              sub_1402F32E0(&BugCheckParameter2);
            while ( *(__int64 *)(v66 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) );
          v65 = 0;
        }
        v67 = *(_QWORD *)(v66 + 40);
      }
      while ( (v67 & 0xFFFFFFFFFFLL) != v68 );
      v64 = v92;
    }
    v69 = 0;
    v70 = (__int64 *)v101;
    do
    {
      v71 = *v70;
      if ( !*v70 )
        break;
      if ( v71 != v66 )
        _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++v69;
      ++v70;
    }
    while ( v69 < 4 );
    if ( (*(_QWORD *)(v66 + 24) & 0x4000000000000000LL) == 0 )
      v65 = *(_DWORD *)(((*(_QWORD *)v66 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) + 0x440);
    *a2 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)v65 << 9);
    if ( v66 != v64 )
      _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v55 >= 0xFFFFF68000000000uLL && v55 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
LABEL_140:
      v53 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
      goto LABEL_218;
    }
    if ( v55 < qword_140C540C0 || v55 > qword_140C51BF0 )
    {
      *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
      return 1LL;
    }
    v53 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
LABEL_218:
    *a2 = v53;
    return 1LL;
  }
  v15 = 0;
  v100 = 0LL;
  v16 = (__int64)a1;
  v99 = 0LL;
  v17 = v7;
  v18 = 0;
  v19 = 2;
  v20 = -1;
  while ( 1 )
  {
    v21 = qword_14001C780[v19] - 1;
    if ( (v21 & v17) != 0 )
    {
      v17 &= ~v21;
      v16 = 48 * v17 - 0x220000000000LL;
      if ( (unsigned int)++v18 > 3 )
        KeBugCheckEx(0x1Au, 0x9700uLL, BugCheckParameter2, v17, 0LL);
      v95 = 0;
      *((_QWORD *)&v99 + (unsigned int)(v18 - 1)) = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v95);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
        v15 = 0;
      }
    }
    if ( (*(_BYTE *)(v16 + 36) & 3) != 0 )
      break;
    if ( !v19 )
      KeBugCheckEx(0x1Au, 0x9701uLL, BugCheckParameter2, v17, 0LL);
    --v19;
  }
  v22 = 0;
  v23 = (__int64 *)&v99;
  do
  {
    v24 = *v23;
    if ( !*v23 )
      break;
    if ( v24 != v16 )
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v22;
    ++v23;
  }
  while ( v22 < 3 );
  v25 = (_QWORD *)v16;
  v26 = *(_BYTE *)(v16 + 34) & 7;
  v94 = (_QWORD *)v16;
  if ( _bittest64((const signed __int64 *)(v16 + 40), 0x28u) )
  {
    v27 = 3 - (*(_BYTE *)(v16 + 36) & 3);
    if ( v27 == 3 )
      v27 = -1;
    v20 = v27;
  }
  v28 = 0LL;
  v29 = 0xFFFFF6FFFFFFFFFFuLL;
  v30 = 1;
  v31 = qword_14001C780[v20];
  v32 = BugCheckParameter2 & ~(v31 - 1);
  v33 = v32 + v31 - BugCheckParameter2;
  if ( v26 != 6 )
    goto LABEL_46;
  v34 = v25[2];
  if ( (v34 & 0x400) != 0 )
    v35 = v34 >> 11;
  else
    v35 = v34 >> 3;
  if ( (v35 & 1) != 0 )
    *a2 |= 0x80uLL;
  v28 = v25[1];
  if ( !v28 )
    goto LABEL_46;
  if ( ((v25[5] >> 60) & 7) != 1 )
    v28 |= 0x8000000000000000uLL;
  for ( j = (__int64)(v28 << 25) >> 16; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
  {
    if ( j > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    v28 = j;
  }
  v28 += 8 * (BugCheckParameter2 - v32);
  for ( k = v28; k >= 0xFFFFF68000000000uLL; k = (__int64)(k << 25) >> 16 )
  {
    if ( k > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( k > 0x7FFFFFFEFFFFLL )
    goto LABEL_45;
  v38 = *v25 & 0xFFFFFFFFFFLL;
  v25 = v94;
  if ( v38 <= 0x40000
    || (v39 = sub_14024A35C(v94), v39 >= 0xFFFFDE0000000000uLL) && v39 < 48 * qword_140C50840 - 0x21FFFFFFFFD0LL )
  {
    v26 = v30;
LABEL_45:
    v15 = 0;
    goto LABEL_46;
  }
  v15 = *(_DWORD *)(v39 + 1088);
LABEL_46:
  if ( v25 != (_QWORD *)v92 )
    _InterlockedAnd64(v25 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v26 == 6 )
  {
    v40 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x160;
    *a2 = v40;
    if ( v28 >= 0xFFFF800000000000uLL && byte_140C53F50[((v28 >> 39) & 0x1FF) - 256] == 5 )
    {
      *a2 = v40 & 0xFE000000000001F3uLL | ((unsigned __int64)*(unsigned int *)(v28 - 344) << 9) | 3;
      result = v33;
      a2[2] = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      for ( ; v28 >= 0xFFFFF68000000000uLL; v28 = (__int64)(v28 << 25) >> 16 )
      {
        if ( v28 > v29 )
          break;
      }
      if ( v28 >= 0xFFFF800000000000uLL && byte_140C53F50[((v28 >> 39) & 0x1FF) - 256] == 5 )
      {
        a2[2] = v28;
        result = v33;
        *a2 = v40 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      }
      else
      {
        a2[2] = v28 & 0xFFFFFFFFFFFFF000uLL;
        result = v33;
        if ( v28 <= 0x7FFFFFFEFFFFLL )
          *a2 = v40 & 0xFE000000000001FDuLL | ((unsigned __int64)v15 << 9) | 0xD;
        else
          *a2 = v40 & 0xFFFFFFFFFFFFFFF0uLL | 6;
      }
    }
  }
  else
  {
    if ( v26 == 5 )
      v26 = v30;
    result = v33;
    *a2 = *a2 & 0xF1FFFFFFFFFFFF8FuLL | (16LL * v26) & 0xF1FFFFFFFFFFFFFFuLL;
  }
  return result;
}
