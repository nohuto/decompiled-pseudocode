/*
 * XREFs of sub_1402220E0 @ 0x1402220E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402221F4 @ 0x1402221F4 (sub_1402221F4.c)
 */

void __fastcall sub_1402220E0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  sub_1402221F4(CurrentPrcb, DeferredContext, SystemArgument1, SystemArgument2);
  _enable();
}
