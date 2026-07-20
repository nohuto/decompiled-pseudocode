/*
 * XREFs of SmpGetParentDirectory @ 0x140011A4C
 * Callers:
 *     SmpShuffleMove @ 0x14001A45C (SmpShuffleMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetParentDirectory(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned __int16 v3; // r8
  __int16 v5; // r8

  v2 = 0;
  v3 = *(_WORD *)a1 >> 1;
  if ( v3 )
  {
    while ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v3) != 92 )
    {
      if ( !--v3 )
        return (unsigned int)-1073741811;
    }
    v5 = 2 * v3;
    *(_WORD *)a2 = v5;
    *(_WORD *)(a2 + 2) = v5;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
