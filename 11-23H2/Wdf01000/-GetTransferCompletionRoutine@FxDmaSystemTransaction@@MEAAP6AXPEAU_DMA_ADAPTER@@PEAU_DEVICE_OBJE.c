/*
 * XREFs of ?GetTransferCompletionRoutine@FxDmaSystemTransaction@@MEAAP6AXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@ZXZ @ 0x1C001ED70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall FxDmaSystemTransaction::GetTransferCompletionRoutine(
        FxDmaSystemTransaction *this))(_DMA_ADAPTER *, _DEVICE_OBJECT *, void *, DMA_COMPLETION_STATUS)
{
  return (void (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, void *, DMA_COMPLETION_STATUS))((unsigned __int64)FxDmaSystemTransaction::_SystemDmaCompletion & -(__int64)(this->m_TransferCompleteFunction.Method != 0LL));
}
