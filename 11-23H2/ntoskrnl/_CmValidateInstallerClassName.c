/*
 * XREFs of _CmValidateInstallerClassName @ 0x14078787C
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14069AE50 (_PnpDispatchInstallerClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140787CA4 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceName @ 0x1407C59B8 (_CmGetDeviceInterfaceName.c)
 *     _PnpDispatchInterfaceClass @ 0x1407C5DA0 (_PnpDispatchInterfaceClass.c)
 *     _CmClassSubkeyCallback @ 0x140841B80 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x140787DDC (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
