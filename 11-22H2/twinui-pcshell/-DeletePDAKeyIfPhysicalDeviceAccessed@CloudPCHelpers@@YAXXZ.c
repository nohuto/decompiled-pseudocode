/*
 * XREFs of ?DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ @ 0x1802776CC
 * Callers:
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801AC940 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x1801DAC98 (-IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ.c)
 *     ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x1801DAE6C (-IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?IsPhysicalDeviceAccessed@CloudPCHelpers@@YA_NXZ @ 0x1802782E8 (-IsPhysicalDeviceAccessed@CloudPCHelpers@@YA_NXZ.c)
 */

void __fastcall CloudPCHelpers::DeletePDAKeyIfPhysicalDeviceAccessed(CloudPCHelpers *this)
{
  CloudPCHelpers *v1; // rcx
  CloudPCHelpers *v2; // rcx
  unsigned int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( CloudPCHelpers::IsBootToCloudModeRegistryCheck(this)
    && CloudPCHelpers::IsPhysicalDeviceAccessPolicyEnabled(v1)
    && CloudPCHelpers::IsPhysicalDeviceAccessed(v2) )
  {
    v3 = RegDeleteKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess", 0, 0);
    if ( v3 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xAB,
        (int)"onecoreuap\\internal\\shell\\inc\\private\\CloudPCCommon.h",
        (const char *)v3);
  }
}
