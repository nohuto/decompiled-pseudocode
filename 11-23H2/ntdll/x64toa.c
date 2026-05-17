/*
 * XREFs of x64toa @ 0x18008FDE0
 * Callers:
 *     _i64toa @ 0x18008FCF0 (_i64toa.c)
 *     _ui64toa @ 0x18008FD90 (_ui64toa.c)
 * Callees:
 *     <none>
 */

char __fastcall x64toa(unsigned __int64 a1, char *a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // rax
  char *v5; // r10
  unsigned __int64 v6; // r11
  char *v7; // r8
  unsigned __int64 v8; // rbx
  char *v9; // r9
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rdx
  char v12; // al
  char result; // al
  char v14; // cl

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
    result = *v7;
    v14 = *v9;
    *v9-- = *v7;
    *v7++ = v14;
  }
  while ( v7 < v9 );
  return result;
}
