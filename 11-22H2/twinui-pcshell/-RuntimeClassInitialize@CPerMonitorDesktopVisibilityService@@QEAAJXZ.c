/*
 * XREFs of ?RuntimeClassInitialize@CPerMonitorDesktopVisibilityService@@QEAAJXZ @ 0x180109B1C
 * Callers:
 *     ??$MakeAndInitialize@VCPerMonitorDesktopVisibilityService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180108C98 (--$MakeAndInitialize@VCPerMonitorDesktopVisibilityService@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::RuntimeClassInitialize(
        CPerMonitorDesktopVisibilityService *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v4 = *(_OWORD *)&SID_PerMonitorDesktopVisibilityService.Revision;
  v5 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (CPerMonitorDesktopVisibilityService *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v4,
         1u);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
      (const char *)(unsigned int)v1,
      v4[0]);
  return v2;
}
