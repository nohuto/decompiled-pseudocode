/*
 * XREFs of sub_14025CEF0 @ 0x14025CEF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025CF20 @ 0x14025CF20 (sub_14025CF20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14025CEF0(
        struct _KDPC *Dpc,
        unsigned int *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  sub_14025CF20(DeferredContext[32], 0LL, SystemArgument1, SystemArgument2);
  ExFreePoolWithTag(DeferredContext, 0);
}
