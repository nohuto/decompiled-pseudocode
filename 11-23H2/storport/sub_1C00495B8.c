/*
 * XREFs of sub_1C00495B8 @ 0x1C00495B8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00495B8(__int64 a1, USHORT a2, KAFFINITY *a3)
{
  if ( !a3 )
    return 3238002694LL;
  if ( a2 > KeQueryActiveGroupCount() )
    return 3238002689LL;
  *a3 = KeQueryGroupAffinity(a2);
  return 0LL;
}
