/*
 * XREFs of sub_1403E3A4C @ 0x1403E3A4C
 * Callers:
 *     _wcstoi64 @ 0x1403E3A1C (_wcstoi64.c)
 *     sub_140843D74 @ 0x140843D74 (sub_140843D74.c)
 *     RtlUnicodeStringToInt64 @ 0x1409BA570 (RtlUnicodeStringToInt64.c)
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 *     sub_1409D23E8 @ 0x1409D23E8 (sub_1409D23E8.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _iswctype_l @ 0x1403E3CB0 (_iswctype_l.c)
 *     sub_1403E5624 @ 0x1403E5624 (sub_1403E5624.c)
 */

unsigned __int64 __fastcall sub_1403E3A4C(__int64 a1, wint_t *a2, wint_t **a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // r14d
  wint_t v9; // bp
  wint_t *v10; // rbx
  unsigned __int64 v11; // rsi
  wint_t i; // cx
  int v13; // edi
  unsigned __int64 v14; // r13
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 v17; // rdx
  wint_t *v18; // rbx
  unsigned __int64 result; // rax

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    _misaligned_access();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  v11 = 0LL;
  for ( i = *a2; iswctype_l(i, 8u, 0LL); v9 = i )
  {
    do
      i = *v10++;
    while ( i == v9 );
  }
  v13 = a5;
  if ( v9 == 45 )
  {
    v13 = a5 | 2;
LABEL_13:
    v9 = *v10++;
    goto LABEL_14;
  }
  if ( v9 == 43 )
    goto LABEL_13;
LABEL_14:
  if ( v6 && v6 - 2 > 0x22 )
  {
    if ( a3 )
      *a3 = a2;
    return 0LL;
  }
  if ( v6 )
  {
    if ( v6 != 16 )
      goto LABEL_28;
    goto LABEL_25;
  }
  if ( !(unsigned int)sub_1403E5624(v9) )
  {
    if ( ((*v10 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_28;
    }
    v6 = 16;
LABEL_25:
    if ( !(unsigned int)sub_1403E5624(v9) && ((*v10 - 88) & 0xFFDF) == 0 )
    {
      v9 = v10[1];
      v10 += 2;
    }
    goto LABEL_28;
  }
  v6 = 10;
LABEL_28:
  v14 = 0xFFFFFFFFFFFFFFFFuLL / v6;
  while ( 1 )
  {
    v15 = sub_1403E5624(v9);
    if ( v15 != -1 )
      goto LABEL_35;
    if ( (unsigned __int16)(v9 - 65) > 0x19u && (unsigned __int16)(v9 - 97) > 0x19u )
      break;
    v16 = v9 - 32;
    if ( (unsigned __int16)(v9 - 97) > 0x19u )
      v16 = v9;
    v15 = v16 - 55;
LABEL_35:
    if ( v15 >= v6 )
      break;
    v13 |= 8u;
    if ( v11 < v14 )
    {
      v17 = v15;
LABEL_45:
      v11 = v17 + v6 * v11;
      goto LABEL_46;
    }
    if ( v11 == v14 )
    {
      v17 = v15;
      if ( v15 <= 0xFFFFFFFFFFFFFFFFuLL % v6 )
        goto LABEL_45;
    }
    v13 |= 4u;
    if ( !a3 )
      break;
LABEL_46:
    v9 = *v10++;
  }
  v18 = v10 - 1;
  if ( (v13 & 8) != 0 )
  {
    if ( (v13 & 4) == 0 )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_58;
      if ( (v13 & 2) != 0 )
      {
        if ( v11 <= 0x8000000000000000uLL )
          goto LABEL_58;
      }
      else if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_58;
      }
    }
    if ( a6 )
      *a6 = 34;
    if ( (v13 & 1) != 0 )
      v11 = -1LL;
    else
      v11 = ((v13 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( a3 )
      v18 = a2;
    v11 = 0LL;
  }
LABEL_58:
  if ( a3 )
    *a3 = v18;
  result = -(__int64)v11;
  if ( (v13 & 2) == 0 )
    return v11;
  return result;
}
