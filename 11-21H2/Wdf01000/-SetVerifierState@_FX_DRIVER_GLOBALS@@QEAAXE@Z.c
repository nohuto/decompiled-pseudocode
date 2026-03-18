/*
 * XREFs of ?SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z @ 0x1C00287D8
 * Callers:
 *     FxRegistrySettingsInitialize @ 0x1C0027EF4 (FxRegistrySettingsInitialize.c)
 *     FxAllocateDriverGlobals @ 0x1C002861C (FxAllocateDriverGlobals.c)
 * Callees:
 *     <none>
 */

void __fastcall _FX_DRIVER_GLOBALS::SetVerifierState(_FX_DRIVER_GLOBALS *this, unsigned __int8 State)
{
  this->FxVerifierOn = State;
  this->FxVerifierHandle = State;
  this->FxVerifierIO = State;
  this->FxVerifierLock = State;
  this->FxPoolTrackingOn = State;
  this->FxVerifyOn = State;
  this->FxVerifierDbgBreakOnError = State;
  this->FxVerifierDbgBreakOnDeviceStateError = 0;
  if ( State )
    this->Public.DriverFlags |= 0xCu;
}
