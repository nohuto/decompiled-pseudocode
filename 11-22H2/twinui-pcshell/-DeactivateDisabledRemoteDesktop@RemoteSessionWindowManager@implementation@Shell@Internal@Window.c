/*
 * XREFs of ?DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18072110C
 * Callers:
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x180705B84 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$convert@$00U_GUID@@@guid@winrt@@CA?AU01@AEBU_GUID@@@Z @ 0x180088608 (--$convert@$00U_GUID@@@guid@winrt@@CA-AU01@AEBU_GUID@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18072FE68 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DeactivateDisabledRemoteDesktop(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this,
        const struct winrt::hstring *a2)
{
  PSRWLOCK *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[8]; // [rsp+28h] [rbp-40h] BYREF
  std::_Ref_count_base *v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v9[16]; // [rsp+48h] [rbp-20h] BYREF

  v3 = (PSRWLOCK *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 104LL))(
                     *((_QWORD *)this + 5),
                     v6);
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(*v3);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v4 = v5;
  if ( v5 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 32LL))(v5, &v8);
    winrt::guid::convert<1,_GUID>((__int64)v9, (int *)&v8);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DeactivateRemoteDesktop(
      this,
      (const struct winrt::guid *)v9);
    v4 = v5;
  }
  if ( v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v5);
}
