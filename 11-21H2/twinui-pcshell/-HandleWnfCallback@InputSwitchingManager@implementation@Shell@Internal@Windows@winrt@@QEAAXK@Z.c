/*
 * XREFs of ?HandleWnfCallback@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXK@Z @ 0x1805E15AC
 * Callers:
 *     ??R?$__func@V_lambda_95041c143dcb54cbe9aca31f7b97b726_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x1805E0F50 (--R-$__func@V_lambda_95041c143dcb54cbe9aca31f7b97b726_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK.c)
 * Callees:
 *     ?TryEnqueue@?$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA_NAEBUDispatcherQueueHandler@System@Windows@3@@Z @ 0x18003553C (-TryEnqueue@-$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@i.c)
 *     ?DispatcherQueue@?$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueController@System@Windows@winrt@@@impl@winrt@@QEBA?AU0System@Windows@3@XZ @ 0x180035584 (-DispatcherQueue@-$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueController.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::HandleWnfCallback(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        int a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  char *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  char *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = (__int64 *)((char *)this + 264);
  if ( *v4 )
  {
    winrt::impl::consume_Windows_System_IDispatcherQueueController<winrt::Windows::System::IDispatcherQueueController>::DispatcherQueue(
      v4,
      &v8);
    v5 = v8;
    if ( v8 )
    {
      *(_QWORD *)&v7 = this;
      DWORD2(v7) = a2;
      v6 = (char *)operator new(0x20uLL);
      *(_OWORD *)(v6 + 8) = v7;
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      *((_DWORD *)v6 + 6) = 1;
      *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_c4bd4ad648bfd42f94cd1d5bf0ba8c80_>::`vftable';
      v9 = v6;
      winrt::impl::consume_Windows_System_IDispatcherQueue<winrt::Windows::System::IDispatcherQueue>::TryEnqueue(
        &v8,
        &v9);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
      v5 = v8;
    }
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  }
}
