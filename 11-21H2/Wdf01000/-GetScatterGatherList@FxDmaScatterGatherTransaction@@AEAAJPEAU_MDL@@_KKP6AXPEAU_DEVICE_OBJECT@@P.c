/*
 * XREFs of ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1C0057F18
 * Callers:
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0058240 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002DC98 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::GetScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *Mdl_0)
{
  KIRQL v10; // di
  $D7F949E6343C64CECF3CA7D9836D4276 *DmaDescription; // rax
  __int64 v12; // r11
  _DEVICE_OBJECT *v13; // rdx
  _DMA_ADAPTER *AdapterObject; // rbp
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int8 v18; // [rsp+38h] [rbp-50h]
  unsigned __int8 m_DmaDirection; // [rsp+48h] [rbp-40h]

  v10 = KfRaiseIrql(2u);
  DmaDescription = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  v13 = *(_DEVICE_OBJECT **)(v12 + 168);
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    m_DmaDirection = this->m_DmaDirection;
    v15 = AdapterObject->DmaOperations->GetScatterGatherListEx(
            AdapterObject,
            v13,
            this->m_TransferContext,
            Mdl,
            CurrentOffset,
            Length,
            this->m_Flags,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            m_DmaDirection,
            0LL,
            0LL,
            0LL);
  }
  else
  {
    v18 = this->m_DmaDirection;
    v15 = AdapterObject->DmaOperations->GetScatterGatherList(
            AdapterObject,
            v13,
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            v18);
  }
  v16 = v15;
  KeLowerIrql(v10);
  return v16;
}
