/*
 * XREFs of sub_140717624 @ 0x140717624
 * Callers:
 *     sub_140718CA8 @ 0x140718CA8 (sub_140718CA8.c)
 *     sub_140917930 @ 0x140917930 (sub_140917930.c)
 * Callees:
 *     sub_140717660 @ 0x140717660 (sub_140717660.c)
 *     sub_140718BF0 @ 0x140718BF0 (sub_140718BF0.c)
 */

__int64 __fastcall sub_140717624(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  result = sub_140718BF0(a1, &v4);
  if ( (int)result >= 0 )
    return sub_140717660(&v4, a2);
  return result;
}
