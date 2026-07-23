/*
 * XREFs of NaptrDnsRecordConvert_0 @ 0x14036CF60
 * Callers:
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_14036CD34 @ 0x14036CD34 (sub_14036CD34.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14023A0E4 @ 0x14023A0E4 (sub_14023A0E4.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall NaptrDnsRecordConvert_0(unsigned __int64 a1)
{
  __int64 v2; // r12
  int v3; // r15d
  unsigned __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  int v10; // r10d
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r14
  __int64 *v14; // r12
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  int v21; // r12d
  unsigned __int64 v22; // rbx
  __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rbx
  char *v26; // r15
  __int64 v27; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rbx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r12
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  int v43; // eax
  unsigned __int64 v45; // rax
  int v46; // [rsp+20h] [rbp-E0h]
  int v47; // [rsp+24h] [rbp-DCh]
  int v48; // [rsp+28h] [rbp-D8h] BYREF
  int v49; // [rsp+2Ch] [rbp-D4h]
  int v50; // [rsp+30h] [rbp-D0h]
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v54; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v55; // [rsp+58h] [rbp-A8h]
  __int64 *v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v61[24]; // [rsp+90h] [rbp-70h] BYREF

  v54 = a1;
  memset(v61, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(__int64 **)(a1 + 16);
  *(_DWORD *)(a1 + 56) = -1073741823;
  v55 = v4;
  v53 = v2;
  v57 = v6;
  v56 = v7;
  v8 = 48 * v2 - 0x220000000000LL;
  v47 = 0;
  v9 = *(_DWORD *)(a1 + 60);
  v59 = 48 * v6 - 0x220000000000LL;
  v49 = 0;
  v46 = 0;
  v50 = 0;
  if ( v9 == 1 )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 1928LL);
    if ( !v42 )
      return sub_1402E89B0((unsigned __int64 *)(v59 + 16));
    v60 = sub_140317A10(((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (((unsigned __int64)sub_140317A10((unsigned __int64)&v60) >> 12) & 0xFFFFFFFFFFLL) != v2 )
      return sub_1402E89B0((unsigned __int64 *)(v59 + 16));
  }
  v10 = 1;
  if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) == v2 )
  {
    v48 = 1;
    if ( v9 == 1 )
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 12;
  }
  else
  {
    v48 = 0;
    v11 = sub_1402CFEB0(v4);
    if ( v11 > 0x7FFFFFFEFFFFLL
      && (v11 < qword_140C540C0 || v11 > qword_140C51BF0)
      && (v11 < 0xFFFFF68000000000uLL || v11 > v12) )
    {
      v43 = sub_14027B080(v11);
      v10 = 0;
      if ( v43 == 1 )
        v10 = 2;
    }
  }
  v61[2] = 0LL;
  v61[3] = 0LL;
  v13 = v4;
  v14 = v56;
  v58 = -(__int64)v4;
  LODWORD(v61[0]) = v10;
  WORD2(v61[0]) = 0;
  LODWORD(v61[1]) = 20;
  do
  {
    while ( 1 )
    {
      v15 = sub_140317A10(v13);
      v18 = 1LL;
      v51 = v15;
      v19 = v15;
      if ( (v15 & 1) != 0 )
        break;
      v16 = v15;
      if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
        goto LABEL_8;
      v35 = (__int64)(v13 << 25) >> 16;
      if ( v35 >= 0xFFFFF68000000000uLL && v35 <= 0xFFFFF6FFFFFFFFFFuLL && !sub_14023A0E4(v13) )
      {
        ++dword_140C29D5C;
        goto LABEL_94;
      }
      v36 = sub_140315D60(v13, (_BYTE *)(v3 != 0), 0);
      if ( v36 )
      {
        v19 = sub_140317A10(v13);
        v51 = v19;
        v16 = v19;
        v17 = 0xFFFFFFFFFFLL;
        v37 = *(_QWORD *)(v36 + 40);
        v18 = 1LL;
        if ( (v37 & 0xFFFFFFFFFFLL) != v5 && (v37 & 0x10000000000LL) != 0 )
          ++v50;
        if ( (*(_BYTE *)(v36 + 34) & 0x20) != 0 )
        {
          ++dword_140C29D58;
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_94;
        }
        ++v3;
LABEL_8:
        if ( v5 == v53 )
          goto LABEL_9;
        goto LABEL_29;
      }
    }
    ++v47;
    if ( (v15 & 0x80u) == 0LL )
    {
      v29 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v51) >> 12) & 0xFFFFFFFFFFLL;
      if ( v29 == qword_140C53278 )
      {
        v18 = 1LL;
        ++v49;
        goto LABEL_27;
      }
      if ( v29 > qword_140C50840 )
      {
        v18 = 1LL;
        goto LABEL_27;
      }
      v16 = *(_QWORD *)(48 * v29 - 0x21FFFFFFFFD8LL);
      v18 = 1LL;
      if ( ((v16 >> 54) & 1) == 0 || (v16 & 0x10000000000LL) == 0 )
        goto LABEL_27;
    }
    ++v46;
LABEL_27:
    if ( v5 == v53 )
      goto LABEL_9;
    v19 = sub_140317A10(*(_QWORD *)(v54 + 64) + 8 * ((__int64)(v13 + v58) >> 3));
    v16 = v19;
    v18 = 1LL;
LABEL_29:
    LOBYTE(v16) = -(v16 & 1);
    v19 &= -(__int64)((_BYTE)v16 != 0);
    v51 = v19;
LABEL_9:
    *v14 = v19;
    v13 += 8LL;
    ++v14;
  }
  while ( (v13 & 0xFFF) != 0 );
  if ( v3 )
  {
    sub_140239060(v8);
  }
  else
  {
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v52, v16, v17, v18);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  v20 = *(_QWORD *)(v8 + 24);
  v21 = v47;
  v22 = v20 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v48 || (unsigned __int16)v20 == (unsigned __int64)(unsigned int)(v3 - v49 - v50 - v46 + v47 + 1))
    && *(_WORD *)(v8 + 32) == 1
    && v22 < 0x10000 )
  {
    v23 = v59;
    sub_140239060(v59);
    *(_QWORD *)(v23 + 24) = v22 | *(_QWORD *)(v23 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v24 = v55;
    v25 = v55;
    if ( v3 )
    {
      v38 = v53;
      v39 = v57;
      do
      {
        v40 = sub_140317A10(v25);
        if ( (v40 & 1) == 0 && (v40 & 0x400) == 0 && (v40 & 0x800) != 0 )
        {
          if ( qword_140C50780 )
          {
            if ( (v40 & 0x10) != 0 )
              v40 &= ~0x10uLL;
            else
              v40 &= ~qword_140C50780;
          }
          v41 = 48 * ((v40 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          if ( (*(_QWORD *)(v41 + 40) & 0xFFFFFFFFFFLL) == v5 && v5 == v38 )
            sub_14033C3E0(v41, v39);
          --v3;
          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v25 += 8LL;
      }
      while ( v3 );
      v24 = v55;
      v21 = v47;
    }
    if ( v21 )
    {
      v26 = (char *)v56 - v24;
      do
      {
        v27 = sub_140317A10(v24);
        v51 = v27;
        if ( (v27 & 1) != 0 )
        {
          --v21;
          v30 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v51) >> 12) & 0xFFFFFFFFFFLL;
          if ( v30 <= qword_140C50840 )
          {
            v32 = 6 * v30;
            v33 = (*(_QWORD *)(48 * v30 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
            if ( ((*(_QWORD *)(48 * v30 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 && v30 != v5 )
            {
              v48 = 0;
              v34 = 48 * v30 - 0x220000000000LL;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
              {
                do
                  sub_1402F32E0(&v48, v33, v32, v31);
                while ( *(__int64 *)(v34 + 24) < 0 );
              }
              if ( (*(_QWORD *)(v34 + 40) & 0xFFFFFFFFFFLL) == v5 && v5 == v53 )
                sub_14033C3E0(v34, v57);
              _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v27 = v51;
            }
          }
          if ( v5 != v53 )
            v27 = sub_140317A10(*(_QWORD *)(v54 + 64) + 8 * ((__int64)(v24 + v58) >> 3));
          if ( (v27 & 1) != 0 )
          {
            sub_14033DBC0((unsigned __int64)&v26[v24], v27 | 0x20);
            if ( (dword_140D06880 & 0x100) == 0 && (dword_140D06880 & 0x200) == 0 )
              sub_1402CF280((__int64)v61, (__int64)(v24 << 25) >> 16, 1LL, 0);
          }
        }
        v24 += 8LL;
      }
      while ( v21 );
    }
    sub_14032F1B0((__int64)v61);
    result = v54;
    *(_DWORD *)(v54 + 56) = 0;
    return result;
  }
  ++dword_140C29D60;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_94:
  while ( v3 )
  {
    v13 -= 8LL;
    v45 = sub_140317A10(v13);
    if ( (v45 & 1) == 0 && (v45 & 0x400) == 0 && (v45 & 0x800) != 0 )
    {
      if ( qword_140C50780 )
      {
        if ( (v45 & 0x10) != 0 )
          v45 &= ~0x10uLL;
        else
          v45 &= ~qword_140C50780;
      }
      --v3;
      _InterlockedAnd64(
        (volatile signed __int64 *)(48 * ((v45 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL),
        0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return sub_1402E89B0((unsigned __int64 *)(v59 + 16));
}
