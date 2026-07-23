/*
 * XREFs of sub_140656050 @ 0x140656050
 * Callers:
 *     sub_140655D84 @ 0x140655D84 (sub_140655D84.c)
 * Callees:
 *     sub_140656070 @ 0x140656070 (sub_140656070.c)
 */

char __fastcall sub_140656050(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return 0;
  else
    return sub_140656070();
}
