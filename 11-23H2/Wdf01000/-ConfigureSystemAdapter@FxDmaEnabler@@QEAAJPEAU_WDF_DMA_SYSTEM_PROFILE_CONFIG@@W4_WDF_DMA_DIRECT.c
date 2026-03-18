/*
 * XREFs of ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C001AF70
 * Callers:
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1C0018530 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C001AF28 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qLLd @ 0x1C001BE14 (WPP_IFR_SF_qLLd.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureSystemAdapter(
        FxDmaEnabler *this,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *Config,
        unsigned __int32 ConfigDirection)
{
  FxObject *v6; // rcx
  int v7; // esi
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *v9; // r8
  unsigned int m_MaximumLength; // eax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *DmaDescriptor; // rcx
  unsigned int Vector; // eax
  unsigned __int64 PreallocatedSGListSize; // rdi
  unsigned __int64 Pool2; // rax
  const void *ObjectHandleUnchecked; // rax
  char v16; // r8
  FxDmaEnabler *v17; // rcx
  char v18; // r8
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+50h] [rbp-48h] BYREF

  if ( FxDmaEnabler::GetDmaDescription(this, (_WDF_DMA_DIRECTION)ConfigDirection)->m_SimplexAdapterInfo.AdapterObject )
  {
    v7 = -1073741811;
    if ( v6->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v6);
      WPP_IFR_SF_qLLd(
        v9,
        5u,
        (unsigned int)v9,
        0x12u,
        WPP_FxDmaEnabler_cpp_Traceguids,
        _a2,
        this->m_Profile,
        ConfigDirection,
        -1073741811);
    }
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  else
  {
    memset(&deviceDescription, 0, sizeof(deviceDescription));
    m_MaximumLength = this->m_MaximumLength;
    DmaDescriptor = Config->DmaDescriptor;
    deviceDescription.InterfaceType = Internal;
    deviceDescription.MaximumLength = m_MaximumLength;
    deviceDescription.DemandMode = Config->DemandMode;
    deviceDescription.AutoInitialize = Config->LoopedTransfer;
    deviceDescription.DmaWidth = Config->DmaWidth;
    deviceDescription.DeviceAddress.QuadPart = Config->DeviceAddress.QuadPart;
    deviceDescription.DmaChannel = DmaDescriptor->u.Generic.Start.LowPart;
    Vector = DmaDescriptor->u.Interrupt.Vector;
    deviceDescription.Version = 3;
    deviceDescription.DmaRequestLine = Vector;
    v7 = FxDmaEnabler::ConfigureDmaAdapter(this, &deviceDescription, (_WDF_DMA_DIRECTION)ConfigDirection);
    if ( v7 >= 0 )
    {
      PreallocatedSGListSize = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      if ( (*((_BYTE *)this + 380) & 0x10) != 0
        && PreallocatedSGListSize <= this->m_DuplexAdapterInfo[1].PreallocatedSGListSize )
      {
        PreallocatedSGListSize = this->m_DuplexAdapterInfo[1].PreallocatedSGListSize;
      }
      Pool2 = ExAllocatePool2(64LL, PreallocatedSGListSize, this->m_Globals->Tag);
      this->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment = Pool2;
      if ( Pool2 )
      {
        v16 = *((_BYTE *)this + 380) | 0x20;
        this->m_SGListSize = PreallocatedSGListSize;
        *((_BYTE *)this + 380) = v16;
        if ( FxDmaEnabler::GetDmaDescription(this, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.AdapterObject
          && FxDmaEnabler::GetDmaDescription(v17, WdfDmaDirectionWriteToDevice)->m_SimplexAdapterInfo.AdapterObject )
        {
          *((_BYTE *)this + 380) = v18 | 2;
        }
      }
      else
      {
        v7 = -1073741670;
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qd(
          this->m_Globals,
          2u,
          0xFu,
          0x13u,
          WPP_FxDmaEnabler_cpp_Traceguids,
          ObjectHandleUnchecked,
          -1073741670);
      }
    }
  }
  return (unsigned int)v7;
}
