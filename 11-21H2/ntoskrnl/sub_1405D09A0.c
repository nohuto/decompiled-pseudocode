/*
 * XREFs of sub_1405D09A0 @ 0x1405D09A0
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 */

BOOLEAN __fastcall sub_1405D09A0(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
