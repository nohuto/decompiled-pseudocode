/*
 * XREFs of ?OnControlCenterVisibilityChanged@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAJPEAUIBaseExperienceManager@Experience@345@PEAUIVisibilityChangedEventArgs@8345@@Z @ 0x1800354A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnqueue@?$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA_NAEBUDispatcherQueueHandler@System@Windows@3@@Z @ 0x18003553C (-TryEnqueue@-$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@i.c)
 *     ?DispatcherQueue@?$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueController@System@Windows@winrt@@@impl@winrt@@QEBA?AU0System@Windows@3@XZ @ 0x180035584 (-DispatcherQueue@-$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueController.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::OnControlCenterVisibilityChanged(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        struct Windows::Internal::Shell::Experience::IBaseExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *a3)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = (_QWORD *)((char *)this + 264);
  if ( *v4 )
  {
    winrt::impl::consume_Windows_System_IDispatcherQueueController<winrt::Windows::System::IDispatcherQueueController>::DispatcherQueue(
      v4,
      &v8,
      a3);
    v5 = v8;
    if ( v8 )
    {
      v6 = operator new(0x18uLL);
      v6[1] = this;
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      *((_DWORD *)v6 + 4) = 1;
      *v6 = &winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_26f44cd4480ca991a21fc760d40b2af7_>::`vftable';
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
  return 0LL;
}
