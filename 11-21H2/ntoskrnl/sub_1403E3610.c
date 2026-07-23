/*
 * XREFs of sub_1403E3610 @ 0x1403E3610
 * Callers:
 *     sub_1403E3820 @ 0x1403E3820 (sub_1403E3820.c)
 *     sub_1403E3850 @ 0x1403E3850 (sub_1403E3850.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _iswctype_l @ 0x1403E3CB0 (_iswctype_l.c)
 *     sub_1403E5624 @ 0x1403E5624 (sub_1403E5624.c)
 */

__int64 __fastcall sub_1403E3610(__int64 a1, wint_t *a2, wint_t **a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r14d
  wint_t v8; // bp
  wint_t *v9; // rbx
  unsigned int v10; // edi
  int v11; // esi
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  int v14; // ecx
  wint_t *v15; // rbx
  __int64 result; // rax

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    _misaligned_access();
    return 0LL;
  }
  v8 = *a2;
  v9 = a2 + 1;
  v10 = 0;
  while ( iswctype_l(v8, 8u, 0LL) )
    v8 = *v9++;
  v11 = a5;
  if ( v8 == 45 )
  {
    v11 = a5 | 2;
  }
  else if ( v8 != 43 )
  {
    goto LABEL_13;
  }
  v8 = *v9++;
LABEL_13:
  if ( v6 )
  {
    if ( v6 != 16 )
      goto LABEL_23;
    goto LABEL_20;
  }
  if ( !(unsigned int)sub_1403E5624(v8) )
  {
    if ( ((*v9 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_23;
    }
    v6 = 16;
LABEL_20:
    if ( !(unsigned int)sub_1403E5624(v8) && ((*v9 - 88) & 0xFFDF) == 0 )
    {
      v8 = v9[1];
      v9 += 2;
    }
    goto LABEL_23;
  }
  v6 = 10;
LABEL_23:
  v12 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    v13 = sub_1403E5624(v8);
    if ( v13 != -1 )
      goto LABEL_30;
    if ( (unsigned __int16)(v8 - 65) > 0x19u && (unsigned __int16)(v8 - 97) > 0x19u )
      break;
    v14 = v8 - 32;
    if ( (unsigned __int16)(v8 - 97) > 0x19u )
      v14 = v8;
    v13 = v14 - 55;
LABEL_30:
    if ( v13 >= v6 )
      break;
    v11 |= 8u;
    if ( a6 || v10 < v12 || v10 == v12 && v13 <= 0xFFFFFFFF % v6 )
    {
      v10 = v13 + v6 * v10;
    }
    else
    {
      v11 |= 4u;
      if ( !a3 )
        break;
    }
    v8 = *v9++;
  }
  v15 = v9 - 1;
  if ( (v11 & 8) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
      if ( (v11 & 1) != 0 )
        goto LABEL_52;
      if ( (v11 & 2) != 0 )
      {
        if ( v10 <= 0x80000000 )
          goto LABEL_52;
      }
      else if ( v10 <= 0x7FFFFFFF )
      {
        goto LABEL_52;
      }
    }
    if ( !a6 )
    {
      if ( (v11 & 1) != 0 )
        v10 = -1;
      else
        v10 = ((v11 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( a3 )
      v15 = a2;
    v10 = 0;
  }
LABEL_52:
  if ( a3 )
    *a3 = v15;
  result = -v10;
  if ( (v11 & 2) == 0 )
    return v10;
  return result;
}
