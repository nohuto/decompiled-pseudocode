/*
 * XREFs of sub_140456892 @ 0x140456892
 * Callers:
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_1404588B6 @ 0x1404588B6 (sub_1404588B6.c)
 *     sub_140503628 @ 0x140503628 (sub_140503628.c)
 */

__int64 __fastcall sub_140456892(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10

  if ( (unsigned int)sub_14023A8D0(a1) == 2 )
    return sub_1404588B6(v1, v2);
  else
    return sub_140503628(v1, v2);
}
