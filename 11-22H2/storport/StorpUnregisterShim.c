/*
 * XREFs of StorpUnregisterShim @ 0x1C00AB234
 * Callers:
 *     DllUnload @ 0x1C0064D60 (DllUnload.c)
 * Callees:
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 */

__int64 StorpUnregisterShim()
{
  int v0; // r9d
  int v1; // eax
  __int64 result; // rax

  v0 = KseUnregisterShim(&SrbShim, 0LL, 0LL);
  if ( v0 < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_d7a4465d56553371f6360018b92f43e1_Traceguids,
      v0);
  }
  v1 = KseUnregisterShim(&DeviceIdShim, 0LL, 0LL);
  if ( v1 < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xEu,
      (__int64)&WPP_d7a4465d56553371f6360018b92f43e1_Traceguids,
      v1);
  }
  result = KseUnregisterShim(&ATADeviceIdShim, 0LL, 0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    return WPP_SF_d(
             (__int64)WPP_GLOBAL_Control->AttachedDevice,
             0xFu,
             (__int64)&WPP_d7a4465d56553371f6360018b92f43e1_Traceguids,
             result);
  }
  return result;
}
