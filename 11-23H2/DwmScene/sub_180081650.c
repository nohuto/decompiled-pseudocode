/*
 * XREFs of sub_180081650 @ 0x180081650
 * Callers:
 *     sub_180081C14 @ 0x180081C14 (sub_180081C14.c)
 *     sub_180083AB0 @ 0x180083AB0 (sub_180083AB0.c)
 *     sub_180083BBC @ 0x180083BBC (sub_180083BBC.c)
 *     sub_180084078 @ 0x180084078 (sub_180084078.c)
 *     sub_180085CCC @ 0x180085CCC (sub_180085CCC.c)
 * Callees:
 *     sub_180071F84 @ 0x180071F84 (sub_180071F84.c)
 */

__int64 __fastcall sub_180081650(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180071F84(v3);
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
