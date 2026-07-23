/*
 * XREFs of sub_140308F00 @ 0x140308F00
 * Callers:
 *     sub_14021538C @ 0x14021538C (sub_14021538C.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 *     sub_140970AB4 @ 0x140970AB4 (sub_140970AB4.c)
 *     sub_140976140 @ 0x140976140 (sub_140976140.c)
 * Callees:
 *     sub_1402157EC @ 0x1402157EC (sub_1402157EC.c)
 *     sub_140215D78 @ 0x140215D78 (sub_140215D78.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_14023261C @ 0x14023261C (sub_14023261C.c)
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 *     sub_14024FFE4 @ 0x14024FFE4 (sub_14024FFE4.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1403D240C @ 0x1403D240C (sub_1403D240C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 */

__int64 __fastcall sub_140308F00(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  signed int v10; // ebp
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r9
  __int64 v21; // rbx
  unsigned __int64 v22; // r12
  char v23; // r8
  unsigned __int64 v24; // rax
  bool v25; // sf
  __int64 v26; // rbp
  unsigned __int64 v27; // r14
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int8 v33; // cl
  unsigned __int64 v34; // rax
  char v36; // cl
  int v37; // eax
  __int64 v38; // r10
  int v39; // ebx
  __int64 v40; // r8
  int v41; // eax
  unsigned __int64 v42; // r8
  unsigned __int64 *v43; // rdx
  unsigned __int64 v44; // rcx
  int v45; // eax
  int v46; // [rsp+30h] [rbp-78h]
  int v47; // [rsp+34h] [rbp-74h] BYREF
  int v48; // [rsp+38h] [rbp-70h]
  __int64 v49; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+48h] [rbp-60h] BYREF
  __int64 v51; // [rsp+50h] [rbp-58h]
  __int64 v52; // [rsp+58h] [rbp-50h]
  unsigned int v53; // [rsp+B0h] [rbp+8h]
  int v55; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v56; // [rsp+C8h] [rbp+20h]

  v56 = a4;
  v6 = a2;
  v53 = 1;
  v46 = 0;
  v52 = 0LL;
  v8 = a1;
  *a6 = 0;
  v9 = 0LL;
  v50 = 0LL;
  if ( a4 )
  {
    if ( a4 == 31 )
    {
      v53 = 1;
    }
    else if ( a4 >> 3 == 3 )
    {
      if ( (a4 & 7) != 0 )
        v53 = 2;
    }
    else
    {
      v53 = a4 >> 3 != 1;
    }
  }
  else
  {
    v53 = 3;
  }
  v10 = a4 | 0xA0000000;
  v11 = a4 & 0x1F;
  v12 = qword_140016200[v11] & 0xFFF0000000000E5EuLL | 0x21;
  v13 = 0xFFFFF6FFFFFFFFFFuLL;
  v14 = 0xFFFF800000000000uLL;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_108;
  v15 = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v12 = qword_140016200[v11] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
    }
    else if ( (v10 & 0x4000000) == 0 )
    {
      v12 = qword_140016200[v11] & 0x7FF0000000000E5ELL | 0x21;
    }
    v45 = sub_14023261C(a1);
    v6 = a2;
    v14 = 0xFFFF800000000000uLL;
    v13 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v45 )
      v12 |= 4uLL;
  }
  if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
    v12 |= 4uLL;
  if ( (v10 & 0x4000000) != 0 )
    v15 = sub_1402CFEB0(v15);
  if ( v15 < v14 )
  {
    v16 = HIBYTE(word_140C51864);
  }
  else
  {
    if ( byte_140C53F50[((v15 >> 39) & 0x1FF) - 256] == 1 || v15 >= 0xFFFFF68000000000uLL && v15 <= v13 )
      goto LABEL_18;
    v16 = v15 < qword_140C540C0 || v15 > qword_140C51BF0 ? (unsigned __int8)word_140C51864 : HIBYTE(word_140C51864);
  }
  if ( v16 )
LABEL_108:
    v12 |= 0x100uLL;
LABEL_18:
  v17 = v12 | 0x42;
  if ( v10 >= 0 || (v11 & 5) != 4 )
    v17 = v12;
  if ( (v10 & 0x40000000) != 0 )
    v17 &= ~4uLL;
  v18 = ((unsigned __int16)v17 ^ (unsigned __int16)((unsigned __int8)word_140C51864 << 8)) & 0x100 ^ (unsigned __int64)v17;
  if ( (v10 & 0x8000000) != 0 )
    v18 &= ~0x100uLL;
  if ( (v10 & 0x4000000) != 0 )
    v18 |= 0x80uLL;
  v51 = 0LL;
  v19 = v18 & 0xFAFFFFFFFFFFFFFFuLL;
  v49 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = v6;
  if ( !v6 )
    return 0LL;
  v23 = a5;
  v24 = a3 - 1;
  v25 = a3 < 0;
  v26 = a3 - 8;
  LOBYTE(a3) = v56;
  v27 = 0LL;
  if ( !v25 )
  {
    v27 = v24;
    v26 = 0LL;
  }
  v28 = a5 & 2;
  v48 = v28;
  while ( 1 )
  {
    if ( v26 )
      v27 = *(_QWORD *)(v26 + 8);
    else
      ++v27;
    v29 = v26 + 8;
    if ( !v26 )
      v29 = 0LL;
    v26 = v29;
    if ( !v28 || v27 != qword_140C53288 )
      break;
LABEL_47:
    v8 += 8LL;
    if ( !--v22 )
      return 0LL;
    v28 = v48;
    v23 = a5;
    v20 = v51;
    v13 = 0xFFFFF6FFFFFFFFFFuLL;
  }
  if ( v27 > qword_140C50840 || ((*(_QWORD *)(48 * v27 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
  {
    if ( v20 || (v51 = sub_140215D78(v27, v29, v22), (v20 = v51) != 0) )
    {
      if ( v20 > 1 )
      {
        v41 = *(_DWORD *)(v20 + 40);
LABEL_75:
        LODWORD(a3) = a3 & 7;
        if ( v41 )
        {
          if ( v41 == 2 )
            LODWORD(a3) = a3 | 0x18;
        }
        else
        {
          LODWORD(a3) = a3 | 8;
        }
        if ( v46 && v46 == (_DWORD)a3 )
        {
          v46 = a3;
          v34 = v9 ^ (v9 ^ (v27 << 12)) & 0xFFFFFFFFFF000LL;
          v9 = v34;
        }
        else
        {
          v34 = sub_1402CBD10(v8, v27, (unsigned int)a3 | 0xA0000000);
          v9 = v34;
          v46 = a3;
        }
        goto LABEL_46;
      }
    }
    else
    {
      v51 = 1LL;
    }
    if ( v21 )
    {
      v40 = v52;
    }
    else
    {
      if ( v26 )
      {
        v38 = 1LL;
        v49 = 1LL;
        if ( v22 > 1 )
        {
          v42 = v22 - 1;
          v43 = (unsigned __int64 *)(v26 + 8);
          do
          {
            v44 = *v43;
            if ( *v43 != *(v43 - 1) + 1
              || (v44 & 0x1FF) == 0
              || v44 <= qword_140C50840 && (*(_QWORD *)(48 * v44 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            {
              break;
            }
            ++v38;
            ++v43;
            v49 = v38;
            --v42;
          }
          while ( v42 );
        }
      }
      else
      {
        v38 = sub_14024FFE4(v27, v22);
        v49 = v38;
      }
      v39 = sub_140215E54(1, v27, v38, v53, 0LL, &v50);
      if ( v39 < 0 )
        goto LABEL_122;
      v40 = v50;
      v21 = v49;
      *a6 |= 1u;
    }
    v49 = --v21;
    LOWORD(v56) = *(_WORD *)(v40
                           + 2
                           * ((v27 & ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1)) - *(_QWORD *)(v40 + 24))
                           + 80);
    v41 = (unsigned __int16)v56 >> 14;
    v52 = v50;
    goto LABEL_75;
  }
  v30 = 48 * v27 - 0x220000000000LL;
  if ( (v23 & 1) != 0 && ((*(_BYTE *)(v30 + 34) & 7) != 5 || !_bittest64((const signed __int64 *)(v30 + 40), 0x35u)) )
    KeBugCheckEx(0x1Au, 0x1160CuLL, v27, 0LL, 0LL);
  if ( !*(_WORD *)(v30 + 32)
    && ((v23 & 1) == 0 || (*(_BYTE *)(v30 + 34) & 7) != 5 || !_bittest64((const signed __int64 *)(v30 + 40), 0x35u)) )
  {
    sub_140593B18(v27, 1uLL);
    v13 = 0xFFFFF6FFFFFFFFFFuLL;
  }
  v31 = *(_QWORD *)(v30 + 40);
  if ( v31 < 0 )
    goto LABEL_42;
  if ( (v31 & 0x10000000000LL) == 0 )
  {
    v32 = (__int64)(*(_QWORD *)(v30 + 8) << 25) >> 16;
    if ( v32 >= 0xFFFFF68000000000uLL && v32 <= v13 && (v31 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
    {
      v36 = *(_BYTE *)(v30 + 34);
      if ( ((v36 & 0x20) == 0 || (*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v30 + 32))
        && (v36 & 8) == 0
        && ((*(_QWORD *)v30 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
      {
        v39 = -1073741800;
        goto LABEL_122;
      }
    }
    goto LABEL_42;
  }
  v55 = 0;
  v47 = 0;
  if ( (unsigned int)sub_140235D34(48 * v27 - 0x220000000000LL, &v55, &v47) != 3 && v55 == 6 )
  {
LABEL_42:
    v33 = *(_BYTE *)(v30 + 34);
    if ( (v33 & 0xC0) == 0xC0 )
    {
      sub_1403D240C(48 * v27 - 0x220000000000LL, v53);
      v33 = *(_BYTE *)(v30 + 34);
    }
    if ( v53 == v33 >> 6 )
    {
      v21 = v49;
      v34 = v19 | ((v27 & 0xFFFFFFFFFFLL | 0xA00000000000LL) << 12);
    }
    else
    {
      v37 = sub_14026C61C(a3, 48 * v27 - 0x220000000000LL);
      LOBYTE(a3) = v37;
      v34 = sub_1402CBD10(v8, v27, v37 | 0xA0000000);
      v21 = v49;
    }
LABEL_46:
    *(_QWORD *)v8 = v34;
    goto LABEL_47;
  }
  v39 = -1073741800;
LABEL_122:
  if ( (*a6 & 1) != 0 )
    sub_1402157EC((__int64)((v8 << 25) + ((v22 - a2) << 28)) >> 16, a2 - v22, 1);
  return (unsigned int)v39;
}
