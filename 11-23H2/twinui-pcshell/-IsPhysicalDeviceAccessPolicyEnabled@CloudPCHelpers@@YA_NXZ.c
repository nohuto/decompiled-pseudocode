/*
 * XREFs of ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x1801DAE6C
 * Callers:
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x1801DAD44 (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ @ 0x1802776CC (-DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ.c)
 * Callees:
 *     ?IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ @ 0x1801DAEFC (-IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

char __fastcall CloudPCHelpers::IsPhysicalDeviceAccessPolicyEnabled(CloudPCHelpers *this)
{
  char v1; // bl
  unsigned int ValueW; // eax
  CloudPCHelpers *v3; // rcx
  unsigned int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v8 = 4;
  v7 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\CloudDesktop\\NodeValues",
             L"EnablePhysicalDeviceAccessOnCtrlAltDel",
             0x10u,
             0LL,
             &v7,
             &v8);
  if ( ValueW )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x56,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\cloudpccommon.h",
      (const char *)ValueW,
      v5);
  }
  else if ( v7 == 1 )
  {
    return 1;
  }
  if ( CloudPCHelpers::IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled(v3) )
    return 1;
  return v1;
}
