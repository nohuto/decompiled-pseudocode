/*
 * XREFs of sub_180024E60 @ 0x180024E60
 * Callers:
 *     sub_180024C1C @ 0x180024C1C (sub_180024C1C.c)
 *     sub_18007E5C0 @ 0x18007E5C0 (sub_18007E5C0.c)
 *     sub_18009B720 @ 0x18009B720 (sub_18009B720.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

unsigned __int64 __fastcall sub_180024E60(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFLL )
    sub_180011AC4();
  return a1 << 6;
}
