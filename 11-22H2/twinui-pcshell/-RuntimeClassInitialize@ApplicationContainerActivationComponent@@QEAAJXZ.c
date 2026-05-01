/*
 * XREFs of ?RuntimeClassInitialize@ApplicationContainerActivationComponent@@QEAAJXZ @ 0x1806320DC
 * Callers:
 *     ??$MakeAndInitialize@VApplicationContainerActivationComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18062DC58 (--$MakeAndInitialize@VApplicationContainerActivationComponent@@UIUnknown@@$$V@Details@WRL@Micros.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall ApplicationContainerActivationComponent::RuntimeClassInitialize(
        ApplicationContainerActivationComponent *this)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-38h]
  _OWORD v4[2]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4[0] = GUID_ae76144d_7798_45b0_8065_d2af280de3d9;
  v4[1] = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (ApplicationContainerActivationComponent *)((char *)this + 40),
         (__int64)v4,
         1uLL);
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x90,
      (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
