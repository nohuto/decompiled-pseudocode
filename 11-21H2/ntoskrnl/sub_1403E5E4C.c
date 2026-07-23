/*
 * XREFs of sub_1403E5E4C @ 0x1403E5E4C
 * Callers:
 *     _i64toa_s @ 0x1403E5DB0 (_i64toa_s.c)
 *     _ui64toa_s @ 0x1403E5E10 (_ui64toa_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

__int64 __fastcall sub_1403E5E4C(unsigned __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v8; // rdi
  char *v9; // rbx
  char *v10; // r8
  unsigned __int64 v11; // rbp
  _BYTE *v12; // rsi
  char *v13; // r9
  unsigned __int64 v14; // rdx
  char v15; // al
  char v16; // cl

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
    v8 = 0LL;
    v9 = a2;
    if ( a5 )
    {
      *a2 = 45;
      v9 = a2 + 1;
      v8 = 1LL;
      a1 = -(__int64)a1;
    }
    v10 = v9;
    v11 = a4;
    do
    {
      v12 = v9 + 1;
      v13 = v9;
      v14 = a1 % v11;
      a1 /= v11;
      v15 = 87;
      if ( (unsigned int)v14 <= 9 )
        v15 = 48;
      ++v8;
      *v9 = v14 + v15;
      if ( !a1 )
        break;
      ++v9;
    }
    while ( v8 < a3 );
    if ( v8 >= a3 )
    {
      *a2 = 0;
      goto LABEL_4;
    }
    *v12 = 0;
    do
    {
      v16 = *v13;
      *v13-- = *v10;
      *v10++ = v16;
    }
    while ( v10 < v13 );
    return 0LL;
  }
  else
  {
LABEL_18:
    _misaligned_access();
    return 22LL;
  }
}
