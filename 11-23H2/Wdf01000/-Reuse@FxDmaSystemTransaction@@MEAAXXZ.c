/*
 * XREFs of ?Reuse@FxDmaSystemTransaction@@MEAAXXZ @ 0x1C0009510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDmaSystemTransaction::Reuse(FxDmaSystemTransaction *this)
{
  this->m_ConfigureChannelFunction.Method = 0LL;
  this->m_ConfigureChannelContext = 0LL;
  this->m_TransferCompleteFunction.Method = 0LL;
  this->m_TransferCompleteContext = 0LL;
}
