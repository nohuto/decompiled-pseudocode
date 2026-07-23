/*
 * XREFs of _CmValidateDeviceContainerName @ 0x14079B570
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x14079AC70 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14079B1A0 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B254 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x1408600E0 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x1403DBB30 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x140787FCC (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
