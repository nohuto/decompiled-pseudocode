/*
 * XREFs of ??0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z @ 0x1C001E470
 * Callers:
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C001E93C (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 * Callees:
 *     ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C001F3A4 (--0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 */

void __fastcall FxDmaScatterGatherTransaction::FxDmaScatterGatherTransaction(
        FxDmaScatterGatherTransaction *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ExtraSize,
        FxDmaEnabler *DmaEnabler)
{
  FxDmaTransactionBase::FxDmaTransactionBase(this, FxDriverGlobals, 0x118u, ExtraSize, DmaEnabler);
  this->__vftable = (FxDmaScatterGatherTransaction_vtbl *)FxDmaScatterGatherTransaction::`vftable';
  this->m_SGList = 0LL;
  this->m_SGListBuffer = 0LL;
  this->m_SgListBufferSize = 0;
  this->m_IsBufferFromLookaside = 0;
}
