/*
 * XREFs of sub_140324C60 @ 0x140324C60
 * Callers:
 *     sub_1402652C4 @ 0x1402652C4 (sub_1402652C4.c)
 * Callees:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140324C60(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  __int64 v8; // r14
  char v9; // r11
  signed __int32 v10; // eax
  unsigned int v11; // r15d
  unsigned int v12; // esi
  int v13; // edi
  __int64 v14; // r10
  unsigned __int64 *v15; // r13
  int v16; // ebx
  unsigned int v17; // r12d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // ecx
  __int64 v23; // rdx
  ULONG_PTR v24; // rsi
  int v25; // ecx
  char *v26; // r9
  int v27; // ecx
  char *v28; // r9
  unsigned __int64 v29; // r12
  int v30; // ecx
  char *v31; // r9
  int v32; // ebx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // eax
  int v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  unsigned int v41; // edx
  int v43; // eax
  unsigned __int64 v44; // [rsp+38h] [rbp-60h]
  __int64 v45; // [rsp+40h] [rbp-58h]
  __int64 v46; // [rsp+48h] [rbp-50h]
  __int128 v47; // [rsp+50h] [rbp-48h] BYREF
  int v52; // [rsp+D0h] [rbp+38h]

  v8 = a1;
  v44 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  sub_140339C20(0LL, (unsigned int)(a7 + 1), &v47);
  v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v47, 1u);
  v11 = 8;
  v12 = HIDWORD(v47) | v10 & DWORD2(v47);
  v13 = -1;
  v15 = (unsigned __int64 *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6));
  v16 = 1;
  v46 = qword_140D088C0[*(unsigned int *)(v14 + 588)];
  v52 = 1;
  while ( 2 )
  {
    if ( v16 )
    {
      v52 = 0;
      v11 = 2 * ((v9 & 1) == 0) + 8;
    }
    v17 = v11;
    v18 = sub_1403250B0(v8, v12, v11);
    v19 = v18;
    if ( v18 == -1LL )
    {
      v29 = v44;
      break;
    }
    v20 = 48 * v18;
    v21 = 48 * v18 - 0x220000000000LL;
    if ( v18 > a5 )
    {
      sub_140268408(v20 - 0x220000000000LL);
      v29 = v44;
      v41 = 0;
      goto LABEL_57;
    }
    if ( (*(_DWORD *)(v21 + 16) & 0x3E0LL) != 0
      || (v22 = *(unsigned __int8 *)(v21 + 34) >> 6, v22 != a4)
      && ((unsigned __int8)((1 << v22) | (1 << a4)) & (unsigned __int8)byte_140C50818) != 0 )
    {
      ++v45;
    }
    v23 = (unsigned __int128)(v20 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v24 = ((unsigned __int64)v23 >> 63) + (v23 >> 3);
    if ( v13 == -1 )
      v13 = *((_DWORD *)sub_1402C1550(((unsigned __int64)v23 >> 63) + (v23 >> 3)) + 2);
    v25 = dword_140C506C8;
    if ( dword_140C506C4 > (unsigned int)dword_140C506C8
      || (v26 = (char *)qword_140C50708 + 16 * dword_140C506C4, v24 < *(_QWORD *)v26)
      || dword_140C506C4 != dword_140C506C8 && v24 >= *((_QWORD *)v26 + 2) )
    {
      v37 = 0;
      if ( dword_140C506C8 >= 0 )
      {
        do
        {
          v38 = (v37 + v25) >> 1;
          v26 = (char *)qword_140C50708 + 16 * v38;
          if ( v24 < *(_QWORD *)v26 )
          {
            if ( !v38 )
              KeBugCheckEx(0x1Au, 0x6200uLL, v24, (ULONG_PTR)v26, 0LL);
            v25 = v38 - 1;
          }
          else
          {
            if ( v38 == dword_140C506C8 || v24 < *((_QWORD *)v26 + 2) )
            {
              dword_140C506C4 = (v37 + v25) >> 1;
              goto LABEL_14;
            }
            v37 = v38 + 1;
          }
        }
        while ( v25 >= v37 );
      }
LABEL_75:
      KeBugCheckEx(0x1Au, 0x6201uLL, v24, 0LL, 0LL);
    }
LABEL_14:
    v9 = a3;
    if ( *((_DWORD *)v26 + 2) == v13 )
    {
      if ( (*(_DWORD *)(v21 + 16) & 0x3E0LL) != 0 )
      {
        if ( (a3 & 1) == 0 )
          v11 &= ~2u;
      }
      else
      {
        v11 |= 2u;
        if ( (a3 & 1) == 0 )
          v11 = v17;
      }
    }
    else
    {
      v52 = 1;
    }
    v27 = dword_140C506C8;
    if ( dword_140C506C4 > (unsigned int)dword_140C506C8
      || (v28 = (char *)qword_140C50708 + 16 * dword_140C506C4, v24 < *(_QWORD *)v28)
      || dword_140C506C4 != dword_140C506C8 && v24 >= *((_QWORD *)v28 + 2) )
    {
      v39 = 0;
      if ( dword_140C506C8 >= 0 )
      {
        while ( 1 )
        {
          v40 = (v39 + v27) >> 1;
          v28 = (char *)qword_140C50708 + 16 * v40;
          if ( v24 < *(_QWORD *)v28 )
          {
            if ( !v40 )
              KeBugCheckEx(0x1Au, 0x6200uLL, v24, (ULONG_PTR)v28, 0LL);
            v27 = v40 - 1;
          }
          else
          {
            if ( v40 == dword_140C506C8 || v24 < *((_QWORD *)v28 + 2) )
            {
              dword_140C506C4 = (v39 + v27) >> 1;
              goto LABEL_22;
            }
            v39 = v40 + 1;
          }
          if ( v27 < v39 )
            goto LABEL_75;
        }
      }
      goto LABEL_75;
    }
LABEL_22:
    v13 = *((_DWORD *)v28 + 2);
    v29 = v44 + 1;
    *v15++ = v19;
    v30 = dword_140C506C8;
    ++v44;
    if ( dword_140C506C4 <= (unsigned int)dword_140C506C8 )
    {
      v31 = (char *)qword_140C50708 + 16 * dword_140C506C4;
      if ( v24 >= *(_QWORD *)v31 && (dword_140C506C4 == dword_140C506C8 || v24 < *((_QWORD *)v31 + 2)) )
        goto LABEL_26;
    }
    v35 = 0;
    if ( dword_140C506C8 < 0 )
      goto LABEL_75;
    while ( 1 )
    {
      v36 = (v35 + v30) >> 1;
      v31 = (char *)qword_140C50708 + 16 * v36;
      if ( v24 < *(_QWORD *)v31 )
      {
        if ( !v36 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v24, (ULONG_PTR)v31, 0LL);
        v30 = v36 - 1;
        goto LABEL_37;
      }
      if ( v36 == dword_140C506C8 || v24 < *((_QWORD *)v31 + 2) )
        break;
      v35 = v36 + 1;
LABEL_37:
      if ( v30 < v35 )
        goto LABEL_75;
    }
    dword_140C506C4 = (v35 + v30) >> 1;
LABEL_26:
    v32 = *((_DWORD *)v31 + 2);
    if ( qword_140C50710 )
    {
      v43 = sub_1403B76EC(v24);
      v9 = a3;
      v33 = v43;
    }
    else
    {
      v33 = 0;
    }
    v34 = dword_140C50738 & v19 | (v32 << byte_140C506CC) | (v33 << byte_140C506CD);
    v12 = v34 & ~dword_140C506C0 | dword_140C506C0 & (v34 + 1);
    if ( v29 < a6 )
    {
      v16 = v52;
      v8 = a1;
      continue;
    }
    break;
  }
  v41 = 1;
LABEL_57:
  if ( v29 )
    *(_DWORD *)(v46 + 33360) = v12;
  *(_DWORD *)(a2 + 40) += (_DWORD)v29 << 12;
  if ( v45 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return v41;
}
