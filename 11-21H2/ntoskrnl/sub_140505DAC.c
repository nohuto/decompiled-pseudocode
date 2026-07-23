/*
 * XREFs of sub_140505DAC @ 0x140505DAC
 * Callers:
 *     sub_140506860 @ 0x140506860 (sub_140506860.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140505DAC(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned int v6; // edi
  _OWORD *v7; // r9
  unsigned __int64 v8; // r10
  _QWORD *v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // edi
  char *v23; // rax
  __int64 v25; // [rsp+40h] [rbp-58h]

  *a2 |= 2uLL;
  v6 = 64;
  v25 = *(unsigned int *)(a1 + 16);
  sub_14042A5E0(v25, 1LL);
  *a2 |= 1uLL;
  sub_14042A5E0(v25, 1LL);
  v7 = a2 + 8;
  a2[1] = 0LL;
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x3Au) )
  {
    a2[10] |= 2uLL;
    a2[12] = *(_QWORD *)(a1 + 48);
  }
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    a2[10] |= 0x10uLL;
    a2[15] = *(_QWORD *)(a1 + 28);
  }
  v8 = *(unsigned __int16 *)(a1 + 40);
  if ( (unsigned __int16)(v8 - 1) <= 3u || (_WORD)v8 == 1024 || (v8 & 0xFC00) == 0x400 && (v8 & 0x3FF) != 0 )
  {
    a2[10] |= 1uLL;
    v9 = a2 + 11;
    *v7 = xmmword_14003A580;
    v17 = a2[11] | 3;
    a2[11] = v17;
    v18 = ((unsigned int)v17 ^ (*(_QWORD *)(a1 + 40) >> 38)) & 0x80000 ^ v17 | 4;
    a2[11] = v18;
    v19 = ((unsigned int)v18 ^ (*(_QWORD *)(a1 + 40) >> 41)) & 0x100000 ^ v18 | 0x20;
    a2[11] = v19;
    v20 = ((unsigned int)v19 ^ (*(_QWORD *)(a1 + 40) >> 39)) & 0x800000 ^ v19;
    a2[11] = v20;
    if ( (_WORD)v8 )
    {
      switch ( (_WORD)v8 )
      {
        case 1:
          v13 = v20 & 0xFFFFFFFFFFF8FFFFuLL | 0x10000;
          break;
        case 2:
          v13 = v20 & 0xFFFFFFFFFFF8FFFFuLL | 0x20000;
          break;
        case 3:
          v13 = v20 & 0xFFFFFFFFFFF8FFFFuLL | 0x30000;
          break;
        case 4:
          v13 = v20 & 0xFFFFFFFFFFF8FFFFuLL | 0x40000;
          break;
        default:
          v13 = v20 & 0xFFFFFFFFFFF8FFFFuLL | 0x50000;
          break;
      }
    }
    else
    {
      v13 = v20 & 0xFFFFFFFFFFF8FFFFuLL;
    }
    goto LABEL_31;
  }
  if ( (v8 & 0xEFFC) == 0xC )
  {
    a2[10] |= 1uLL;
    v9 = a2 + 11;
    *v7 = xmmword_14003A5D0;
    v10 = a2[11] & 0xFFFFFFFFFE3FFFFFuLL | ((v8 & 3) << 22) | 0xC;
LABEL_15:
    *v9 = v10;
    v11 = v10 ^ ((unsigned int)v10 ^ HIDWORD(*(_QWORD *)(a1 + 40))) & 0x2000000 | 0x10;
    *v9 = v11;
    v12 = v11 ^ ((unsigned int)v11 ^ (*(_QWORD *)(a1 + 40) >> 35)) & 0x4000000 | 0x80;
    *v9 = v12;
    v13 = v12 ^ ((unsigned int)v12 ^ (*(_QWORD *)(a1 + 40) >> 33)) & 0x20000000;
LABEL_31:
    *v9 = v13;
    v6 = 128;
    *a2 = *a2 & 0xFFFFFFFFFFFFFF03uLL | 4;
    goto LABEL_32;
  }
  if ( (v8 & 0xEFF0) == 0x10 )
  {
    a2[10] |= 1uLL;
    v9 = a2 + 11;
    *v7 = xmmword_14003A5B0;
    v10 = a2[11] & 0xFFFFFFFFFE3CFFFFuLL | ((((v8 & 3) << 6) | ((unsigned __int16)v8 >> 2) & 3LL) << 16) | 0xD;
    goto LABEL_15;
  }
  if ( (v8 & 0xEF00) == 0x100 )
  {
    a2[10] |= 1uLL;
    v9 = a2 + 11;
    *v7 = xmmword_14003A5D0;
    v10 = a2[11] & 0xFFFFFFFFFE00FFFFuLL | ((((unsigned __int16)v8 >> 2) & 3LL | (4
                                                                                * ((16 * (v8 & 3)) | ((unsigned __int16)v8 >> 4) & 0xF))) << 16) | 0xF;
    goto LABEL_15;
  }
  if ( (v8 & 0xE800) == 0x800 )
  {
    a2[10] |= 1uLL;
    v9 = a2 + 11;
    *v7 = xmmword_14003A600;
    v14 = a2[11] & 0xFFFFFFFFFE03FFFFuLL | (((16 * (v8 & 3)) | ((unsigned __int16)v8 >> 4) & 0xF) << 18) | 0xE;
    a2[11] = v14;
    v15 = v14 ^ ((unsigned int)v14 ^ HIDWORD(*(_QWORD *)(a1 + 40))) & 0x2000000 | 0x10;
    a2[11] = v15;
    v16 = v15 ^ ((unsigned int)v15 ^ (*(_QWORD *)(a1 + 40) >> 35)) & 0x4000000 | 0x80;
    a2[11] = v16;
    v13 = v16 & 0xFFFFFFF81FFFFFFFuLL | (*(_QWORD *)(a1 + 40) >> 33) & 0x20000000LL | (((v8 >> 9) & 3 | (4 * ((v8 >> 8) & 1 | (2 * (((unsigned __int16)v8 >> 2) & 3LL))))) << 30) | 0x700;
    goto LABEL_31;
  }
  memset(a2 + 8, 0, 0x40uLL);
  v7 = 0LL;
LABEL_32:
  if ( *(_DWORD *)(a1 + 64) && v7 )
  {
    *a2 = *a2 & 0xFFFFFFFFFFFFC0FFuLL | 0x100;
    v21 = v6;
    v22 = v6 + 16;
    v23 = (char *)v7 + v21;
    *(_DWORD *)v23 = 524289;
    *((_DWORD *)v23 + 1) = 384;
    *((_QWORD *)v23 + 1) = 0LL;
    memmove(&v23[v22], (const void *)(a1 + 72), 8LL * *(unsigned int *)(a1 + 64));
    v6 = v22 + 8 * *(_DWORD *)(a1 + 64);
  }
  *a3 = v6;
  return 0LL;
}
