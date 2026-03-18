/*
 * XREFs of imp_WdfPdoInitAddHardwareID @ 0x1C002F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0014A1C (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027568 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddHardwareID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *HardwareID)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 result; // rax
  FxString *v8; // rax
  __int64 v9; // rax
  FX_POOL *v10; // rsi
  int _a1; // edi
  unsigned __int16 v12; // r9
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !HardwareID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v5, HardwareID);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType == FxDeviceInitTypePdo )
      {
        *(_QWORD *)&v13.UsePoolType = 0LL;
        v13.u.PoolFlags = 64LL;
        v8 = (FxString *)FxObjectHandleAllocCommon(v5, &v13, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
        if ( v8 )
        {
          FxString::FxString(v8, v5);
          v10 = (FX_POOL *)v9;
          if ( v9 )
          {
            _a1 = FxDuplicateUnicodeString(*(_FX_DRIVER_GLOBALS **)(v9 + 16), HardwareID, (_UNICODE_STRING *)(v9 + 104));
            if ( _a1 >= 0 )
              _a1 = !FxCollectionInternal::Add(&DeviceInit->Pdo.HardwareIDs, v5, v10) ? 0xC0000001 : 0;
            (*(void (__fastcall **)(FX_POOL *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)&v10->NonPagedLock.m_DbgFlagIsInitialized
                                                                      + 16LL))(
              v10,
              0LL,
              0LL,
              0LL);
            return (unsigned int)_a1;
          }
        }
        _a1 = -1073741670;
        v12 = 60;
      }
      else
      {
        _a1 = -1073741808;
        v12 = 59;
      }
      WPP_IFR_SF_d(v5, 2u, 0x12u, v12, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
      return (unsigned int)_a1;
    }
  }
  return result;
}
