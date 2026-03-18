/*
 * XREFs of ?Reset@FxDmaTransactionBase@@AEAAXXZ @ 0x1C000CDE4
 * Callers:
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C000CC8A (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C001F3A4 (--0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDmaTransactionBase::Reset(FxDmaTransactionBase *this)
{
  FxDmaEnabler *m_DmaEnabler; // rax
  unsigned __int8 v2; // dl

  m_DmaEnabler = this->m_DmaEnabler;
  this->m_MaxFragmentLength = 0LL;
  this->m_TransactionLength = 0LL;
  this->m_DmaDirection = WdfDmaDirectionReadFromDevice;
  this->m_Remaining = 0LL;
  this->m_Transferred = 0LL;
  this->m_StartMdl = 0LL;
  this->m_StartOffset = 0LL;
  this->m_CurrentFragmentMdl = 0LL;
  this->m_CurrentFragmentOffset = 0LL;
  this->m_CurrentFragmentLength = 0LL;
  v2 = (*((_BYTE *)m_DmaEnabler + 380) & 0x40) != 0;
  this->m_Flags = 0;
  this->m_RequireSingleTransfer = v2;
  this->m_DmaAcquiredContext = 0LL;
  this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
}
