/*
 * XREFs of sub_140767AB0 @ 0x140767AB0
 * Callers:
 *     sub_140767820 @ 0x140767820 (sub_140767820.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140767AB0(__int16 *a1, char a2)
{
  __int16 v2; // r8

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    if ( (unsigned __int16)(v2 - 33) > 0x5Eu || v2 == 44 || !a2 && v2 == 92 )
      return 0;
    ++a1;
  }
  return 1;
}
