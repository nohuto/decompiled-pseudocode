/*
 * XREFs of sub_1403E6290 @ 0x1403E6290
 * Callers:
 *     _ltow_s @ 0x1403E60E0 (_ltow_s.c)
 *     _ultow_s @ 0x1403E6130 (_ultow_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

__int64 __fastcall sub_1403E6290(unsigned int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v9; // rdi
  __int16 *v10; // rbx
  __int16 *v11; // r8
  _WORD *v12; // rsi
  __int16 *v13; // r9
  unsigned int v14; // edx
  __int16 v15; // ax
  __int16 v16; // cx

  if ( !a2 || !a3 )
    goto LABEL_18;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)(a5 != 0) + 1 )
  {
LABEL_4:
    _misaligned_access();
    return 34LL;
  }
  if ( a4 - 2 <= 0x22 )
  {
    v9 = 0LL;
    v10 = a2;
    if ( a5 )
    {
      v10 = a2 + 1;
      *a2 = 45;
      a1 = -a1;
      v9 = 1LL;
    }
    v11 = v10;
    do
    {
      v12 = v10 + 1;
      v13 = v10;
      v14 = a1 % a4;
      a1 /= a4;
      v15 = 87;
      if ( v14 <= 9 )
        v15 = 48;
      ++v9;
      *v10 = v14 + v15;
      if ( !a1 )
        break;
      ++v10;
    }
    while ( v9 < a3 );
    if ( v9 >= a3 )
    {
      *a2 = 0;
      goto LABEL_4;
    }
    *v12 = 0;
    do
    {
      v16 = *v13;
      *v13-- = *v11;
      *v11++ = v16;
    }
    while ( v11 < v13 );
    return 0LL;
  }
  else
  {
LABEL_18:
    _misaligned_access();
    return 22LL;
  }
}
