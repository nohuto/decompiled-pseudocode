/*
 * XREFs of WmipIsNumber @ 0x1407EA5A4
 * Callers:
 *     WmipPrepareWnodeSI @ 0x1406C64E4 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x14086B060 (WmipFindISinGEbyName.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipIsNumber(_WORD *a1)
{
  while ( 1 )
  {
    if ( !*a1 )
      return 1;
    if ( (unsigned __int16)(*a1 - 48) > 9u )
      break;
    ++a1;
  }
  return 0;
}
