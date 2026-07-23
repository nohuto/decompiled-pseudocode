/*
 * XREFs of sub_1403C1F24 @ 0x1403C1F24
 * Callers:
 *     sub_1403C1A84 @ 0x1403C1A84 (sub_1403C1A84.c)
 * Callees:
 *     sub_1403C1F9C @ 0x1403C1F9C (sub_1403C1F9C.c)
 */

__int64 __fastcall sub_1403C1F24(unsigned __int16 *a1)
{
  unsigned __int16 v1; // di
  unsigned __int16 v3; // bx
  __int64 v4; // rcx

  v1 = word_140D05000;
  v3 = 0;
  if ( !word_140D05000 )
    return 3221226021LL;
  while ( 1 )
  {
    v4 = qword_140D31700[v3];
    if ( (*(_BYTE *)(v4 + 10) & 2) != 0 && !(unsigned __int8)sub_1403C1F9C(v4) )
      break;
    if ( ++v3 >= v1 )
      return 3221226021LL;
  }
  *a1 = v3;
  return 0LL;
}
