/*
 * XREFs of ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C003D170
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C002CE74 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     imp_WdfFdoInitQueryPropertyEx @ 0x1C0030210 (imp_WdfFdoInitQueryPropertyEx.c)
 *     imp_WdfDeviceQueryPropertyEx @ 0x1C0033030 (imp_WdfDeviceQueryPropertyEx.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C003ED24 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C003F218 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 */

int __fastcall FxDevice::_QueryPropertyEx(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        void *PropertyData,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        PVOID ResultLength,
        unsigned int *PropertyType,
        unsigned int *DriverGlobals_0)
{
  unsigned int *v9; // r14
  unsigned int *v11; // r15
  int result; // eax
  _DEVICE_OBJECT *PhysicalDevice; // rcx
  NTSTATUS DevicePropertyData; // ebx
  const void *ObjectHandleUnchecked; // rax
  unsigned int propType[4]; // [rsp+40h] [rbp-28h] BYREF

  v9 = PropertyType;
  v11 = DriverGlobals_0;
  propType[0] = 0;
  BufferLength = 0;
  *PropertyType = 0;
  *v11 = 0;
  result = FxDevice::_ValidateOpenKeyParams(DriverGlobals, DeviceInit, Device);
  if ( result >= 0 )
  {
    if ( DeviceInit )
    {
      PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
    }
    else
    {
      PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
      if ( !PhysicalDevice )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Device);
        DevicePropertyData = -1073741436;
        WPP_IFR_SF_qd(
          DriverGlobals,
          2u,
          0x12u,
          0x18u,
          WPP_FxDeviceKm_cpp_Traceguids,
          ObjectHandleUnchecked,
          -1073741436);
        return DevicePropertyData;
      }
    }
    DevicePropertyData = IoGetDevicePropertyData(
                           PhysicalDevice,
                           *((const DEVPROPKEY **)PropertyData + 1),
                           *((_DWORD *)PropertyData + 4),
                           0,
                           PropertyBuffer,
                           ResultLength,
                           &BufferLength,
                           propType);
    if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
    {
      *v9 = BufferLength;
      *v11 = propType[0];
    }
    else
    {
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x19u, WPP_FxDeviceKm_cpp_Traceguids, DevicePropertyData);
    }
    return DevicePropertyData;
  }
  return result;
}
