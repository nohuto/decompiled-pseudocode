/*
 * XREFs of sub_1403E09CC @ 0x1403E09CC
 * Callers:
 *     sub_1403E0BE4 @ 0x1403E0BE4 (sub_1403E0BE4.c)
 *     _strtoui64 @ 0x1403E0C10 (_strtoui64.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403E50E4 @ 0x1403E50E4 (sub_1403E50E4.c)
 */

unsigned __int64 __fastcall sub_1403E09CC(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, int a4, int a5)
{
  int v5; // r14d
  __int64 v7; // rbp
  unsigned __int8 *v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // esi
  unsigned __int64 v12; // r12
  unsigned int v13; // ecx
  int v14; // ecx
  __int64 v15; // rdx
  unsigned __int8 *v16; // rbx

  v5 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    _misaligned_access();
    return 0LL;
  }
  v7 = *a2;
  v8 = a2 + 1;
  v9 = 0LL;
  if ( (*(_BYTE *)(sub_1403E50E4() + 2 * v7) & 8) != 0 )
  {
    do
    {
      do
        v10 = *v8++;
      while ( (_BYTE)v10 == (_BYTE)v7 );
      LOBYTE(v7) = v10;
    }
    while ( (*(_BYTE *)(sub_1403E50E4() + 2 * v10) & 8) != 0 );
  }
  v11 = a5;
  if ( (_BYTE)v7 == 45 )
  {
    v11 = a5 | 2;
  }
  else if ( (_BYTE)v7 != 43 )
  {
    goto LABEL_13;
  }
  LOBYTE(v7) = *v8++;
LABEL_13:
  if ( v5 )
  {
    if ( v5 != 16 || (_BYTE)v7 != 48 )
      goto LABEL_23;
    goto LABEL_21;
  }
  if ( (_BYTE)v7 == 48 )
  {
    if ( ((*v8 - 88) & 0xDF) != 0 )
    {
      v5 = 8;
      goto LABEL_23;
    }
    v5 = 16;
LABEL_21:
    if ( ((*v8 - 88) & 0xDF) == 0 )
    {
      LOBYTE(v7) = v8[1];
      v8 += 2;
    }
    goto LABEL_23;
  }
  v5 = 10;
LABEL_23:
  v12 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (*(_BYTE *)(sub_1403E50E4() + 2LL * (unsigned __int8)v7) & 4) != 0 )
    {
      v13 = (char)v7 - 48;
    }
    else
    {
      if ( (*(_WORD *)(sub_1403E50E4() + 2LL * (unsigned __int8)v7) & 0x103) == 0 )
        break;
      v14 = (char)v7 - 32;
      if ( (unsigned __int8)(v7 - 97) > 0x19u )
        v14 = (char)v7;
      v13 = v14 - 55;
    }
    if ( v13 >= v5 )
      break;
    v11 |= 8u;
    if ( v9 < v12 )
    {
      v15 = v13;
LABEL_40:
      v9 = v15 + v5 * v9;
      goto LABEL_41;
    }
    if ( v9 == v12 )
    {
      v15 = v13;
      if ( v13 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
        goto LABEL_40;
    }
    v11 |= 4u;
    if ( !a3 )
      break;
LABEL_41:
    LOBYTE(v7) = *v8++;
  }
  v16 = v8 - 1;
  if ( (v11 & 8) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
      if ( (v11 & 1) != 0 )
        goto LABEL_53;
      if ( (v11 & 2) != 0 )
      {
        if ( v9 <= 0x8000000000000000uLL )
          goto LABEL_53;
LABEL_51:
        v9 = 0x8000000000000000uLL;
        goto LABEL_53;
      }
      if ( v9 <= 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_53;
    }
    if ( (v11 & 1) != 0 )
    {
      v9 = -1LL;
      goto LABEL_53;
    }
    if ( (v11 & 2) == 0 )
    {
      v9 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_53;
    }
    goto LABEL_51;
  }
  if ( a3 )
    v16 = a2;
  v9 = 0LL;
LABEL_53:
  if ( a3 )
    *a3 = v16;
  if ( (v11 & 2) != 0 )
    return -(__int64)v9;
  return v9;
}
