/*
 * XREFs of _CmValidateDevicePanelName @ 0x140829E48
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x140829DB0 (_PnpDispatchDevicePanel.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A66700 (_CmGetDevicePanelRegKeyPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x14082B5BC (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmValidateDevicePanelName(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  GUID Guid; // [rsp+28h] [rbp-20h] BYREF

  Guid = 0LL;
  result = CmSplitDevicePanelId(a2, &Guid);
  if ( (int)result < 0 )
    return 3221225523LL;
  return result;
}
