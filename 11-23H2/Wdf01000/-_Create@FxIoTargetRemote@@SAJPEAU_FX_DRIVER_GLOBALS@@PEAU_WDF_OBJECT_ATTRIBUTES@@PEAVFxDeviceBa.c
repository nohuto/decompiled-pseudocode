/*
 * XREFs of ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C005563C
 * Callers:
 *     imp_WdfIoTargetCreate @ 0x1C0051180 (imp_WdfIoTargetCreate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00183B0 (WPP_IFR_SF_qqqd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0039624 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0054A08 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDeviceBase *Device,
        FxIoTargetRemote **Target)
{
  void *ParentObject; // rdx
  FxDeviceBase *v9; // rax
  unsigned int v10; // ebx
  FxObject *v11; // r8
  const void *_a2; // rax
  __int64 _a3; // rdx
  FxIoTargetRemote *v14; // rax
  FxIoTarget *v15; // rax
  FxIoTargetRemote *v16; // rbx
  signed int _a1; // eax
  unsigned int v18; // esi
  FxPoolTypeOrPoolFlags v20; // [rsp+50h] [rbp-38h] BYREF
  FxObject *pParent; // [rsp+98h] [rbp+10h] BYREF
  void *hTarget; // [rsp+A8h] [rbp+20h] BYREF

  pParent = 0LL;
  *Target = 0LL;
  if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v9 = FxDeviceBase::_SearchForDevice(pParent, 0LL);
    if ( !v9 )
    {
      v10 = -1073741808;
      WPP_IFR_SF_qd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xAu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        -1073741808);
      return v10;
    }
    if ( v9 != Device )
    {
      FxObject::GetObjectHandleUnchecked(Device);
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v11);
      v10 = -1073741808;
      WPP_IFR_SF_qqqd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xBu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return v10;
    }
  }
  else
  {
    pParent = Device;
  }
  *(_QWORD *)&v20.UsePoolType = 0LL;
  v20.u.PoolFlags = 64LL;
  v14 = (FxIoTargetRemote *)FxObjectHandleAllocCommon(
                              FxDriverGlobals,
                              &v20,
                              0x1F8uLL,
                              0,
                              Attributes,
                              0,
                              FxObjectTypeExternal);
  if ( !v14 || (FxIoTargetRemote::FxIoTargetRemote(v14, FxDriverGlobals), (v16 = (FxIoTargetRemote *)v15) == 0LL) )
  {
    v10 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xEu, 0xCu, WPP_FxIoTargetRemote_cpp_Traceguids, 0xC000009A);
    return v10;
  }
  v15->m_Driver = Device->m_Driver;
  v15->m_DeviceBase = Device;
  v15->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  Device->AddIoTarget(Device, v15);
  _a1 = FxObject::Commit(v16, Attributes, &hTarget, (_FX_DRIVER_GLOBALS *)pParent, 1u);
  v18 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xEu, 0xDu, WPP_FxIoTargetRemote_cpp_Traceguids, _a1);
    FxObject::ClearEvtCallbacks(v16);
    v16->DeleteObject(v16);
  }
  else
  {
    *Target = v16;
  }
  return v18;
}
