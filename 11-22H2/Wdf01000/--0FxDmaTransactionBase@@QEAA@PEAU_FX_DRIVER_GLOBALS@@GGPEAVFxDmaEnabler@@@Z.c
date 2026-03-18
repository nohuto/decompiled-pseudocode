/*
 * XREFs of ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C001F3A4
 * Callers:
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C001C450 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 *     ??0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z @ 0x1C001E470 (--0FxDmaScatterGatherTransaction@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     ?Reset@FxDmaTransactionBase@@AEAAXXZ @ 0x1C000CDE4 (-Reset@FxDmaTransactionBase@@AEAAXXZ.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDmaTransactionBase::FxDmaTransactionBase(
        FxDmaTransactionBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        unsigned __int16 ExtraSize,
        FxDmaEnabler *DmaEnabler)
{
  unsigned __int16 v6; // si
  char *v7; // rdi
  unsigned __int16 v9; // cx

  v6 = ObjectSize + 15;
  v7 = 0LL;
  if ( ExtraSize )
    v9 = (v6 & 0xFFF0) + ((ExtraSize + 15) & 0xFFF0);
  else
    v9 = ObjectSize;
  FxNonPagedObject::FxNonPagedObject(this, 0x1401u, v9, FxDriverGlobals);
  this->m_EncodedRequest = 0LL;
  this->__vftable = (FxDmaTransactionBase_vtbl *)FxDmaTransactionBase::`vftable';
  this->m_DmaEnabler = DmaEnabler;
  this->m_DmaAcquiredFunction.Method.ProgramDma = 0LL;
  FxDmaTransactionBase::Reset(this);
  this->m_State = FxDmaTransactionStateCreated;
  if ( ExtraSize )
    v7 = (char *)this + (v6 & 0xFFF0);
  this->m_TransferContext = v7;
  this->m_ObjectFlags |= 0x800u;
}
