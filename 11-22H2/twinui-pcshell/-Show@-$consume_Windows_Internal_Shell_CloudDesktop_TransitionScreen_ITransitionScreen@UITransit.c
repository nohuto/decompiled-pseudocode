/*
 * XREFs of ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_N@Z @ 0x18072E660
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180736440 (-ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXA.c)
 *     ?ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x180736970 (-ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_DWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
        _QWORD *a1,
        _DWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  signed int v8; // eax
  char v10; // [rsp+30h] [rbp-28h]

  *a2 = 0;
  v10 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64, char, _DWORD *))(*(_QWORD *)*a1 + 48LL))(
         *a1,
         *a3,
         *a4,
         *a5,
         *a6,
         a7,
         v10,
         a2);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  return a2;
}
