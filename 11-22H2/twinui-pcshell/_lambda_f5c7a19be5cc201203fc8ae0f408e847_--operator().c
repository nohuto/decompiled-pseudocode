/*
 * XREFs of _lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator() @ 0x18002ED70
 * Callers:
 *     ?Current@XamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AU1345678@XZ @ 0x180066930 (-Current@XamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     ?WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x18002EC98 (-WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ?WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x18002ECE0 (-WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ?WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x18002ED28 (-WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper@WinUICohabitationFunctions@@.c)
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002F0C4 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x1801106AC (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator()(_QWORD *a1)
{
  HMODULE *v2; // rax
  HMODULE *v3; // rax
  _QWORD *v4; // rbx
  HMODULE *v5; // rax
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp+10h]

  v2 = (HMODULE *)WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper(v2);
  v3 = (HMODULE *)WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_RegisterWASDKThreadWrapper(v3);
  BYTE1(v6) = 1;
  v4 = operator new(0x60uLL);
  v7 = v4;
  memset_0(v4, 0, 0x60uLL);
  winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::XamlApplication_WASDK((winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK *)v4);
  *v4 = &winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::`vftable';
  v6 = v4 + 3;
  winrt::Windows::Foundation::IUnknown::operator=(*a1 + 40LL, &v6);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  if ( dword_18098F990 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18098F990);
    if ( dword_18098F990 == -1 )
    {
      qword_18098F998 = (__int64)CreateThread(
                                   0LL,
                                   0LL,
                                   (LPTHREAD_START_ROUTINE)WindowsXamlManagerThread::ThreadProc,
                                   &qword_18098F998,
                                   0,
                                   0LL);
      Init_thread_footer(&dword_18098F990);
    }
  }
  v5 = (HMODULE *)WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_UnregisterWASDKThreadWrapper(v5);
}
