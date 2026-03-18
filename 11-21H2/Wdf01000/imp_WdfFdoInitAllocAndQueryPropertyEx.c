/*
 * XREFs of imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C0062250
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C002A7B0 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfFdoInitAllocAndQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory,
        unsigned int *Type)
{
  _FX_DRIVER_GLOBALS *v10; // rbx
  unsigned int v11; // edi
  __int64 result; // rax
  _FX_DRIVER_GLOBALS *v13; // rcx
  unsigned int _a1; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v10 = DeviceInit->DriverGlobals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(v10, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_DDd(
      v10,
      (unsigned __int8)DeviceInit,
      0xCu,
      0x31u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      DeviceProperty->Size,
      24,
      -1073741820);
    return v11;
  }
  v13 = DeviceInit->DriverGlobals;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(v13, retaddr);
  *PropertyMemory = 0LL;
  result = FxVerifierCheckIrqlLevel(v13, 0);
  if ( (int)result >= 0 )
  {
    if ( v10->FxVerifierOn )
    {
      if ( FxLibraryGlobals.VfCheckNxPoolType )
        FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, v10->Tag);
    }
    result = FxValidateObjectAttributes(v10, PropertyMemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType )
      {
        v11 = -1073741808;
        WPP_IFR_SF_d(v10, 2u, 0x12u, 0x32u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
        return v11;
      }
      return FxDevice::_AllocAndQueryPropertyEx(
               v10,
               DeviceInit,
               0LL,
               DeviceProperty,
               _a1,
               PoolType,
               (_FX_DRIVER_GLOBALS *)PropertyMemoryAttributes,
               PropertyMemory,
               Type);
    }
  }
  return result;
}
