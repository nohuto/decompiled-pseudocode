/*
 * XREFs of ?GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z @ 0x18006EB2C
 * Callers:
 *     ?IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ @ 0x18006EC18 (-IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ.c)
 *     ?IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ @ 0x18006ECA0 (-IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800E9DF4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

int __fastcall DevicePostureHelpers::GetPreconfiguredConvertibilityKey(DevicePostureHelpers *this, unsigned int *a2)
{
  unsigned int ValueW; // eax
  unsigned int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"System\\CurrentControlSet\\Control\\PriorityControl",
             L"ConvertibilityEnabled",
             0x10u,
             0LL,
             &v8,
             &v7);
  if ( ValueW )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x67,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
             (const char *)ValueW,
             v5);
  *(_DWORD *)this = v8;
  return 0;
}
