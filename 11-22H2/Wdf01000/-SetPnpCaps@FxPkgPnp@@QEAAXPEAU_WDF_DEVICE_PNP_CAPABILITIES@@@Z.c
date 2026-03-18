/*
 * XREFs of ?SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z @ 0x1C0075C08
 * Callers:
 *     imp_WdfDeviceSetPnpCapabilities @ 0x1C00335B0 (imp_WdfDeviceSetPnpCapabilities.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SetPnpCaps(FxPkgPnp *this, _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  _WDF_TRI_STATE LockSupported; // r9d
  int v3; // r8d
  int v5; // r10d
  _WDF_TRI_STATE EjectSupported; // ecx
  int v7; // ecx
  _WDF_TRI_STATE Removable; // r9d
  int v9; // ecx
  int v10; // eax
  _WDF_TRI_STATE DockDevice; // r9d
  int v12; // ecx
  int v13; // eax
  _WDF_TRI_STATE UniqueID; // r9d
  int v15; // ecx
  int v16; // eax
  _WDF_TRI_STATE SilentInstall; // r9d
  int v18; // ecx
  int v19; // eax
  _WDF_TRI_STATE SurpriseRemovalOK; // r9d
  int v21; // ecx
  int v22; // eax
  _WDF_TRI_STATE HardwareDisabled; // r9d
  int v24; // ecx
  int v25; // eax
  _WDF_TRI_STATE NoDisplayInUI; // r9d
  int v27; // ecx
  unsigned int Address; // eax
  int v29; // ecx
  unsigned int UINumber; // eax

  LockSupported = PnpCapabilities->LockSupported;
  v3 = 0;
  if ( LockSupported )
  {
    if ( LockSupported == WdfTrue )
      v5 = 1;
    else
      v5 = 2;
  }
  else
  {
    v5 = 0;
  }
  EjectSupported = PnpCapabilities->EjectSupported;
  if ( EjectSupported )
  {
    if ( EjectSupported == WdfTrue )
      v7 = 4;
    else
      v7 = 8;
  }
  else
  {
    v7 = 0;
  }
  Removable = PnpCapabilities->Removable;
  v9 = v5 | v7;
  if ( Removable )
  {
    if ( Removable == WdfTrue )
      v10 = 16;
    else
      v10 = 32;
  }
  else
  {
    v10 = 0;
  }
  DockDevice = PnpCapabilities->DockDevice;
  v12 = v10 | v9;
  if ( DockDevice )
  {
    if ( DockDevice == WdfTrue )
      v13 = 64;
    else
      v13 = 128;
  }
  else
  {
    v13 = 0;
  }
  UniqueID = PnpCapabilities->UniqueID;
  v15 = v13 | v12;
  if ( UniqueID )
  {
    if ( UniqueID == WdfTrue )
      v16 = 256;
    else
      v16 = 512;
  }
  else
  {
    v16 = 0;
  }
  SilentInstall = PnpCapabilities->SilentInstall;
  v18 = v16 | v15;
  if ( SilentInstall )
  {
    if ( SilentInstall == WdfTrue )
      v19 = 1024;
    else
      v19 = 2048;
  }
  else
  {
    v19 = 0;
  }
  SurpriseRemovalOK = PnpCapabilities->SurpriseRemovalOK;
  v21 = v19 | v18;
  if ( SurpriseRemovalOK )
  {
    if ( SurpriseRemovalOK == WdfTrue )
      v22 = 4096;
    else
      v22 = 0x2000;
  }
  else
  {
    v22 = 0;
  }
  HardwareDisabled = PnpCapabilities->HardwareDisabled;
  v24 = v22 | v21;
  if ( HardwareDisabled )
  {
    if ( HardwareDisabled == WdfTrue )
      v25 = 0x4000;
    else
      v25 = 0x8000;
  }
  else
  {
    v25 = 0;
  }
  NoDisplayInUI = PnpCapabilities->NoDisplayInUI;
  v27 = v25 | v24;
  if ( NoDisplayInUI )
  {
    v3 = 0x20000;
    if ( NoDisplayInUI == WdfTrue )
      v3 = 0x10000;
  }
  Address = PnpCapabilities->Address;
  v29 = v3 | v27;
  if ( Address != -1 )
    this->m_PnpCapsAddress = Address;
  UINumber = PnpCapabilities->UINumber;
  if ( UINumber != -1 )
    this->m_PnpCapsUINumber = UINumber;
  this->m_PnpCaps.Value = v29;
}
