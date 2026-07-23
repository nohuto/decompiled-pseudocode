/*
 * XREFs of sub_1406EB7E8 @ 0x1406EB7E8
 * Callers:
 *     sub_14075F09C @ 0x14075F09C (sub_14075F09C.c)
 *     sub_140783DB8 @ 0x140783DB8 (sub_140783DB8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1406EB7E8(_WORD *a1)
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
