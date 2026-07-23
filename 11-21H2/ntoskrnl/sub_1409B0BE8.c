/*
 * XREFs of sub_1409B0BE8 @ 0x1409B0BE8
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409B0BE8(__int64 a1, int a2)
{
  int v3; // r8d
  signed __int32 v4; // eax
  int v6; // ecx

  v3 = 4;
  if ( a2 != 2 )
    v3 = 2;
  v4 = *(_DWORD *)(a1 + 1516);
  if ( (v4 & a2) != 0 )
    return 1;
  while ( (v3 & v4) == 0 )
  {
    v6 = a2 | v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1516), a2 | v4, v4);
    if ( v4 == v6 )
      return 1;
  }
  return 0;
}
