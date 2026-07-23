/*
 * XREFs of sub_140232AD0 @ 0x140232AD0
 * Callers:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_1402C3410 @ 0x1402C3410 (sub_1402C3410.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140232AD0(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = v2 + 48 * qword_14001C780[a2];
  while ( 1 )
  {
    if ( v2 >= v3 )
      return 1LL;
    if ( *(_WORD *)(v2 + 32) != 2 )
      break;
    v2 += 48LL;
  }
  return 0LL;
}
