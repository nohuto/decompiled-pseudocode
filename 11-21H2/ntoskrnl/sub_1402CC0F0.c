/*
 * XREFs of sub_1402CC0F0 @ 0x1402CC0F0
 * Callers:
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C9E70 @ 0x1402C9E70 (sub_1402C9E70.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 */

__int64 __fastcall sub_1402CC0F0(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2)
{
  ULONG_PTR v2; // r14
  __int64 v3; // r12
  unsigned __int64 v5; // r15
  __int64 v6; // r13
  ULONG_PTR v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // zf
  __int64 v22; // rbx
  signed __int8 v23; // al
  unsigned int v24; // ecx
  unsigned __int64 v25; // r15
  _QWORD *v26; // r14
  _QWORD *v27; // rsi
  unsigned int v28; // eax
  unsigned int v29; // r13d
  volatile signed __int64 *v30; // rdi
  char v31; // al
  char v32; // al
  signed __int64 v33; // rax
  volatile signed __int64 v34; // rcx
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  volatile signed __int64 v37; // rcx
  signed __int64 v38; // rax
  volatile signed __int64 v39; // rax
  char v40; // al
  __int64 v41; // rbx
  __int64 j; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  ULONG_PTR v49; // rax
  __int64 v50; // [rsp+30h] [rbp-D0h]
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v54; // [rsp+48h] [rbp-B8h]
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v58; // [rsp+68h] [rbp-98h]
  __int64 v59; // [rsp+70h] [rbp-90h]
  __int128 v60; // [rsp+78h] [rbp-88h]
  __int128 v61; // [rsp+88h] [rbp-78h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  signed __int64 v63; // [rsp+A0h] [rbp-60h]
  __int128 v64; // [rsp+A8h] [rbp-58h]
  __int128 v65; // [rsp+B8h] [rbp-48h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  signed __int64 v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+D8h] [rbp-28h]
  __int128 v69; // [rsp+E8h] [rbp-18h]
  __int128 v70; // [rsp+F8h] [rbp-8h]
  __int128 v71; // [rsp+108h] [rbp+8h]
  __int128 v72; // [rsp+118h] [rbp+18h]
  __int128 v73; // [rsp+128h] [rbp+28h]
  __int128 v74; // [rsp+138h] [rbp+38h]
  __int128 v75; // [rsp+148h] [rbp+48h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  volatile signed __int64 v77; // [rsp+160h] [rbp+60h]
  __int128 v78; // [rsp+168h] [rbp+68h] BYREF
  __int128 v79; // [rsp+178h] [rbp+78h]
  __int128 v80; // [rsp+188h] [rbp+88h]

  v2 = BugCheckParameter2;
  v78 = 0LL;
  v3 = -1LL;
  v79 = 0LL;
  v5 = -1LL;
  v59 = *((_QWORD *)KeGetCurrentThread() + 23);
  v6 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v59 + 1838));
  v57 = v6;
  v7 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v45 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 8 * ((v7 >> 3) & 0x1FF));
      if ( (v46 & 0x20) != 0 )
        v8 |= 0x20uLL;
      if ( (v46 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
  }
  v55 = v8;
  v9 = v2;
  v58 = ((unsigned __int64)sub_140317A10(&v55) >> 12) & 0xFFFFFFFFFFLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v11 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v47 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 8 * ((v9 >> 3) & 0x1FF));
        if ( (v48 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v48 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
    }
    if ( !v11 )
      return 0LL;
    if ( (v11 & 0x400) == 0 )
      return 0LL;
    v56 = v11 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v12 = ((unsigned __int64)sub_140317A10(&v56) >> 12) & 0xFFFFFFFFFFLL;
    if ( i )
    {
      if ( v12 != v5 )
        return 0LL;
    }
    if ( byte_140C58C66
      && _bittest64((const signed __int64 *)qword_140C58DE0, (0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v12) >> 4)) >> 9) )
    {
      return 0LL;
    }
    v13 = *(_QWORD *)(48 * v12 - 0x220000000000LL + 40);
    if ( v13 < 0 || *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v13 >> 43) & 0x3FF)) != v6 )
      return 0LL;
    v5 = v12 + 1;
    v9 += 8LL;
  }
  sub_1402C9E70(a2);
  v54 = v5 - 16;
  v14 = 48 * (v5 - 16);
  v15 = v5 - 16;
  v16 = v14 - 0x220000000000LL;
  v17 = (_QWORD *)(v14 - 0x220000000000LL);
  v50 = v14 - 0x220000000000LL;
  sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * (v14 >> 4));
  v80 = 0LL;
  v21 = 0;
  if ( v5 - 16 < v5 )
  {
    v54 = v5 - 16;
    v22 = v16 + 24;
    do
    {
      v23 = _interlockedbittestandset64((volatile signed __int32 *)v22, 0x3FuLL);
      if ( v15 == v5 - 16 )
      {
        v52 = 0;
        if ( v23 )
        {
          do
          {
            do
              sub_1402F32E0(&v52);
            while ( *(__int64 *)v22 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0x3FuLL) );
        }
      }
      else if ( v23 )
      {
        break;
      }
      v3 = v15;
      if ( (*(_QWORD *)(v22 - 16) | 0x8000000000000000uLL) != v2 )
      {
        v49 = sub_140317A10(v2);
        KeBugCheckEx(0x1Au, 0x403uLL, v2, v49, *(_QWORD *)(v16 + 8));
      }
      v24 = *(unsigned __int8 *)(v22 + 10);
      if ( (v24 & 7) != 6 )
        sub_1405AD6C8(v16, v18, v19, v20);
      if ( *(_WORD *)(v22 + 8) != 1 )
        break;
      if ( (*(_BYTE *)(v22 + 11) & 0x40) != 0 )
        break;
      ++v15;
      v16 += 48LL;
      v22 += 48LL;
      v2 += 8LL;
      ++*((_DWORD *)&v80 + ((unsigned __int64)v24 >> 6));
    }
    while ( v15 < v5 );
    v17 = (_QWORD *)v50;
    v21 = v15 == v5;
  }
  if ( !v21 )
  {
    if ( v3 != -1 )
    {
      for ( j = 48 * v3 - 0x220000000000LL; (_QWORD *)j != v17; j -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v25 = v16;
  v26 = (_QWORD *)(v2 - 128);
  v27 = (_QWORD *)(v16 - 768);
  v28 = 0;
  v29 = 1;
  if ( (_DWORD)v80 )
  {
    v28 = v80;
    v29 = 0;
  }
  if ( v28 < DWORD1(v80) )
  {
    v28 = DWORD1(v80);
    v29 = 1;
  }
  if ( v28 < DWORD2(v80) )
  {
    v28 = DWORD2(v80);
    v29 = 2;
  }
  v30 = v27 + 5;
  if ( v28 < HIDWORD(v80) )
    v29 = 3;
  do
  {
    v31 = ((unsigned __int64)*v30 >> 60) & 7;
    *((_WORD *)v30 - 4) = 2;
    if ( v31 == 3 )
      sub_14023CC50((ULONG_PTR)v27, 12);
    v51 = *((_QWORD *)v30 - 3);
    if ( (v51 & 0x400) == 0 )
    {
      if ( (v51 & 4) != 0 || (v51 & 2) != 0 )
      {
        v44 = sub_140317A10(&v51);
        v51 = v44;
        if ( v44 )
          sub_1402E20D0(v57, v44, 0LL);
      }
      else
      {
        v51 = 0LL;
      }
    }
    *((_QWORD *)v30 - 3) = 0LL;
    if ( *((unsigned __int8 *)v30 - 6) >> 6 != v29 )
      sub_140267E78((__int64)v27, v29, 1);
    v32 = *((_BYTE *)v30 - 5);
    if ( (v32 & 0x10) != 0 )
    {
      *((_BYTE *)v30 - 5) = v32 & 0xEF;
      v32 = *((_BYTE *)v30 - 5);
    }
    if ( *(__int64 *)v30 < 0 )
      *v30 &= ~0x8000000000000000uLL;
    *((_BYTE *)v30 - 5) = v32 & 0xF8;
    v33 = *v30;
    v34 = *v30;
    v62 = 0LL;
    v63 = v33;
    v60 = 0LL;
    v61 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v35 = _InterlockedCompareExchange64(v30, v34 & 0x8FFFFFFFFFFFFFFFuLL, v33);
    for ( *((_QWORD *)&v70 + 1) = v35; v63 != v35; *((_QWORD *)&v70 + 1) = v35 )
    {
      v63 = v35;
      v35 = _InterlockedCompareExchange64(v30, v35 & 0x8FFFFFFFFFFFFFFFuLL, v35);
    }
    *v27 = 0LL;
    *((_QWORD *)v30 - 4) = 0LL;
    *((_QWORD *)v30 - 3) = 0LL;
    v36 = *v30;
    v37 = *v30;
    v66 = 0LL;
    v67 = v36;
    v64 = 0LL;
    v65 = 0LL;
    v71 = 0LL;
    v72 = 0LL;
    v73 = 0LL;
    v38 = _InterlockedCompareExchange64(v30, v37 & 0xFFFFFF0000000000uLL, v36);
    for ( *((_QWORD *)&v73 + 1) = v38; v67 != v38; *((_QWORD *)&v73 + 1) = v38 )
    {
      v67 = v38;
      v38 = _InterlockedCompareExchange64(v30, v38 & 0xFFFFFF0000000000uLL, v38);
    }
    v39 = *v30;
    *((_QWORD *)v30 - 2) &= ~0x4000000000000000uLL;
    v39 |= 0x10000000000uLL;
    v76 = 0LL;
    v77 = v39;
    *((_QWORD *)v30 - 4) = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    *v30 = v39;
    v40 = *((_BYTE *)v30 - 4) & 0xFC;
    if ( v27 == v17 )
      v40 |= 1u;
    *((_BYTE *)v30 - 4) = v40;
    *((_BYTE *)v30 - 6) &= ~0x10u;
    if ( v27 != v17 )
      _InterlockedAnd64(v30 - 2, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)sub_140317A80(v26) && (unsigned int)sub_140229550() )
    {
      *v26 = 0LL;
      sub_1402294F0((__int64)v26, 0LL);
    }
    else
    {
      *v26 = 0LL;
    }
    v17 = (_QWORD *)v50;
    v27 += 6;
    v30 += 6;
    ++v26;
  }
  while ( (unsigned __int64)v27 < v25 );
  *(_QWORD *)&v78 = v54;
  *((_QWORD *)&v78 + 1) = 1LL;
  LOBYTE(v79) = 2;
  sub_1402BEEA0((__int64)&v78);
  v41 = 48 * v58 - 0x220000000000LL;
  v53 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v53);
    while ( *(__int64 *)(v41 + 24) < 0 );
  }
  *(_QWORD *)(v41 + 24) ^= (*(_QWORD *)(v41 + 24) ^ (*(_QWORD *)(v41 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v59 + 1272), 0xFFFFFFFFFFFFFFF0uLL);
  return 1LL;
}
