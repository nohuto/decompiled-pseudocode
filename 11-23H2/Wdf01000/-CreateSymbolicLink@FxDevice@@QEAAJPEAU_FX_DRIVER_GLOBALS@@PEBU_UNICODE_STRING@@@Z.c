/*
 * XREFs of ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003C320
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00327E0 (imp_WdfDeviceCreateSymbolicLink.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0019200 (WPP_IFR_SF_qddd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C0031480 (--1FxAutoString@@QEAA@XZ.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall FxDevice::CreateSymbolicLink(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *SymbolicLinkName)
{
  bool v3; // zf
  _DEVICE_OBJECT *SafePhysicalDevice; // r14
  NTSTATUS DeviceProperty; // ebx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // r9
  const void *_a2; // rax
  int _a3; // edx
  int _a4; // r8d
  __int16 v15; // dx
  ULONG Tag; // ecx
  void *v17; // rax
  FX_POOL **v18; // rax
  FxAutoString *p_pdoName; // r14
  FxAutoString pdoName; // [rsp+50h] [rbp-20h] BYREF
  __m128i v22; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int length; // [rsp+A0h] [rbp+30h] BYREF

  v3 = this->m_DeviceName.Buffer == 0LL;
  pdoName = 0LL;
  if ( v3 )
  {
    length = 0;
    if ( this->m_Legacy || (SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this)) == 0LL )
    {
      DeviceProperty = -1073741436;
LABEL_7:
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v11 = v10;
LABEL_25:
      WPP_IFR_SF_qd(
        FxDriverGlobals,
        2u,
        0x12u,
        v11,
        WPP_FxDeviceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        DeviceProperty);
      goto LABEL_26;
    }
    DeviceProperty = IoGetDeviceProperty(SafePhysicalDevice, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &length);
    if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
      goto LABEL_7;
    if ( length > 0xFFFF )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      DeviceProperty = -1073741675;
      WPP_IFR_SF_qddd(FxDriverGlobals, _a3, 0x12u, 0xFu, WPP_FxDeviceKm_cpp_Traceguids, _a2, _a3, _a4, -1073741675);
      goto LABEL_26;
    }
    if ( !length )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      DeviceProperty = -1073741436;
      v11 = v15 + 16;
      goto LABEL_25;
    }
    v3 = FxDriverGlobals->FxPoolTrackingOn == 0;
    Tag = FxDriverGlobals->Tag;
    v22.m128i_i64[0] = 0LL;
    v22.m128i_i64[1] = 256LL;
    if ( v3 )
      v17 = 0LL;
    else
      v17 = retaddr;
    v18 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v22, length, Tag, v17);
    if ( !v18 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      DeviceProperty = -1073741670;
      v11 = 17;
      goto LABEL_25;
    }
    pdoName.m_UnicodeString.Buffer = (wchar_t *)v18;
    DeviceProperty = IoGetDeviceProperty(
                       SafePhysicalDevice,
                       DevicePropertyPhysicalDeviceObjectName,
                       length,
                       v18,
                       &length);
    if ( DeviceProperty < 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v11 = 18;
      goto LABEL_25;
    }
    p_pdoName = &pdoName;
    pdoName.m_UnicodeString.MaximumLength = length;
    pdoName.m_UnicodeString.Length = length - 2;
  }
  else
  {
    p_pdoName = (FxAutoString *)&this->m_DeviceName;
  }
  DeviceProperty = FxDuplicateUnicodeString(FxDriverGlobals, SymbolicLinkName, &this->m_SymbolicLinkName);
  if ( DeviceProperty < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v11 = 19;
    goto LABEL_25;
  }
  DeviceProperty = IoCreateSymbolicLink(&this->m_SymbolicLinkName, &p_pdoName->m_UnicodeString);
  if ( DeviceProperty < 0 )
  {
    FxPoolFree((FX_POOL_TRACKER *)this->m_SymbolicLinkName.Buffer);
    this->m_SymbolicLinkName = 0LL;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v11 = 20;
    goto LABEL_25;
  }
LABEL_26:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)DeviceProperty;
}
