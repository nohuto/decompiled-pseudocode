/*
 * XREFs of ??$?RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@?$event@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowsTracker@implementation@Shell@Internal@Windows@1@AEBUWindowId@UI@61@@Z @ 0x180724EFC
 * Callers:
 *     ?CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1807255CC (-CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@.c)
 * Callees:
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 *     ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18047EDF4 (-remove@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@US.c)
 *     ??$invoke@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@UWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@impl@winrt@@YA_NAEBU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@1@AEBUWindowsTracker@implementation@Shell@Internal@41@AEBUWindowId@UI@41@@Z @ 0x1807251B4 (--$invoke@U-$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@UWindowsTracker.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::UI::WindowId>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v6; // rbx
  unsigned int *Ptr; // r9
  unsigned int *v8; // rsi
  PVOID *v9; // rdi
  __int64 v10; // rsi
  PVOID v11; // rax
  unsigned int *v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v12 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (unsigned int *)a1->Ptr;
  v8 = 0LL;
  if ( a1->Ptr )
  {
    v12 = (unsigned int *)a1->Ptr;
    _InterlockedExchangeAdd((volatile signed __int32 *)Ptr, 1u);
    v8 = Ptr;
    v6 = v12;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v8 )
  {
    v9 = (PVOID *)(v8 + 2);
    v10 = (__int64)&v8[2 * v8[1] + 2];
    while ( v9 != (PVOID *)v10 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>,winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::UI::WindowId>(
                               v9,
                               a2,
                               a3) )
      {
        v11 = WINRT_IMPL_EncodePointer(*v9);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
          (__int64)a1,
          v11);
      }
      ++v9;
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(&v12);
}
