/*
 * XREFs of ?DxgkpFirstFrameTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0046940
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessFirstFrameTimer@DXGADAPTER@@QEAAXXZ @ 0x1C004058C (-ProcessFirstFrameTimer@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpFirstFrameTimerDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  DXGADAPTER::ProcessFirstFrameTimer(DeferredContext);
}
