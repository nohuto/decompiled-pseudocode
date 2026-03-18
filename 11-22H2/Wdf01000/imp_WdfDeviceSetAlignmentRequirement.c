/*
 * XREFs of imp_WdfDeviceSetAlignmentRequirement @ 0x1C00332D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void __fastcall imp_WdfDeviceSetAlignmentRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned int AlignmentRequirement)
{
  FxDeviceBase *pDeviceBase; // [rsp+30h] [rbp+8h] BYREF

  pDeviceBase = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDeviceBase);
  pDeviceBase->m_DeviceObject.m_DeviceObject->AlignmentRequirement = AlignmentRequirement;
}
