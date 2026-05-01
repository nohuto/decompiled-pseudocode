/*
 * XREFs of ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x1801106AC
 * Callers:
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002E2C8 (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x18002E800 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 *     _lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator() @ 0x18002ED70 (_lambda_f5c7a19be5cc201203fc8ae0f408e847_--operator().c)
 *     ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002F2B0 (-LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Int.c)
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x18007FE54 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 *     ?OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@67@@Z @ 0x18010FBA4 (-OnLaunched@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXU.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x1801FAFF0 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 *     wil::details::lambda_call__lambda_c150d498e477500fab2efa2e3399f645___::_lambda_call__lambda_c150d498e477500fab2efa2e3399f645___ @ 0x1804FD0B8 (wil--details--lambda_call__lambda_c150d498e477500fab2efa2e3399f645___--_lambda_call__lambda_c150.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
HMODULE *WinUICohabitationFunctions::Instance(void)
{
  HMODULE *v0; // rbx
  HMODULE *v2; // rdi

  AcquireSRWLockExclusive(&WinUICohabitationFunctions::s_lock);
  v0 = (HMODULE *)WinUICohabitationFunctions::s_instance;
  if ( !WinUICohabitationFunctions::s_instance )
  {
    v0 = (HMODULE *)operator new(8uLL);
    *v0 = LoadLibraryExW(L"WinUICohabitation.dll", 0LL, 0x800u);
    v2 = (HMODULE *)WinUICohabitationFunctions::s_instance;
    WinUICohabitationFunctions::s_instance = v0;
    if ( v2 )
    {
      if ( *v2 )
        FreeLibrary(*v2);
      operator delete(v2);
      v0 = (HMODULE *)WinUICohabitationFunctions::s_instance;
    }
  }
  ReleaseSRWLockExclusive(&WinUICohabitationFunctions::s_lock);
  return v0;
}
