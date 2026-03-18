/*
 * XREFs of ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C003BA20
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C0023ED4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C002E9A8 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00420D0 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C003BB8C (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C003BF18 (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ??1WDFCXDEVICE_INIT@@QEAA@XZ @ 0x1C003FBFC (--1WDFCXDEVICE_INIT@@QEAA@XZ.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C004F1A4 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall WDFDEVICE_INIT::~WDFDEVICE_INIT(WDFDEVICE_INIT *this)
{
  FxPnpStateCallback *PnpStateCallbacks; // rcx
  FxPowerStateCallback *PowerStateCallbacks; // rcx
  FxPowerPolicyStateCallback *PowerPolicyStateCallbacks; // rcx
  FxString *DeviceName; // rcx
  FxString *DeviceID; // rcx
  FxString *InstanceID; // rcx
  FxString *ContainerID; // rcx
  unsigned int v9; // edx
  FxString *Sddl; // rcx
  FxIrpPreprocessInfo *PreprocessInfo; // rcx
  FxUserObject *CxContextObject; // rcx
  _LIST_ENTRY *p_CxDeviceInitListHead; // rsi
  WDFCXDEVICE_INIT *Flink; // rdi
  _LIST_ENTRY *v15; // rax

  PnpStateCallbacks = this->PnpPower.PnpStateCallbacks;
  if ( PnpStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)PnpStateCallbacks);
  PowerStateCallbacks = this->PnpPower.PowerStateCallbacks;
  if ( PowerStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)PowerStateCallbacks);
  PowerPolicyStateCallbacks = this->PnpPower.PowerPolicyStateCallbacks;
  if ( PowerPolicyStateCallbacks )
    FxPoolFree((FX_POOL_TRACKER *)PowerPolicyStateCallbacks);
  DeviceName = this->DeviceName;
  if ( DeviceName )
    DeviceName->DeleteObject(DeviceName);
  DeviceID = this->Pdo.DeviceID;
  if ( DeviceID )
    DeviceID->DeleteObject(DeviceID);
  InstanceID = this->Pdo.InstanceID;
  if ( InstanceID )
    InstanceID->DeleteObject(InstanceID);
  ContainerID = this->Pdo.ContainerID;
  if ( ContainerID )
    ContainerID->DeleteObject(ContainerID);
  FxDeviceText::_CleanupList(&this->Pdo.DeviceText);
  Sddl = this->Security.Sddl;
  if ( Sddl )
    Sddl->DeleteObject(Sddl);
  PreprocessInfo = this->PreprocessInfo;
  if ( PreprocessInfo )
    FxIrpPreprocessInfo::`scalar deleting destructor'(PreprocessInfo, v9);
  CxContextObject = this->CxContextObject;
  if ( CxContextObject )
    CxContextObject->DeleteObject(CxContextObject);
  p_CxDeviceInitListHead = &this->CxDeviceInitListHead;
  while ( 1 )
  {
    Flink = (WDFCXDEVICE_INIT *)p_CxDeviceInitListHead->Flink;
    if ( p_CxDeviceInitListHead->Flink == p_CxDeviceInitListHead )
      break;
    if ( Flink->ListEntry.Blink != p_CxDeviceInitListHead
      || (v15 = Flink->ListEntry.Flink, (WDFCXDEVICE_INIT *)Flink->ListEntry.Flink->Blink != Flink) )
    {
      __fastfail(3u);
    }
    p_CxDeviceInitListHead->Flink = v15;
    v15->Blink = p_CxDeviceInitListHead;
    Flink->ListEntry.Blink = (_LIST_ENTRY *)Flink;
    Flink->ListEntry.Flink = (_LIST_ENTRY *)Flink;
    WDFCXDEVICE_INIT::~WDFCXDEVICE_INIT(Flink);
    FxPoolFree((FX_POOL_TRACKER *)Flink);
  }
  FxCollectionInternal::Clear(&this->Pdo.CompatibleIDs);
  FxCollectionInternal::Clear(&this->Pdo.HardwareIDs);
}
