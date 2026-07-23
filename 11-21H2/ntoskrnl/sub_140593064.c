/*
 * XREFs of sub_140593064 @ 0x140593064
 * Callers:
 *     sub_140592C5C @ 0x140592C5C (sub_140592C5C.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

__int64 __fastcall sub_140593064(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = (a1 & 0xFFFFFFFFFFFFF000uLL) + (((a1 & 0xFFF) + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  while ( 1 )
  {
    if ( v2 >= v3 )
      return 1LL;
    if ( !sub_14028FBF0(v2) )
      break;
    v2 += 4096LL;
  }
  return 0LL;
}
