/*
 * XREFs of ?WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x18002ED28
 * Callers:
 *     _lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator() @ 0x18002ED70 (_lambda_f5c7a19be5cc201203fc8ae0f408e847_--operator().c)
 *     ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002F2B0 (-LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Int.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WinUICohabitationFunctions::WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper(
        HMODULE *this)
{
  __int64 (*ProcAddress)(void); // rax
  const char *v2; // r9
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ProcAddress = GetProcAddress(*this, "WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegistered");
  if ( !ProcAddress )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x31,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      v2);
  v3 = ProcAddress();
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\WinUICohabitationFunctions.h",
      (const char *)(unsigned int)v3,
      v4);
}
