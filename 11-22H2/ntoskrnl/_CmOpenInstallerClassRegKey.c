/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x140787D44
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14069AE50 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x14069B3FC (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14069B808 (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406C9CDC (_CmGetDeviceSoftwareKey.c)
 *     PpForEachDeviceInstanceDriver @ 0x1407CFCF8 (PpForEachDeviceInstanceDriver.c)
 *     PiCMOpenClassKey @ 0x140860768 (PiCMOpenClassKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14088161C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmCreateInstallerClassWorker @ 0x140A60FB0 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A63400 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140A67818 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A69D80 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x140787DF8 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 32, 0, a5, a6, a7, a8);
}
