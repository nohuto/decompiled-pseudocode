/*
 * XREFs of ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C0068F90
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C00290A4 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C0015030 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0060714 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     ??0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0068F24 (--0FxCompanionTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 */

__int64 __fastcall FxDevice::AllocateCompanionTarget(FxDevice *this, FxCompanionTarget **DeviceCompanion)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  FxCompanionTarget *v5; // rax
  unsigned __int16 v6; // r8
  FxCompanionTarget *v7; // rax
  FxCompanionTarget *v8; // rbx
  FxCompanionTarget *v9; // rbp
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  signed int _a2; // esi
  const void *_a1; // rax
  unsigned __int16 v13; // dx
  const void *ObjectHandleUnchecked; // rax
  FxPoolTypeOrPoolFlags v16; // [rsp+40h] [rbp-28h] BYREF

  p_m_Globals = &this->m_Globals;
  *(_QWORD *)&v16.UsePoolType = 0LL;
  v16.u.PoolFlags = 64LL;
  v5 = (FxCompanionTarget *)FxObjectHandleAllocCommon(this->m_Globals, &v16, 0xA0uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( !v5 )
  {
    v9 = 0LL;
    goto LABEL_7;
  }
  FxCompanionTarget::FxCompanionTarget(v5, *p_m_Globals, v6);
  v8 = v7;
  v9 = v7;
  if ( !v7 )
  {
LABEL_7:
    _a2 = -1073741670;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(*p_m_Globals, 2u, 0x12u, 0x1Du, WPP_FxDeviceKm_cpp_Traceguids, ObjectHandleUnchecked, 0xC000009A);
    goto LABEL_8;
  }
  v7->m_Device = this;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  _a2 = FxCompanionLibrary::LoadCompanion(
          FxLibraryGlobals.CompanionLibrary,
          v8->m_Globals,
          SafePhysicalDevice,
          &v8->IDeviceCompanionCallbacks,
          &v8->m_RdDeviceCompanion);
  if ( _a2 < 0 || (_a2 = FxObject::Commit(v8, 0LL, 0LL, this, 1u), _a2 < 0) )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(*p_m_Globals, 2u, 0x12u, v13, WPP_FxDeviceKm_cpp_Traceguids, _a1, _a2);
    FxObject::ClearEvtCallbacks(v8);
    v8->DeleteObject(v8);
    v9 = 0LL;
  }
LABEL_8:
  *DeviceCompanion = v9;
  return (unsigned int)_a2;
}
