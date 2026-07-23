/*
 * XREFs of sub_1405AEA2C @ 0x1405AEA2C
 * Callers:
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405AEA2C(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = v2 + 48 * qword_14001C780[a2];
  while ( 1 )
  {
    if ( v2 >= v3 )
      return 0LL;
    if ( (*(_BYTE *)(v2 + 35) & 0x40) != 0 )
      break;
    v2 += 48LL;
  }
  return 1LL;
}
