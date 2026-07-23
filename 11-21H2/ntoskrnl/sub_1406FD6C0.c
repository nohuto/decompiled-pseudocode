/*
 * XREFs of sub_1406FD6C0 @ 0x1406FD6C0
 * Callers:
 *     sub_1406FD4A0 @ 0x1406FD4A0 (sub_1406FD4A0.c)
 * Callees:
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 */

__int64 __fastcall sub_1406FD6C0(
        int *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        unsigned __int8 a8,
        __int64 a9,
        __int64 a10,
        unsigned __int8 a11,
        int a12,
        _BYTE *a13)
{
  unsigned int v13; // edi
  unsigned int v15; // ecx
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 result; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  unsigned int v24; // edi
  char v25; // al
  int v26; // eax
  ULONG_PTR **v27; // [rsp+30h] [rbp-18h] BYREF

  v13 = a5;
  if ( (a5 & 0x7F) != 0 )
    return 3221225485LL;
  *((_QWORD *)a1 + 19) = a3;
  *((_QWORD *)a1 + 20) = a7;
  a1[42] = a12;
  a1[5] = a5;
  *((_QWORD *)a1 + 1) = a2;
  a1[7] = a4;
  *((_BYTE *)a1 + 72) = a11;
  *((_BYTE *)a1 + 24) = a8;
  if ( (a6 & 1) != 0 )
    *a1 |= 0x800u;
  if ( (a6 & 2) != 0 )
  {
    v20 = *a1;
    *a1 |= 1u;
    if ( (a6 & 4) != 0 )
    {
      if ( (v20 & 0x8000000) != 0 )
        return 3221227793LL;
      *a1 = v20 | 0x10001;
    }
  }
  if ( (a6 & 0x10) != 0 )
  {
    if ( a11 )
      return 3221225485LL;
    if ( (a5 & 0x2100000) != 0 )
      return 3221225485LL;
    if ( (a5 & 0x11000000) == 0x11000000 )
      return 3221225485LL;
    if ( (a5 & 0x1000000) == 0 )
      return 3221225485LL;
    if ( a8 > 0xEu )
      return 3221225485LL;
    v26 = 20944;
    if ( !_bittest(&v26, a8) )
      return 3221225485LL;
    *a1 |= 0x10000000u;
  }
  a1[35] ^= ((unsigned __int16)a4 ^ (unsigned __int16)a1[35]) & 0xFFF;
  *((_QWORD *)a1 + 6) = a10;
  *((_QWORD *)a1 + 5) = a9;
  if ( (a5 & 0x1100000) == 0x1100000 )
  {
    *a1 |= 0x200u;
    v13 = a5 & 0xFFEFFFFF;
  }
  if ( (v13 & 0x100000) == 0 )
  {
    if ( (v13 & 0x2000000) == 0 )
      goto LABEL_10;
    *a1 |= 0x10u;
    if ( (v13 & 0x400000) != 0 )
    {
      v13 &= ~0x400000u;
      v25 = 12;
    }
    else
    {
      v25 = 4;
    }
    v24 = v13 & 0xFDFFFFFF;
    goto LABEL_48;
  }
  v22 = *a1;
  if ( (v13 & 0x200000) != 0 )
  {
    v13 &= ~0x200000u;
    v22 |= 0x40u;
  }
  v23 = v22 | 0x20;
  v24 = v13 & 0xFFEFFFFF;
  *a1 = v23;
  if ( (v24 & 0x400000) == 0 )
  {
    v25 = 1;
LABEL_48:
    v13 = v24 | 0x1000000;
    *((_BYTE *)a1 + 24) = v25;
    goto LABEL_10;
  }
  *a1 = v23 | 0x100;
  v13 = v24 & 0xFEBFFFFF | 0x1000000;
  *((_BYTE *)a1 + 24) = 12;
LABEL_10:
  v27 = 0LL;
  if ( (v13 & 0x40000) == 0 )
    goto LABEL_11;
  if ( !a9 || a10 )
    return 3221225485LL;
  result = sub_1407DE8D0(a9, 2LL, a11, 1883458893LL, &v27);
  if ( (int)result >= 0 )
  {
    if ( *v27 == &StartContext )
      sub_1403606C4((__int64)v27);
    else
      *((_QWORD *)a1 + 22) = v27;
    *((_QWORD *)a1 + 5) = 0LL;
    v13 &= ~0x40000u;
LABEL_11:
    if ( (v13 & 0x1000000) != 0 )
    {
      if ( (a6 & 8) != 0 )
        *a1 |= 0x100000u;
      if ( (*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 992LL) & 1) != 0 )
        *a1 |= 0x900000u;
      if ( (v13 & 0x11000000) == 0x11000000 )
      {
        if ( a1[7] != 2 )
          return 3221225541LL;
        v13 &= ~0x10000000u;
      }
      else
      {
        *a1 |= 0x400u;
        v21 = *a1;
        if ( (*a1 & 0x20) != 0 && (dword_140D06880 & 0x8000) != 0 )
        {
          *a1 = v21 | 0x100000;
        }
        else if ( (v21 & 0x60) == 0x60 && (dword_140D06880 & 0x4000) != 0 )
        {
          *a1 = v21 | 0x100000;
        }
        else if ( (dword_140D06880 & 0x80000) != 0 )
        {
          *a1 = v21 | 0x100000;
        }
      }
    }
    else if ( (v13 & 0x10000000) != 0 )
    {
      a1[7] |= 0x200u;
    }
    else if ( (v13 & 0x40000000) != 0 )
    {
      a1[7] |= 0x400u;
    }
    if ( (v13 & 0x20000) != 0 )
    {
      if ( !_bittest64(&qword_140D068D8, 0x25u) )
        return 3221225659LL;
      if ( !a13 || !*a13 )
        return 3221225485LL;
    }
    v15 = a1[7];
    a1[4] = v13;
    v16 = sub_14032BCC0(v15);
    a1[8] = v16;
    if ( v16 != -1 )
    {
      if ( !v17 )
        return 0LL;
      *((_BYTE *)a1 + 192) = *(_BYTE *)v17;
      a1[49] = *(_DWORD *)(v17 + 4);
      v18 = *(_DWORD *)(v17 + 8);
      if ( v18 <= (unsigned __int16)word_140D05000 )
      {
        a1[43] = v18;
        if ( (*(_DWORD *)(v17 + 20) & 1) != 0 )
          *a1 |= 0x8000000u;
        return 0LL;
      }
      return 3221225485LL;
    }
    return 3221225541LL;
  }
  return result;
}
