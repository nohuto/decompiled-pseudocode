/*
 * XREFs of sub_1409D3E10 @ 0x1409D3E10
 * Callers:
 *     sub_1409D1418 @ 0x1409D1418 (sub_1409D1418.c)
 *     sub_1409D3874 @ 0x1409D3874 (sub_1409D3874.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409D3E10(unsigned int a1, __int64 a2, int *a3)
{
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  v5 = -1;
  v6 = 2LL * (unsigned int)v4;
  if ( v6 > 0xFFFFFFFF )
  {
    result = 3221225621LL;
  }
  else
  {
    if ( (unsigned int)v6 + a1 >= a1 )
      v5 = v6 + a1;
    result = (unsigned int)v6 + a1 < a1 ? 0xC0000095 : 0;
  }
  *a3 = v5;
  return result;
}
