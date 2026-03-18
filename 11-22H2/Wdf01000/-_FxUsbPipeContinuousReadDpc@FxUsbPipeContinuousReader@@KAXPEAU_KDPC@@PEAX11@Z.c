/*
 * XREFs of ?_FxUsbPipeContinuousReadDpc@FxUsbPipeContinuousReader@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C000F710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeContinuousReadDpc(
        _KDPC *Dpc,
        void *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  IofCallDriver(*(PDEVICE_OBJECT *)(*((_QWORD *)Dpc[-1].DpcData + 3) + 304LL), *((PIRP *)Dpc[-1].SystemArgument1 + 19));
}
