/*
 * XREFs of ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemTimeOutInfoChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemTimeOutInfoChangedEventArgs@4561@@Z @ 0x180709590
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18027F1A4 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemTimeOutInfoChan.c)
 *     ??$invoke@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSystemDataModel@factory_implementation@Shell@Internal@34@URemoteSystemTimeOutInfoChangedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSystemDataModel@factory_implementation@Shell@Internal@41@AEBURemoteSystemTimeOutInfoChangedEventArgs@7841@@Z @ 0x18070BE78 (--$invoke@U-$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@.c)
 *     ?remove@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18071C4F4 (-remove@-$event@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v6; // rbx
  unsigned int *v7; // r9
  unsigned int *v8; // rsi
  PVOID *v9; // rdi
  __int64 v10; // rsi
  PVOID v11; // rax
  unsigned int *v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v12 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v7 = *(unsigned int **)a1;
  v8 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v12 = *(unsigned int **)a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)v7, 1u);
    v8 = v7;
    v6 = v12;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
  if ( v8 )
  {
    v9 = (PVOID *)(v8 + 2);
    v10 = (__int64)&v8[2 * v8[1] + 2];
    while ( v9 != (PVOID *)v10 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>,winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>(
                               v9,
                               a2,
                               a3) )
      {
        v11 = WINRT_IMPL_EncodePointer(*v9);
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::remove(
          a1,
          v11);
      }
      ++v9;
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(&v12);
}
