/*
 * XREFs of sub_18000FBD0 @ 0x18000FBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000FBD0(__int64 a1, __int64 a2, __int64 a3)
{
  LODWORD(a2) = a2 | 0x40000000;
  return sub_180011428(a1, a2, a3, 0LL);
}
