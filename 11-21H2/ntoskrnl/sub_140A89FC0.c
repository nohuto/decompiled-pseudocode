/*
 * XREFs of sub_140A89FC0 @ 0x140A89FC0
 * Callers:
 *     sub_140A89888 @ 0x140A89888 (sub_140A89888.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140A89FC0(__int64 a1, int a2)
{
  while ( *(_DWORD *)(a1 + 52) != a2 )
  {
    a1 += 56LL;
    if ( !*(_QWORD *)a1 )
      return 0;
  }
  return 1;
}
