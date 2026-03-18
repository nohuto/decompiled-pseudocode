/*
 * XREFs of IopLiveDumpCorralDpc @ 0x140A9AE40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveProcessorControlState @ 0x14041EDA0 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140428FD0 (RtlCaptureContext.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x140A9C300 (IopLiveDumpProcessCorralStateChange.c)
 */

void __fastcall IopLiveDumpCorralDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v6; // edx
  unsigned int Number; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+24h] [rbp-14h]
  int v9; // [rsp+28h] [rbp-10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  v8 = 0;
  Number = CurrentPrcb->Number;
  RtlCaptureContext(CurrentPrcb->Context);
  KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v6);
  do
    IopLiveDumpProcessCorralStateChange(DeferredContext, &Number);
  while ( v8 != -1 );
}
