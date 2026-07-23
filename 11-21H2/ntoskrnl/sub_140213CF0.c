/*
 * XREFs of sub_140213CF0 @ 0x140213CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140693800 @ 0x140693800 (sub_140693800.c)
 */

__int64 __fastcall sub_140213CF0(_DWORD *a1)
{
  int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // eax

  if ( !a1 )
    return 3221225711LL;
  v2 = a1[1];
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = sub_140693800(0LL);
      a1[3] = 0;
      return v3;
    }
    return 3221225711LL;
  }
  v4 = a1[3];
  a1[3] = 4;
  if ( v4 < 4 )
    return 3221225507LL;
  a1[4] = 0;
  return 0LL;
}
