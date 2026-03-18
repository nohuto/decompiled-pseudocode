/*
 * XREFs of _CmValidateDeviceContainerName @ 0x14076D788
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x14076CE48 (_CmGetDeviceContainerIdFromBase.c)
 *     _PnpDispatchDeviceContainer @ 0x14076D160 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14076D6D4 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmContainerListGenericObjectCallback @ 0x140860090 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     PnpIsValidGuidString @ 0x1406E87E8 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
