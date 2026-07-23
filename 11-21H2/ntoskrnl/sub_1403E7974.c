/*
 * XREFs of sub_1403E7974 @ 0x1403E7974
 * Callers:
 *     sub_1409D1048 @ 0x1409D1048 (sub_1409D1048.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

_WORD *__fastcall sub_1403E7974(_WORD *a1, _WORD *a2, _WORD **a3)
{
  __int16 i; // ax
  _WORD *v5; // r10
  __int16 v6; // r8
  _WORD *result; // rax
  __int16 *v8; // rbx
  __int16 v9; // r8
  __int16 v10; // r10
  _WORD *v11; // r10

  if ( !a3 || !a2 )
    goto LABEL_25;
  if ( !a1 )
  {
    if ( *a3 )
    {
      a1 = *a3;
      goto LABEL_6;
    }
LABEL_25:
    _misaligned_access();
    return 0LL;
  }
LABEL_6:
  for ( i = *a1; *a1; i = *a1 )
  {
    v5 = a2;
    if ( !*a2 )
      break;
    v6 = *a2;
    while ( v6 != i )
    {
      v6 = *++v5;
      if ( !*v5 )
        goto LABEL_13;
    }
    ++a1;
  }
LABEL_13:
  result = a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v8 = a2;
      v9 = *a2;
      if ( *a2 )
      {
        v10 = *a2;
        do
        {
          v9 = v10;
          if ( v10 == *a1 )
            break;
          v9 = *++v8;
          v10 = *v8;
        }
        while ( *v8 );
      }
      v11 = a1 + 1;
      if ( v9 )
        break;
      ++a1;
      if ( !*v11 )
        goto LABEL_22;
    }
    *a1++ = 0;
  }
LABEL_22:
  *a3 = a1;
  if ( result == a1 )
    return 0LL;
  return result;
}
