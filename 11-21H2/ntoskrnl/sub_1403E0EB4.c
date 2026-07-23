/*
 * XREFs of sub_1403E0EB4 @ 0x1403E0EB4
 * Callers:
 *     _itow @ 0x1403E0E60 (_itow.c)
 *     sub_1403E0E90 @ 0x1403E0E90 (sub_1403E0E90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403E0EB4(unsigned int a1, __int16 *a2, unsigned int a3, int a4)
{
  __int16 *v5; // r10
  __int16 *v6; // r8
  _WORD *v7; // r11
  __int16 *v8; // r9
  unsigned int v9; // edx
  __int16 v10; // ax
  __int64 result; // rax
  __int16 v12; // cx

  v5 = a2;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    a1 = -a1;
  }
  v6 = v5;
  do
  {
    v7 = v5 + 1;
    v8 = v5;
    v9 = a1 % a3;
    a1 /= a3;
    v10 = 87;
    if ( v9 <= 9 )
      v10 = 48;
    *v5++ = v9 + v10;
  }
  while ( a1 );
  *v7 = 0;
  do
  {
    result = (unsigned __int16)*v6;
    v12 = *v8;
    *v8-- = result;
    *v6++ = v12;
  }
  while ( v6 < v8 );
  return result;
}
