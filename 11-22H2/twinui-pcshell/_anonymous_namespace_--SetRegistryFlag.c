/*
 * XREFs of _anonymous_namespace_::SetRegistryFlag @ 0x180697CE8
 * Callers:
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x180241670 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void anonymous_namespace_::SetRegistryFlag()
{
  unsigned int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int lpData; // [rsp+58h] [rbp+20h] BYREF

  lpData = 1;
  v0 = RegSetKeyValueW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
         L"PackageRepairCompleted",
         4u,
         &lpData,
         4u);
  if ( v0 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x18A,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)v0);
}
