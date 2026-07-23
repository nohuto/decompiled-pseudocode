/*
 * XREFs of sub_1409CE5B0 @ 0x1409CE5B0
 * Callers:
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 *     sub_140753358 @ 0x140753358 (sub_140753358.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

char __fastcall sub_1409CE5B0(_WORD *a1, _WORD *a2)
{
  if ( a1 )
  {
    if ( !a2 || a1[1] != a2[1] || RtlCompareMemory(a1, a2, (unsigned __int16)a1[1]) != (unsigned __int16)a1[1] )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
