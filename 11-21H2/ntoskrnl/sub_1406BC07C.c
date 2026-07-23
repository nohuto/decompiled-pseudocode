/*
 * XREFs of sub_1406BC07C @ 0x1406BC07C
 * Callers:
 *     sub_1406BBFD0 @ 0x1406BBFD0 (sub_1406BBFD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406BC07C(_DWORD *a1, int a2)
{
  unsigned int v2; // r10d
  _DWORD *v3; // rax
  unsigned int v4; // r8d
  int v5; // r9d
  __int64 v6; // r11
  _DWORD *v7; // rdx
  unsigned int i; // ecx

  v2 = a1[36];
  v3 = a1 + 38;
  v4 = 0;
  v5 = 0;
  if ( v2 )
  {
    v6 = v2;
    do
    {
      if ( *v3 == a2 )
        v5 |= v3[1];
      v3 += 10;
      --v6;
    }
    while ( v6 );
    v7 = a1 + 32;
    for ( i = 0; i < v2; ++i )
    {
      if ( (v5 & *v7) != 0 )
        v4 |= 1 << i;
      ++v7;
    }
  }
  return v4;
}
