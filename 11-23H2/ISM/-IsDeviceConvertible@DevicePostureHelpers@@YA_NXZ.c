/*
 * XREFs of ?IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ @ 0x18005D010
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18011DD40 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?EvaluateConvertibility@Postures@InputTraceLogging@@SAXK_NK0@Z @ 0x18005C614 (-EvaluateConvertibility@Postures@InputTraceLogging@@SAXK_NK0@Z.c)
 *     ?GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z @ 0x18005CE9C (-GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z.c)
 *     ?HasCSMStateChanged@DevicePostureHelpers@@YA_NXZ @ 0x18005CF20 (-HasCSMStateChanged@DevicePostureHelpers@@YA_NXZ.c)
 *     ?IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ @ 0x18005CF88 (-IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ.c)
 *     ?SavePhysicalConvertibility@DevicePostureHelpers@@YAJK@Z @ 0x18005D3E8 (-SavePhysicalConvertibility@DevicePostureHelpers@@YAJK@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DAE94 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

char __fastcall DevicePostureHelpers::IsDeviceConvertible(DevicePostureHelpers *this)
{
  char v1; // bl
  unsigned int ValueW; // eax
  unsigned int *v3; // rdx
  DevicePostureHelpers *v4; // rcx
  int v5; // edi
  bool IsConvertibilitySelfIdentified; // al
  unsigned int v7; // edx
  DevicePostureHelpers *v8; // rcx
  char v9; // al
  char HasCSMStateChanged; // al
  DevicePostureHelpers *v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  DWORD v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v16 = 4;
  v15 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleChassis",
             L"ConvertibleChassis",
             0x10u,
             0LL,
             &v17,
             &v16);
  if ( ValueW )
  {
    v5 = 0;
    if ( wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0xAD,
           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
           (const char *)ValueW,
           v13) < 0 )
    {
      IsConvertibilitySelfIdentified = DevicePostureHelpers::IsConvertibilitySelfIdentified(v4, (__int64)v3);
      v5 = IsConvertibilitySelfIdentified;
      DevicePostureHelpers::SavePhysicalConvertibility((DevicePostureHelpers *)IsConvertibilitySelfIdentified, v7);
    }
  }
  else
  {
    v5 = v17;
  }
  if ( DevicePostureHelpers::GetPreconfiguredConvertibilityKey((DevicePostureHelpers *)&v15, v3) < 0 )
  {
    HasCSMStateChanged = DevicePostureHelpers::HasCSMStateChanged(v8);
    InputTraceLogging::Postures::EvaluateConvertibility(v5, 0, 0, HasCSMStateChanged);
    if ( v5 || DevicePostureHelpers::HasCSMStateChanged(v12) )
      return 1;
    return v1;
  }
  else
  {
    v9 = DevicePostureHelpers::HasCSMStateChanged(v8);
    InputTraceLogging::Postures::EvaluateConvertibility(v5, 1, v15, v9);
    return v15 != 0;
  }
}
