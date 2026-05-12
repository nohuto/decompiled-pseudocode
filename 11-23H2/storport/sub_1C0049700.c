/*
 * XREFs of sub_1C0049700 @ 0x1C0049700
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E318 @ 0x1C000E318 (sub_1C000E318.c)
 */

__int64 __fastcall sub_1C0049700(__int64 a1, unsigned int a2, __int64 a3, unsigned __int16 a4, __int64 a5)
{
  int NodeActiveAffinity2; // eax

  if ( a2 > 0xFFFF || !a3 || !a4 || !a5 )
    return 3238002694LL;
  NodeActiveAffinity2 = KeQueryNodeActiveAffinity2((unsigned __int16)a2, a3, a4);
  return sub_1C000E318(NodeActiveAffinity2);
}
