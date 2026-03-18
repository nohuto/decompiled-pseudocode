/*
 * XREFs of imp_WdfPdoInitAssignContainerID @ 0x1C0030DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F258 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

int __fastcall imp_WdfPdoInitAssignContainerID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *ContainerID)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  _FX_DRIVER_GLOBALS *v6; // rcx
  int result; // eax
  unsigned int _a1; // ebx
  unsigned __int16 v9; // r9
  FxString *v10; // rax
  FxString *v11; // rax
  FxPoolTypeOrPoolFlags v12; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !ContainerID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(v5, ContainerID);
    if ( result >= 0 )
    {
      if ( DeviceInit->InitType != FxDeviceInitTypePdo )
      {
        _a1 = -1073741808;
        v9 = 63;
LABEL_9:
        WPP_IFR_SF_D(v5, 2u, 0x12u, v9, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
        return _a1;
      }
      v10 = DeviceInit->Pdo.ContainerID;
      if ( v10 )
        return FxDuplicateUnicodeString(v10->m_Globals, ContainerID, &v10->m_UnicodeString);
      *(_QWORD *)&v12.UsePoolType = 0LL;
      v12.u.PoolFlags = 64LL;
      v11 = (FxString *)FxObjectHandleAllocCommon(v5, &v12, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
      if ( v11 )
      {
        FxString::FxString(v11, v5);
        DeviceInit->Pdo.ContainerID = v10;
        if ( v10 )
          return FxDuplicateUnicodeString(v10->m_Globals, ContainerID, &v10->m_UnicodeString);
      }
      else
      {
        DeviceInit->Pdo.ContainerID = 0LL;
      }
      _a1 = -1073741670;
      v9 = 64;
      goto LABEL_9;
    }
  }
  return result;
}
