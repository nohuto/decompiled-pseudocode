/*
 * XREFs of ?IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ @ 0x1801DAEFC
 * Callers:
 *     ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x1801DAE6C (-IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool __fastcall CloudPCHelpers::IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled(CloudPCHelpers *this)
{
  unsigned int ValueW; // eax
  int v2; // eax
  unsigned int v4; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\CloudDesktop\\NodeValues",
             L"EnablePhysicalDeviceAccessOnErrorScreens",
             0x10u,
             0LL,
             &v6,
             &v7);
  if ( ValueW )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x62,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\cloudpccommon.h",
      (const char *)ValueW,
      v4);
    LOBYTE(v2) = 0;
  }
  else
  {
    return v6 == 1;
  }
  return v2;
}
