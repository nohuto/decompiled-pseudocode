/*
 * XREFs of sub_1403365F0 @ 0x1403365F0
 * Callers:
 *     sub_140276C78 @ 0x140276C78 (sub_140276C78.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 * Callees:
 *     sub_1403385E0 @ 0x1403385E0 (sub_1403385E0.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403365F0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  char v9; // cl
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  char v13; // r9
  int v14; // edx
  int v15; // r15d
  ULONG_PTR v16; // r8
  char *v17; // rax
  int v18; // r9d
  int v19; // eax
  ULONG_PTR v20; // rsi
  char *v21; // rcx
  int v22; // r12d
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r8
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  unsigned __int64 v29; // r10
  signed __int64 v30; // r8
  signed __int64 v31; // rax
  __int64 result; // rax
  int v33; // r10d
  int v34; // edx
  int v35; // r9d
  int v36; // ecx
  signed __int64 v37; // rdx
  signed __int64 v38; // r8
  signed __int64 v39; // rcx
  signed __int64 v40; // rcx
  signed __int64 v41; // [rsp+58h] [rbp-61h]
  signed __int64 v42; // [rsp+58h] [rbp-61h]
  signed __int64 v43; // [rsp+88h] [rbp-31h]
  signed __int64 v44; // [rsp+88h] [rbp-31h]

  v2 = 48 * a2;
  v5 = 48 * a2 - 0x220000000000LL;
  if ( (*(_DWORD *)(a1 + 96) & 0xFFFFFFFD) == 0 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    if ( (v6 & 0x400) != 0 )
      v7 = v6 & 0xFFFFFFFFFFFFF7FFuLL;
    else
      v7 = v6 & 0xFFFFFFFFFFFFFFF7uLL;
    *(_QWORD *)(v5 + 16) = v7;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_25;
  v8 = 48LL * *(_QWORD *)(a1 + 16);
  v9 = *(_BYTE *)(v5 + 35);
  v10 = v8 - 0x220000000000LL;
  v11 = 5;
  if ( (v9 & 8) != 0 )
    v12 = 5;
  else
    v12 = v9 & 7;
  v13 = *(_BYTE *)(v10 + 35);
  if ( (v13 & 8) == 0 )
    v11 = v13 & 7;
  if ( v12 != v11
    || ((*(_BYTE *)(v5 + 34) ^ *(_BYTE *)(v10 + 34)) & 0x10) != 0
    || ((*(_DWORD *)(v5 + 16) ^ *(_DWORD *)(v10 + 16)) & 0x400LL) != 0
    || *(__int64 *)(v5 + 40) < 0 != *(__int64 *)(v10 + 40) < 0 )
  {
LABEL_47:
    sub_140338660(a1, 1LL);
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a1 + 8) != 2 )
    goto LABEL_25;
  v14 = dword_140C506C8;
  v15 = 0;
  v16 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
  if ( dword_140C506C4 > (unsigned int)dword_140C506C8
    || (v17 = (char *)qword_140C50708 + 16 * dword_140C506C4, v16 < *(_QWORD *)v17)
    || dword_140C506C4 != dword_140C506C8 && v16 >= *((_QWORD *)v17 + 2) )
  {
    v35 = 0;
    if ( dword_140C506C8 < 0 )
LABEL_55:
      KeBugCheckEx(0x1Au, 0x6201uLL, v16, 0LL, 0LL);
    while ( 1 )
    {
      v36 = (v35 + v14) >> 1;
      v17 = (char *)qword_140C50708 + 16 * v36;
      if ( v16 < *(_QWORD *)v17 )
      {
        if ( !v36 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v16, (ULONG_PTR)qword_140C50708, 0LL);
        v14 = v36 - 1;
      }
      else
      {
        if ( v36 == dword_140C506C8 || v16 < *((_QWORD *)v17 + 2) )
        {
          dword_140C506C4 = (v35 + v14) >> 1;
          break;
        }
        v35 = v36 + 1;
      }
      if ( v14 < v35 )
        goto LABEL_55;
    }
  }
  v18 = dword_140C506C8;
  v19 = *((_DWORD *)v17 + 2);
  v20 = 0xAAAAAAAAAAAAAAABuLL * (v8 >> 4);
  if ( dword_140C506C4 <= (unsigned int)dword_140C506C8 )
  {
    v21 = (char *)qword_140C50708 + 16 * dword_140C506C4;
    if ( v20 >= *(_QWORD *)v21 && (dword_140C506C4 == dword_140C506C8 || v20 < *((_QWORD *)v21 + 2)) )
      goto LABEL_21;
  }
  v33 = 0;
  if ( dword_140C506C8 < 0 )
LABEL_60:
    KeBugCheckEx(0x1Au, 0x6201uLL, v20, 0LL, 0LL);
  while ( 1 )
  {
    v34 = (v33 + v18) >> 1;
    v21 = (char *)qword_140C50708 + 16 * v34;
    if ( v20 < *(_QWORD *)v21 )
    {
      if ( !v34 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v20, (ULONG_PTR)qword_140C50708, 0LL);
      v18 = v34 - 1;
      goto LABEL_59;
    }
    if ( v34 == dword_140C506C8 || v20 < *((_QWORD *)v21 + 2) )
      break;
    v33 = v34 + 1;
LABEL_59:
    if ( v18 < v33 )
      goto LABEL_60;
  }
  dword_140C506C4 = (v33 + v18) >> 1;
LABEL_21:
  if ( v19 != *((_DWORD *)v21 + 2) )
    goto LABEL_47;
  if ( qword_140C50710 )
  {
    v22 = sub_1403B76EC(v16);
    if ( qword_140C50710 )
      v15 = sub_1403B76EC(v20);
  }
  else
  {
    v22 = 0;
  }
  if ( v22 != v15 )
    goto LABEL_47;
LABEL_25:
  if ( *(_QWORD *)(a1 + 16) == 0x3FFFFFFFFFLL )
  {
    *(_DWORD *)(a1 + 8) = (*(_BYTE *)(v5 + 34) & 0x10 | 0x20u) >> 4;
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a2;
    *(_QWORD *)v5 = *(_QWORD *)v5 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(v5 + 24) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    if ( *(_DWORD *)(a1 + 8) == 2 )
    {
      sub_1403385E0(v5, 0x3FFFFFFFFFLL);
      v37 = *(_QWORD *)(v5 + 24);
      v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v37 | 0x7FFFF0000000000LL, v37);
      if ( v37 != v38 )
      {
        do
        {
          v39 = v38;
          v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v38 | 0x7FFFF0000000000LL, v38);
        }
        while ( v39 != v38 );
      }
      *(_DWORD *)(v5 + 36) = *(_DWORD *)(v5 + 36) & 0xFFE00000 | 0x7FFFF;
    }
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 24);
    v24 = 48 * v23 - 0x220000000000LL;
    *(_QWORD *)v24 ^= (a2 ^ *(_QWORD *)v24) & 0xFFFFFFFFFFLL;
    *(_QWORD *)(v5 + 24) ^= (v23 ^ *(_QWORD *)(v5 + 24)) & 0xFFFFFFFFFFLL;
    *(_QWORD *)v5 = *(_QWORD *)v5 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    if ( *(_DWORD *)(a1 + 8) == 2 )
    {
      v25 = *(_DWORD *)(v24 + 36);
      *(_QWORD *)v24 = (a2 << 40) | *(_QWORD *)v24 & 0xFFFFFFFFFFLL;
      *(_DWORD *)(v24 + 36) = v25 & 0x1FFFFF | ((unsigned int)(a2 >> 24) << 21);
      v41 = *(_QWORD *)(v24 + 40);
      v26 = (a2 & 0xF800000000LL) << 20;
      v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 40), v26 | v41 & 0xF07FFFFFFFFFFFFFuLL, v41);
      if ( v41 != v27 )
      {
        do
        {
          v42 = v27;
          v27 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v24 + 40),
                  v26 | v27 & 0xF07FFFFFFFFFFFFFuLL,
                  v27);
        }
        while ( v42 != v27 );
      }
      v28 = *(_QWORD *)(v5 + 24);
      v29 = (v23 & 0x7FFFF) << 40;
      v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v29 | v28 & 0xF80000FFFFFFFFFFuLL, v28);
      if ( v28 != v30 )
      {
        do
        {
          v40 = v30;
          v30 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v5 + 24),
                  v29 | v30 & 0xF80000FFFFFFFFFFuLL,
                  v30);
        }
        while ( v40 != v30 );
      }
      *(_DWORD *)(v5 + 36) = (v23 >> 19) | 0xFFE00000;
      *(_QWORD *)v5 |= 0xFFFFFF0000000000uLL;
      v43 = *(_QWORD *)(v5 + 40);
      v31 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v5 + 40),
              v43 & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
              v43);
      if ( v43 != v31 )
      {
        do
        {
          v44 = v31;
          v31 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v5 + 40),
                  v31 & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
                  v31);
        }
        while ( v44 != v31 );
      }
    }
    *(_QWORD *)(a1 + 24) = a2;
  }
  result = *(_QWORD *)a1 + 1LL;
  *(_QWORD *)a1 = result;
  return result;
}
