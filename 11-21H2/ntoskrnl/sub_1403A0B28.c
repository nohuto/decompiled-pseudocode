/*
 * XREFs of sub_1403A0B28 @ 0x1403A0B28
 * Callers:
 *     KeAllocateCalloutStackEx @ 0x1406EE1C0 (KeAllocateCalloutStackEx.c)
 *     KeFreeCalloutStack @ 0x14080BB20 (KeFreeCalloutStack.c)
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 * Callees:
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 */

signed __int64 __fastcall sub_1403A0B28(unsigned __int64 a1, unsigned int a2)
{
  return sub_1402C1900(a1, a2, 0LL);
}
