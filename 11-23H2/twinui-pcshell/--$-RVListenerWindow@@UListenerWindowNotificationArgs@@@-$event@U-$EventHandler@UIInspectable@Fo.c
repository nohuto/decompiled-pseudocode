/*
 * XREFs of ??$?RVListenerWindow@@UListenerWindowNotificationArgs@@@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBVListenerWindow@@AEBUListenerWindowNotificationArgs@@@Z @ 0x1800441D4
 * Callers:
 *     ?WndProc@ListenerWindow@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800DA080 (-WndProc@ListenerWindow@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??$invoke@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@VListenerWindow@@UListenerWindowNotificationArgs@@@impl@winrt@@YA_NAEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBVListenerWindow@@AEBUListenerWindowNotificationArgs@@@Z @ 0x18004428C (--$invoke@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@VLi.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800D9EC8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 *     ?remove@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801AEBD4 (-remove@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winr.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::operator()<ListenerWindow,ListenerWindowNotificationArgs>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // r9
  volatile signed __int32 *v8; // rsi
  PVOID *v9; // rdi
  __int64 v10; // rsi
  PVOID v11; // rax
  volatile signed __int32 *v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v12 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v7 = *(volatile signed __int32 **)a1;
  v8 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v12 = *(volatile signed __int32 **)a1;
    _InterlockedExchangeAdd(v7, 1u);
    v8 = v7;
    v6 = v12;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
  if ( v8 )
  {
    v9 = (PVOID *)(v8 + 2);
    v10 = (__int64)&v8[2 * *((unsigned int *)v8 + 1) + 2];
    while ( v9 != (PVOID *)v10 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,ListenerWindow,ListenerWindowNotificationArgs>(
                               v9,
                               a2,
                               a3) )
      {
        v11 = WINRT_IMPL_EncodePointer(*v9);
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::remove(
          a1,
          v11);
      }
      ++v9;
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v12);
}
