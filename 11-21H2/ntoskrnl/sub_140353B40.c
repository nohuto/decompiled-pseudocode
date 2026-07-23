/*
 * XREFs of sub_140353B40 @ 0x140353B40
 * Callers:
 *     sub_140350070 @ 0x140350070 (sub_140350070.c)
 *     sub_1405F31D8 @ 0x1405F31D8 (sub_1405F31D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140353B40(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // r9d
  unsigned __int64 v5; // r11
  int v6; // r10d

  v3 = 0;
  v4 = 0;
  v5 = a2 + 32LL * a3;
  v6 = 0;
  if ( a2 >= v5 )
    return 0LL;
  if ( a3 < 2uLL )
    goto LABEL_5;
  do
  {
    v3 += *(unsigned __int8 *)(a2 + 25);
    v4 += *(unsigned __int8 *)(a2 + 57);
    a2 += 64LL;
  }
  while ( a2 < v5 - 32 );
  if ( a2 < v5 )
LABEL_5:
    v6 = *(unsigned __int8 *)(a2 + 25);
  return (unsigned int)(v6 + v4 + v3);
}
