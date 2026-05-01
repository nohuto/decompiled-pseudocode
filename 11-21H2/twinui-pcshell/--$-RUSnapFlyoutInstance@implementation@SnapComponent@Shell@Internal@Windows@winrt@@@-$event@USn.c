/*
 * XREFs of ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1805B6F68
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805B9AB0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ?OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805B9F80 (-OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ?OnDismissRequested@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805BA180 (-OnDismissRequested@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 *     ?OnPointerEntered@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUPointerRoutedEventArgs@Input@Xaml@UI@67@@Z @ 0x1805BA2B0 (-OnPointerEntered@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 *     ?OnPointerExited@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUPointerRoutedEventArgs@Input@Xaml@UI@67@@Z @ 0x1805BA2F0 (-OnPointerExited@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     WINRT_IMPL_EncodePointer @ 0x1801892E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 *     ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1805B2074 (-remove@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@Q.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1805B253C (-unconditional_release_ref@-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@She.c)
 *     ??$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@@impl@winrt@@YA_NAEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@@Z @ 0x1805B7F94 (--$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInst.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::operator()<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  unsigned int *v4; // rbx
  unsigned int *Ptr; // r8
  unsigned int *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID *v10; // rdi
  __int64 v11; // rsi
  PVOID v12; // rax
  unsigned int *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (unsigned int *)a1->Ptr;
  v6 = 0LL;
  if ( a1->Ptr )
  {
    v13 = (unsigned int *)a1->Ptr;
    _InterlockedExchangeAdd((volatile signed __int32 *)Ptr, 1u);
    v6 = Ptr;
    v4 = v13;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v6 )
  {
    v10 = (PVOID *)(v6 + 2);
    v11 = (__int64)&v6[2 * v6[1] + 2];
    while ( v10 != (PVOID *)v11 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(
                               v10,
                               a2) )
      {
        v12 = WINRT_IMPL_EncodePointer(*v10);
        winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::remove(
          (__int64)a1,
          v12);
      }
      ++v10;
    }
  }
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::unconditional_release_ref(
      &v13,
      v7,
      v8,
      v9);
}
