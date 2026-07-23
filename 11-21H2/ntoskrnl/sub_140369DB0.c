/*
 * XREFs of sub_140369DB0 @ 0x140369DB0
 * Callers:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 *     DbgQueryDebugFilterState @ 0x1405E41C0 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140369DB0(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9

  v2 = 3;
  if ( a1 < 0x9C )
    v2 = a2;
  v3 = 101LL;
  if ( a1 < 0x9C )
    v3 = a1;
  if ( v2 <= 0x1F )
    v2 = 1 << v2;
  return (v2 & dword_140C0BBC8) != 0 || (v2 & *(_DWORD *)*(&off_140008610 + v3)) != 0;
}
