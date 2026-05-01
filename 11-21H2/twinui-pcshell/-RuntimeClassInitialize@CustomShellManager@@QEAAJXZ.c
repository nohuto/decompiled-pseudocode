/*
 * XREFs of ?RuntimeClassInitialize@CustomShellManager@@QEAAJXZ @ 0x18015FD74
 * Callers:
 *     ??$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18015FBBC (--$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CustomShellManager::RuntimeClassInitialize(CustomShellManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  _OWORD v4[2]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4[0] = IID_ICustomShellManager;
  v4[1] = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (CustomShellManager *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v4,
         1uLL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
