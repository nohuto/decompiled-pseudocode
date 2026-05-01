/*
 * XREFs of ?RuntimeClassInitialize@PerMonitorShellPositionerManager@@QEAAJXZ @ 0x1800EF9D8
 * Callers:
 *     ??$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801A073C (--$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall PerMonitorShellPositionerManager::RuntimeClassInitialize(PerMonitorShellPositionerManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v4 = GUID_ddd1282a_db1a_46e0_8622_309920263baf;
  v5 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (PerMonitorShellPositionerManager *)((char *)this + 24),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v4,
         1u);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\permonitorshellpositionermanager.cpp",
    (const char *)(unsigned int)v1,
    v4[0]);
  return v2;
}
