/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654
 * Callers:
 *     imp_WdfRegistryAssignValue @ 0x1C0012E80 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfRegistryQueryULong @ 0x1C0014D20 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfRegistryQueryValue @ 0x1C0015400 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00156A0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C001E730 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x1C001F460 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027270 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfDriverCreate @ 0x1C0027650 (imp_WdfDriverCreate.c)
 *     FxIoTargetValidateOpenParams @ 0x1C002CEA8 (FxIoTargetValidateOpenParams.c)
 *     imp_WdfRegistryQueryString @ 0x1C002CF70 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C002D190 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C002F4B0 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfStringCreate @ 0x1C002F6E0 (imp_WdfStringCreate.c)
 *     imp_WdfDeviceInitAssignName @ 0x1C0030810 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0030930 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0030A30 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0030EF0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00312A0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00313A0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C00320D0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C00323A0 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0032450 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfRegistryAssignULong @ 0x1C0033080 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignString @ 0x1C0033830 (imp_WdfRegistryAssignString.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C00343A8 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C00348A0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C00631A0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C006FFD0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C00701E0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C0070460 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0070630 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C00708F0 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C0070B80 (imp_WdfRegistryRemoveValue.c)
 * Callees:
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxValidateUnicodeString(_FX_DRIVER_GLOBALS *FxDriverGlobals, const _UNICODE_STRING *String)
{
  int _a2; // r8d
  int MaximumLength; // eax

  _a2 = String->Length;
  if ( (_a2 & 1) != 0 )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxValidateFunctions_hpp_Traceguids_0, String, _a2, 0xC000000D);
  }
  else
  {
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0 )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        0xC000000D);
    }
    else if ( (_WORD)MaximumLength && !String->Buffer )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        0xC000000D);
    }
    else
    {
      if ( (unsigned __int16)_a2 <= (unsigned __int16)MaximumLength )
        return 0LL;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)String,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        _a2,
        MaximumLength,
        -1073741811);
    }
  }
  return 3221225485LL;
}
