/*
 * XREFs of ??$?RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUProcessTracker@implementation@Shell@Internal@Windows@1@AEBI@Z @ 0x18027D31C
 * Callers:
 *     ?CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z @ 0x18027E24C (-CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$EventHandler@I@Foundation@Windows@winrt@@UProcessTracker@implementation@Shell@Internal@34@I@impl@winrt@@YA_NAEBU?$EventHandler@I@Foundation@Windows@1@AEBUProcessTracker@implementation@Shell@Internal@41@AEBI@Z @ 0x18027D960 (--$invoke@U-$EventHandler@I@Foundation@Windows@winrt@@UProcessTracker@implementation@Shell@Inter.c)
 *     ?get_token@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EF1C (-get_token@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@AEBA-AUevent_token@2@AEBU.c)
 *     ?remove@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18027EFA4 (-remove@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18027F1A4 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemTimeOutInfoChan.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::operator()<winrt::Windows::Internal::Shell::implementation::ProcessTracker,unsigned int>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // r9
  volatile signed __int32 *v8; // rsi
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *token; // rax
  volatile signed __int32 *v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v7 = *(volatile signed __int32 **)a1;
  v8 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v13 = *(volatile signed __int32 **)a1;
    _InterlockedExchangeAdd(v7, 1u);
    v8 = v7;
    v6 = v13;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
  if ( v8 )
  {
    v9 = v8 + 2;
    v10 = (__int64)&v8[2 * *((unsigned int *)v8 + 1) + 2];
    while ( v9 != (volatile signed __int32 *)v10 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<unsigned int>,winrt::Windows::Internal::Shell::implementation::ProcessTracker,unsigned int>(
                               v9,
                               a2,
                               a3) )
      {
        token = (_QWORD *)winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::get_token(v11, &v14, v9);
        winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::remove(a1, *token);
      }
      v9 += 2;
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(&v13);
}
