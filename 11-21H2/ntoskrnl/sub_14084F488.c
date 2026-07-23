/*
 * XREFs of sub_14084F488 @ 0x14084F488
 * Callers:
 *     sub_14084F1B0 @ 0x14084F1B0 (sub_14084F1B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14084F488(int a1, _DWORD *a2)
{
  unsigned __int8 v2; // r8

  v2 = 0;
  while ( *((_DWORD *)qword_140025E10 + v2) != a1 )
  {
    if ( ++v2 >= 0x10u )
      return 3221226021LL;
  }
  *a2 = v2;
  return 0LL;
}
