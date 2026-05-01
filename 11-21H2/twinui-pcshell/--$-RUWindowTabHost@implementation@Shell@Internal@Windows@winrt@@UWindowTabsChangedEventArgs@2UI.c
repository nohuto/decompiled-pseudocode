/*
 * XREFs of ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUWindowTabsChangedEventArgs@4UI@561@@Z @ 0x18001A154
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180019CFC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180019BE8 (-remove@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWind.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001A20C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 *     ??$invoke@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@UWindowTabHost@implementation@Shell@Internal@34@UWindowTabsChangedEventArgs@7UI@834@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@1@AEBUWindowTabHost@implementation@Shell@Internal@41@AEBUWindowTabsChangedEventArgs@7UI@841@@Z @ 0x18001A254 (--$invoke@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabs.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801892E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  PVOID v6; // rbx
  volatile signed __int32 *Ptr; // r9
  volatile signed __int32 *v8; // rsi
  PVOID *v9; // rdi
  __int64 v10; // rsi
  PVOID v11; // rax
  PVOID v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v12 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (volatile signed __int32 *)a1->Ptr;
  v8 = 0LL;
  if ( a1->Ptr )
  {
    v12 = a1->Ptr;
    _InterlockedExchangeAdd(Ptr, 1u);
    v8 = Ptr;
    v6 = v12;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v8 )
  {
    v9 = (PVOID *)(v8 + 2);
    v10 = (__int64)&v8[2 * *((unsigned int *)v8 + 1) + 2];
    while ( v9 != (PVOID *)v10 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>,winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>(
                               v9,
                               a2,
                               a3) )
      {
        v11 = WINRT_IMPL_EncodePointer(*v9);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::remove(
          a1,
          v11);
      }
      ++v9;
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v12);
}
