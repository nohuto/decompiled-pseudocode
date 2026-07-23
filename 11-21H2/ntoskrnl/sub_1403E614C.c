/*
 * XREFs of sub_1403E614C @ 0x1403E614C
 * Callers:
 *     _i64tow_s @ 0x1403E60B0 (_i64tow_s.c)
 *     _ui64tow_s @ 0x1403E6110 (_ui64tow_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

__int64 __fastcall sub_1403E614C(unsigned __int64 a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v8; // rdi
  __int16 *v9; // rbx
  __int16 *v10; // r8
  unsigned __int64 v11; // rbp
  _WORD *v12; // rsi
  __int16 *v13; // r9
  unsigned __int64 v14; // rdx
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
    v8 = 0LL;
    v9 = a2;
    if ( a5 )
    {
      v9 = a2 + 1;
      *a2 = 45;
      a1 = -(__int64)a1;
      v8 = 1LL;
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
