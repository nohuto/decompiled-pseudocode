/*
 * XREFs of x64tow @ 0x18008F7F0
 * Callers:
 *     _i64tow @ 0x18008F700 (_i64tow.c)
 *     _ui64tow @ 0x18008F7A0 (_ui64tow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall x64tow(unsigned __int64 a1, __int16 *a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // rax
  __int16 *v5; // r10
  unsigned __int64 v6; // r11
  __int16 *v7; // r8
  unsigned __int64 v8; // rbx
  __int16 *v9; // r9
  unsigned __int64 v10; // rcx
  _WORD *v11; // rdx
  __int16 v12; // ax
  __int64 result; // rax
  __int16 v14; // cx

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    v6 = -(__int64)a1;
  }
  v7 = v5;
  v8 = v4;
  do
  {
    v9 = v5;
    v10 = v6 % v8;
    v11 = v5 + 1;
    v6 /= v8;
    v12 = 87;
    if ( (unsigned int)v10 <= 9 )
      v12 = 48;
    *v5++ = v10 + v12;
  }
  while ( v6 );
  *v11 = 0;
  do
  {
    result = (unsigned __int16)*v7;
    v14 = *v9;
    *v9-- = result;
    *v7++ = v14;
  }
  while ( v7 < v9 );
  return result;
}
