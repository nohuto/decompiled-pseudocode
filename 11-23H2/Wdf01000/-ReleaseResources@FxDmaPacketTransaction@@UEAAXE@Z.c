/*
 * XREFs of ?ReleaseResources@FxDmaPacketTransaction@@UEAAXE@Z @ 0x1C001C960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 */

void __fastcall FxDmaPacketTransaction::ReleaseResources(FxDmaPacketTransaction *this, __int64 ForceRelease)
{
  FxDmaEnabler *m_DmaEnabler; // rcx
  __int64 v4; // rcx

  if ( this->m_MapRegisterBaseSet && (!this->m_MapRegistersReserved || (_BYTE)ForceRelease) )
  {
    ((void (__fastcall *)(FxDmaPacketTransaction *, __int64))this->FreeMapRegistersAndAdapter)(this, ForceRelease);
    m_DmaEnabler = this->m_DmaEnabler;
    this->m_MapRegisterBaseSet = 0;
    if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v4 + 96) + 192LL), 0);
    this->m_AdapterInfo = 0LL;
    this->m_MapRegistersReserved = 0;
  }
}
