/*
 * XREFs of ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C002ACCC
 * Callers:
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C002A310 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C002AC00 (imp_WdfDeviceOpenRegistryKey.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C0015030 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0015BCC (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C002AE5C (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall FxDevice::_OpenKey(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        ULONG DeviceInstanceKeyType,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  int result; // eax
  FxObject *v12; // rcx
  _DEVICE_OBJECT *PhysicalDevice; // rsi
  FxRegKey *v14; // rax
  FxObject *v15; // rax
  FxObject *v16; // rbx
  int v17; // edi
  const void *_a1; // rax
  void *hKey; // [rsp+40h] [rbp-38h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-30h] BYREF
  FxPoolTypeOrPoolFlags v21; // [rsp+50h] [rbp-28h] BYREF

  keyHandle = 0LL;
  hKey = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, KeyAttributes, 0);
  if ( result >= 0 )
  {
    result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
    if ( result >= 0 )
    {
      result = FxDevice::_ValidateOpenKeyParams(FxDriverGlobals, DeviceInit, Device);
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
            _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v12);
            v17 = -1073741436;
            WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDeviceKm_cpp_Traceguids, _a1, 0xC0000184);
            return v17;
          }
        }
        *(_QWORD *)&v21.UsePoolType = 0LL;
        v21.u.PoolFlags = 64LL;
        v14 = (FxRegKey *)FxObjectHandleAllocCommon(
                            FxDriverGlobals,
                            &v21,
                            0x78uLL,
                            0,
                            KeyAttributes,
                            0,
                            FxObjectTypeExternal);
        if ( !v14 )
          return -1073741670;
        FxRegKey::FxRegKey(v14, FxDriverGlobals);
        v16 = v15;
        if ( !v15 )
          return -1073741670;
        if ( Device )
          v15->m_DeviceBase = Device;
        v17 = FxObject::Commit(v15, (_FX_DRIVER_GLOBALS *)KeyAttributes, (void **)&keyHandle, 0LL, 1u);
        if ( v17 < 0
          || (v17 = IoOpenDeviceRegistryKey(PhysicalDevice, DeviceInstanceKeyType, DesiredAccess, &hKey), v17 < 0) )
        {
          FxObject::ClearEvtCallbacks(v16);
          v16->DeleteObject(v16);
        }
        else
        {
          *(_QWORD *)&v16[1].m_Type = hKey;
          *Key = keyHandle;
        }
        return v17;
      }
    }
  }
  return result;
}
