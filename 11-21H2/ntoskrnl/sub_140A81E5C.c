/*
 * XREFs of sub_140A81E5C @ 0x140A81E5C
 * Callers:
 *     sub_140A898F0 @ 0x140A898F0 (sub_140A898F0.c)
 *     sub_140A89AB0 @ 0x140A89AB0 (sub_140A89AB0.c)
 *     sub_140A89C30 @ 0x140A89C30 (sub_140A89C30.c)
 * Callees:
 *     sub_14029C6DC @ 0x14029C6DC (sub_14029C6DC.c)
 *     sub_14056A188 @ 0x14056A188 (sub_14056A188.c)
 */

__int64 sub_140A81E5C()
{
  bool v0; // al
  __int64 v1; // rcx
  unsigned int v2; // edx

  v0 = sub_14029C6DC();
  v2 = 0;
  if ( v0 )
    LOBYTE(v2) = (*(_WORD *)(v1 + 110) & 0x180) != 0;
  else
    return (unsigned int)sub_14056A188(v1);
  return v2;
}
