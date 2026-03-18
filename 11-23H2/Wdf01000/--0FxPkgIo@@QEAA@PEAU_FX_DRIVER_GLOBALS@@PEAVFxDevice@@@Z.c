/*
 * XREFs of ??0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0061F00
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003E20C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ??0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0067CD0 (--0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 */

void __fastcall FxPkgIo::FxPkgIo(FxPkgIo *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxDevice *Device)
{
  FxPackage::FxPackage(this, FxDriverGlobals, Device, 0x1100u);
  this->m_DefaultQueue = 0LL;
  this->__vftable = (FxPkgIo_vtbl *)FxPkgIo::`vftable';
  this->m_InCallerContextCallback.m_Method = 0LL;
  this->m_DeviceBase = Device;
  memset(this->m_DispatchTable, 0, sizeof(this->m_DispatchTable));
  *(_WORD *)&this->m_Filter = 0;
  this->m_IoQueueListHead.Blink = &this->m_IoQueueListHead;
  this->m_IoQueueListHead.Flink = &this->m_IoQueueListHead;
  this->m_DynamicDispatchInfoListHead.Blink = &this->m_DynamicDispatchInfoListHead;
  this->m_DynamicDispatchInfoListHead.Flink = &this->m_DynamicDispatchInfoListHead;
  this->m_QueuesAreShuttingDown = 0;
  this->m_RandomSeed = MEMORY[0xFFFFF78000000320];
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(FxDriverGlobals, 5u, 0xDu, 0xAu, WPP_FxPkgIo_cpp_Traceguids, this);
}
