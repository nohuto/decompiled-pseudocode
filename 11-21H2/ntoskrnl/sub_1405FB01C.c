/*
 * XREFs of sub_1405FB01C @ 0x1405FB01C
 * Callers:
 *     sub_1405FACB4 @ 0x1405FACB4 (sub_1405FACB4.c)
 * Callees:
 *     sub_1405FB0EC @ 0x1405FB0EC (sub_1405FB0EC.c)
 */

__int64 __fastcall sub_1405FB01C(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  int v3; // r9d
  unsigned __int64 v4; // r8
  _WORD *v5; // rax
  __int64 result; // rax
  int v7; // ecx

  v2 = a2 >> 1;
  v3 = (int)a1;
  if ( v2 - 1 > 0x7FFFFFFE )
    return 2147942487LL;
  v4 = v2;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    v7 = v2 - v4;
  else
    v7 = 0;
  if ( v4 )
    return sub_1405FB0EC(v3 + 2 * v7, (int)v2 - v7, v4, (unsigned int)&word_140438490, 2147483646LL);
  return result;
}
