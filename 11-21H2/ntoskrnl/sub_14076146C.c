/*
 * XREFs of sub_14076146C @ 0x14076146C
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_1402D99BC @ 0x1402D99BC (sub_1402D99BC.c)
 *     sub_14080C354 @ 0x14080C354 (sub_14080C354.c)
 */

__int64 __fastcall sub_14076146C(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1402D99BC(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( (dword_140D06880 & 0x4000) == 0 || (dword_140D06880 & 0x40000) != 0 || (*(_DWORD *)(a1 + 104) & 0x2000) != 0 )
      return 0LL;
    result = sub_14080C354(a1);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 104) |= 0x2000u;
      return 0LL;
    }
  }
  return result;
}
