/*
 * XREFs of ??$?0URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUIInspectable@Foundation@45@AEBI@Z@?$EventHandler@I@Foundation@Windows@winrt@@QEAA@$$QEAU?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@3@P8RemoteSessionWindowManager@implementation@Shell@Internal@23@EAAXAEBUIInspectable@123@AEBI@Z@Z @ 0x18027A1D4
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::EventHandler<unsigned int>::EventHandler<unsigned int>(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  _QWORD *v9; // [rsp+50h] [rbp+8h]

  v4 = *a2;
  *a2 = 0LL;
  v7 = v4;
  v8 = *a3;
  v9 = operator new(0x28uLL);
  v5 = v7;
  v7 = 0LL;
  v9[1] = v5;
  *((_OWORD *)v9 + 1) = v8;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v9 + 8) = 1;
  *v9 = &winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_59a2c452c266c39cf2d30705a14a3598_>::`vftable';
  *a1 = v9;
  if ( v7 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v7);
  return a1;
}
