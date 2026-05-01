/*
 * XREFs of ??$?RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@?$event@U?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEB$$T@Z @ 0x1805083D4
 * Callers:
 *     ?UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x18051B9B8 (-UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 * Callees:
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 *     ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18047EDF4 (-remove@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@US.c)
 *     ??$invoke@U?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@impl@winrt@@YA_NAEBU?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEB$$T@Z @ 0x18050B4DC (--$invoke@U-$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UI.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Foundation::IInspectable>>::operator()<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::nullptr_t>(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  unsigned int *v4; // rbx
  unsigned int *Ptr; // r8
  unsigned int *v6; // rsi
  PVOID *v7; // rdi
  __int64 v8; // rsi
  PVOID v9; // rax
  unsigned int *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (unsigned int *)a1->Ptr;
  v6 = 0LL;
  if ( a1->Ptr )
  {
    v10 = (unsigned int *)a1->Ptr;
    _InterlockedExchangeAdd((volatile signed __int32 *)Ptr, 1u);
    v6 = Ptr;
    v4 = v10;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v6 )
  {
    v7 = (PVOID *)(v6 + 2);
    v8 = (__int64)&v6[2 * v6[1] + 2];
    while ( v7 != (PVOID *)v8 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Foundation::IInspectable>,SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::nullptr_t>(
                               v7,
                               a2) )
      {
        v9 = WINRT_IMPL_EncodePointer(*v7);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
          (__int64)a1,
          v9);
      }
      ++v7;
    }
  }
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(&v10);
}
