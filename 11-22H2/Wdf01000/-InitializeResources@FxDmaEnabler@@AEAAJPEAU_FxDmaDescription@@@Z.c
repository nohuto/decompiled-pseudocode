/*
 * XREFs of ?InitializeResources@FxDmaEnabler@@AEAAJPEAU_FxDmaDescription@@@Z @ 0x1C001B788
 * Callers:
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C001AF28 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qLqdi @ 0x1C001BF2C (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qii @ 0x1C001C128 (WPP_IFR_SF_qii.c)
 */

__int64 __fastcall FxDmaEnabler::InitializeResources(FxDmaEnabler *this, _FxDmaDescription *AdapterInfo)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int *p_NumberOfMapRegisters; // r14
  _DMA_ADAPTER *DmaAdapter; // rax
  _DMA_ADAPTER *v7; // rcx
  const void *_a1; // rax
  char v10; // al
  unsigned __int64 *p_PreallocatedSGListSize; // rdx
  int _a2; // ebp
  const void *ObjectHandleUnchecked; // rax
  unsigned __int64 m_MaximumLength; // rdx
  const void *v15; // rax
  __int64 id; // rdx
  unsigned int flags; // r8d
  unsigned __int16 v18; // r9
  const void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  m_Globals = this->m_Globals;
  p_NumberOfMapRegisters = &AdapterInfo->NumberOfMapRegisters;
  DmaAdapter = IoGetDmaAdapter(this->m_PDO, &AdapterInfo->DeviceDescription, &AdapterInfo->NumberOfMapRegisters);
  AdapterInfo->AdapterObject = DmaAdapter;
  v7 = DmaAdapter;
  if ( !DmaAdapter )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaEnabler_cpp_Traceguids, _a1, -1073741823);
    return 3221225473LL;
  }
  v10 = *((_BYTE *)this + 380);
  p_PreallocatedSGListSize = &AdapterInfo->PreallocatedSGListSize;
  if ( (v10 & 8) != 0 )
  {
    traceGuid = (const _GUID *)&AdapterInfo->PreallocatedSGListSize;
    _a2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD))v7->DmaOperations->CalculateScatterGatherList)(
            v7,
            0LL,
            0LL,
            *p_NumberOfMapRegisters << 12);
    if ( _a2 < 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaEnabler_cpp_Traceguids, ObjectHandleUnchecked, _a2);
      return (unsigned int)_a2;
    }
  }
  else if ( (v10 & 4) != 0 )
  {
    *p_PreallocatedSGListSize = 40LL;
  }
  else
  {
    *p_PreallocatedSGListSize = 24LL * *p_NumberOfMapRegisters + 16;
  }
  m_MaximumLength = this->m_MaximumLength;
  if ( m_MaximumLength >= (unsigned __int64)(*p_NumberOfMapRegisters - 1) << 12 )
    m_MaximumLength = (unsigned __int64)(*p_NumberOfMapRegisters - 1) << 12;
  AdapterInfo->MaximumFragmentLength = m_MaximumLength;
  if ( m_Globals->FxVerboseOn )
  {
    v15 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qLqdi(m_Globals, id, flags, v18, traceGuid, v15, this->m_Profile, AdapterInfo->AdapterObject, flags, id);
  }
  if ( AdapterInfo->MaximumFragmentLength < this->m_MaximumLength )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v19 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qii(m_Globals, 5u, v21, 0x17u, WPP_FxDmaEnabler_cpp_Traceguids, v19, v20, v21);
    }
  }
  return 0LL;
}
