/*
 * XREFs of sub_1403171A0 @ 0x1403171A0
 * Callers:
 *     sub_14024501C @ 0x14024501C (sub_14024501C.c)
 *     sub_1402E599C @ 0x1402E599C (sub_1402E599C.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_140332670 @ 0x140332670 (sub_140332670.c)
 *     sub_140332A80 @ 0x140332A80 (sub_140332A80.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_140373880 @ 0x140373880 (sub_140373880.c)
 *     sub_1403C49DC @ 0x1403C49DC (sub_1403C49DC.c)
 * Callees:
 *     sub_140274720 @ 0x140274720 (sub_140274720.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403335A0 @ 0x1403335A0 (sub_1403335A0.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

__int64 __fastcall sub_1403171A0(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v5; // r15
  char v7; // bl
  int v8; // edi
  unsigned __int64 v9; // r12
  int v10; // ecx
  volatile signed __int32 *v11; // rbp
  unsigned __int64 v12; // rdx
  int v13; // edi
  volatile unsigned __int64 v14; // rax
  char v15; // al
  _DWORD *v16; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v18; // rcx
  signed __int32 v19; // ett
  int v20; // ebp
  volatile unsigned __int64 v21; // rax
  _QWORD *v22; // rsi
  unsigned __int8 v23; // di
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 v27; // r8
  unsigned __int8 v28; // al
  unsigned __int8 v29; // di
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 *v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  unsigned __int64 *v41; // rbx
  bool v43; // zf
  volatile LONG *v44; // rax
  volatile LONG *v45; // rax
  char v46; // cl
  int v47; // r8d
  volatile LONG *v48; // rax
  __int64 v49; // rcx
  volatile LONG *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // [rsp+20h] [rbp-88h]
  int v65; // [rsp+20h] [rbp-88h]
  __int64 v67; // [rsp+28h] [rbp-80h] BYREF
  int v68; // [rsp+30h] [rbp-78h]
  __int64 v69; // [rsp+38h] [rbp-70h] BYREF
  __int64 v70; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v71[2]; // [rsp+48h] [rbp-60h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v5 = a3;
  v7 = 0;
  v8 = 0;
  v68 = 0;
  v64 = 0;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1;
    LODWORD(v67) = 1;
  }
  else
  {
    v10 = 0;
    v43 = (*(_BYTE *)(a1 + 184) & 7) == 0;
    LODWORD(v67) = 0;
    if ( !v43 )
    {
      v8 = 1;
      v64 = 1;
    }
  }
  v11 = (volatile signed __int32 *)&unk_140C53D40;
  v12 = 0xFFFFF6FB7DBED000uLL;
  if ( a4 != 8 )
  {
    v13 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        if ( v10 )
        {
          v14 = *(_QWORD *)v9;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
          {
            if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
              && (v14 & 1) != 0
              && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
            {
              v51 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v51 )
              {
                v52 = *(_QWORD *)(v51 + 8 * ((v9 >> 3) & 0x1FF));
                if ( (v52 & 0x20) != 0 )
                  v14 |= 0x20uLL;
                if ( (v52 & 0x42) != 0 )
                  v14 |= 0x42uLL;
              }
            }
            v12 = 0xFFFFF6FB7DBED000uLL;
          }
          v7 = HIBYTE(v14) & 0xF | (16 * ((v14 >> 60) & 7));
          v15 = HIBYTE(v14) & 0xF;
        }
        else
        {
          v15 = (*(_BYTE *)(48 * (((unsigned __int64)sub_140317A10(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 1) & 7;
          v12 = 0xFFFFF6FB7DBED000uLL;
        }
        if ( v15 == 8 )
          break;
        v10 = v67;
        if ( ++v13 >= (unsigned int)v5 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      if ( v13 == (_DWORD)v5 )
      {
        if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
          v16 = &unk_140C53D40;
        else
          v16 = (_DWORD *)(a1 + 256);
        if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
        {
          LOBYTE(v12) = -1;
          sub_140461B20(v16, v12);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v18 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v53 = *(_DWORD *)(v18 + 24);
              *(_DWORD *)(v18 + 24) = v53 + 1;
              if ( v53 == -1 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          _m_prefetchw(v16);
          v19 = *v16 & 0x7FFFFFFF;
          if ( v19 != _InterlockedCompareExchange(v16, v19 + 1, v19) )
          {
            v49 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v49 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v54 = *(_DWORD *)(v49 + 24) - 1;
                *(_DWORD *)(v49 + 24) = v54;
                if ( !v54 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
            LOBYTE(v12) = -1;
            sub_140366A20(v16, v12);
          }
        }
        goto LABEL_16;
      }
    }
    v68 = 1;
    v45 = (volatile LONG *)sub_140282AD0(a1);
    ExAcquireSpinLockExclusiveAtDpcLevel(v45 + 16);
LABEL_16:
    v8 = v64;
    goto LABEL_17;
  }
  v68 = 1;
  v48 = (volatile LONG *)sub_140282AD0(a1);
  ExAcquireSpinLockExclusiveAtDpcLevel(v48 + 16);
  if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + v5 + 6) )
  {
    v50 = (volatile LONG *)sub_140282AD0(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v50 + 16);
    return 0LL;
  }
LABEL_17:
  if ( (_DWORD)v5 )
  {
    v20 = v67;
    while ( 1 )
    {
      v65 = v8;
      if ( v20 )
      {
        v21 = *(_QWORD *)v9;
        v22 = 0LL;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL
          && v9 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v21 & 1) != 0
          && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          v55 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v56 & 0x20) != 0 )
              v21 |= 0x20uLL;
            if ( (v56 & 0x42) != 0 )
              v21 |= 0x42uLL;
          }
        }
        v7 = HIBYTE(v21) & 0xF | (16 * ((v21 >> 60) & 7));
        v23 = HIBYTE(v21) & 0xF;
        if ( (HIBYTE(v21) & 0xF) != 8 )
        {
          v65 = 0;
LABEL_24:
          if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v24 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v25 = *(_QWORD *)v24;
            if ( v24 >= 0xFFFFF6FB7DBED000uLL
              && v24 <= 0xFFFFF6FB7DBED7F8uLL
              && (dword_140D06880 & 0xC00000) != 0
              && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
              && (v25 & 1) != 0
              && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
            {
              v57 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v57 )
              {
                v58 = *(_QWORD *)(v57 + 8 * ((v24 >> 3) & 0x1FF));
                if ( (v58 & 0x20) != 0 )
                  v25 |= 0x20uLL;
                if ( (v58 & 0x42) != 0 )
                  v25 |= 0x42uLL;
              }
            }
            v69 = v25;
            v26 = (__int64 *)(48 * (((unsigned __int64)sub_140317A10(&v69) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
            v27 = *v26;
            v28 = ((unsigned __int64)*v26 >> 14) & 7;
            if ( (((unsigned __int64)*v26 >> 4) & 0x3FF) != 0 )
            {
              if ( v23 == v28 )
              {
                *v26 = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(16
                                                                       * ((((unsigned __int64)*v26 >> 4) & 0x3FF) - 1))) & 0x3FF0;
              }
              else if ( v23 > v28 )
              {
                *v26 = v27 ^ ((unsigned int)v27 ^ (v23 << 14)) & 0x1C000 | 0x3FF0;
              }
            }
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8LL * v23 + 40), 0xFFFFFFFFFFFFFFFFuLL);
          if ( v23 == 7 )
            sub_1403335A0(a1, -1LL);
          goto LABEL_32;
        }
        v65 = 1;
        --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      }
      else
      {
        v22 = (_QWORD *)(48 * (((unsigned __int64)sub_140317A10(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        v23 = ((unsigned __int8)*v22 >> 1) & 7;
        if ( !v65 )
          goto LABEL_24;
      }
LABEL_32:
      v29 = a4;
      if ( (unsigned __int8)(a4 - 1) <= 5u
        && (sub_140317A10(v9) & 0x20) != 0
        && (a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624)) )
      {
        v29 = 0;
      }
      if ( v22 )
      {
        *v22 ^= ((unsigned __int8)*v22 ^ (unsigned __int8)(2 * v29)) & 0xE;
      }
      else
      {
        v7 ^= (v29 ^ v7) & 0xF;
        v30 = *(_QWORD *)v9;
        do
        {
          if ( (dword_140D06880 & 0x4000000) != 0 )
            _mm_lfence();
          v31 = v30;
          v30 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v9,
                  ((unsigned __int64)(v7 & 0x7F) << 56) | v30 & 0x80FFFFFFFFFFFFFFuLL,
                  v30);
        }
        while ( v31 != v30 );
        v20 = v67;
      }
      if ( v29 >= 8u )
      {
        if ( v29 == 8 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      }
      else if ( v20 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v32 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v33 = *(_QWORD *)v32;
          if ( v32 >= 0xFFFFF6FB7DBED000uLL
            && v32 <= 0xFFFFF6FB7DBED7F8uLL
            && (dword_140D06880 & 0xC00000) != 0
            && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
            && (v33 & 1) != 0
            && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
          {
            v59 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
            if ( v59 )
            {
              v60 = *(_QWORD *)(v59 + 8 * ((v32 >> 3) & 0x1FF));
              if ( (v60 & 0x20) != 0 )
                v33 |= 0x20uLL;
              if ( (v60 & 0x42) != 0 )
                v33 |= 0x42uLL;
            }
          }
          v70 = v33;
          v34 = (unsigned __int64 *)(48 * (((unsigned __int64)sub_140317A10(&v70) >> 12) & 0xFFFFFFFFFFLL)
                                   - 0x220000000000LL);
          v35 = *v34;
          v36 = (*v34 >> 14) & 7;
          if ( ((*v34 >> 4) & 0x3FF) != 0 )
          {
            if ( v29 == v36 )
            {
              *v34 = v35 ^ ((unsigned __int16)v35 ^ (unsigned __int16)(16 * (((*v34 >> 4) & 0x3FF) + 1))) & 0x3FF0;
            }
            else if ( v29 > v36 )
            {
              *v34 = v35 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v29 & 7) << 14) | 0x10;
            }
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8LL * v29 + 40), 1uLL);
        if ( v29 == 7 )
          sub_1403335A0(a1, 1LL);
      }
      v8 = v65;
      LODWORD(v5) = v5 - 1;
      if ( !(_DWORD)v5 )
      {
        v11 = (volatile signed __int32 *)&unk_140C53D40;
        break;
      }
    }
  }
  if ( v68 )
  {
    v44 = (volatile LONG *)sub_140282AD0(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v44 + 16);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
      v11 = (volatile signed __int32 *)(a1 + 256);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14063D8E0(v11, retaddr);
    }
    else
    {
      _InterlockedAnd(v11, 0xBFFFFFFF);
      _InterlockedDecrement(v11);
    }
    v37 = KeGetCurrentPrcb();
    v38 = *((_QWORD *)v37 + 4375);
    if ( v38 )
    {
      if ( *((_BYTE *)v37 + 32) <= 1u )
      {
        v61 = *(_DWORD *)(v38 + 24) - 1;
        *(_DWORD *)(v38 + 24) = v61;
        if ( !v61 )
          sub_140418E4C(v37);
      }
    }
  }
  if ( (_DWORD)v67 )
  {
    v39 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v40 = *(_QWORD *)v39;
    if ( v39 >= 0xFFFFF6FB7DBED000uLL
      && v39 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v40 & 1) != 0
      && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
    {
      v62 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v62 )
      {
        v63 = *(_QWORD *)(v62 + 8 * ((v39 >> 3) & 0x1FF));
        if ( (v63 & 0x20) != 0 )
          v40 |= 0x20uLL;
        if ( (v63 & 0x42) != 0 )
          v40 |= 0x42uLL;
      }
    }
    v67 = v40;
    v41 = (unsigned __int64 *)(48 * (((unsigned __int64)sub_140317A10(&v67) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    if ( ((*(_DWORD *)v41 >> 4) & 0x3FF) == 0 )
    {
      sub_140274720(0xFFFFFFFFFFLL, a2, v71);
      v46 = 8;
      while ( 1 )
      {
        v47 = *((_DWORD *)v71 + (unsigned __int8)--v46);
        if ( v47 )
          break;
        if ( !v46 )
          return 1LL;
      }
      *v41 = *v41 & 0xFFFFFFFFFFFE000FuLL | (16 * (v47 & 0x3FF | ((unsigned __int64)(v46 & 7) << 10)));
    }
  }
  return 1LL;
}
