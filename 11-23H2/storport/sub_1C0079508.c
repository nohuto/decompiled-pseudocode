/*
 * XREFs of sub_1C0079508 @ 0x1C0079508
 * Callers:
 *     sub_1C00B1DDC @ 0x1C00B1DDC (sub_1C00B1DDC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0079508(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)sub_1C00794E0, DeferredContext);
}
