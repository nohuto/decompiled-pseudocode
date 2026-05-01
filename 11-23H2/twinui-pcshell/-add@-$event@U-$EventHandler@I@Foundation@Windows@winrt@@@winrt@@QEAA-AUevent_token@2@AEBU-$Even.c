/*
 * XREFs of ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EBFC
 * Callers:
 *     ?add_ProcessDestroyed@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18027ED50 (-add_ProcessDestroyed@-$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIP.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$copy_n@PEAU?$EventHandler@I@Foundation@Windows@winrt@@IPEAU1234@@std@@YAPEAU?$EventHandler@I@Foundation@Windows@winrt@@PEAU1234@I0@Z @ 0x18027D618 (--$copy_n@PEAU-$EventHandler@I@Foundation@Windows@winrt@@IPEAU1234@@std@@YAPEAU-$EventHandler@I@.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x18027D8D0 (--$exchange@U-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@S.c)
 *     ??$make_agile_delegate@U?$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@I@Foundation@Windows@1@AEBU2341@@Z @ 0x18027DA58 (--$make_agile_delegate@U-$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@YA-AU-$EventHand.c)
 *     ??$make_event_array@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x18027DB0C (--$make_event_array@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@w.c)
 *     ??4?$com_ptr@U?$event_array@U?$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18027E0C0 (--4-$com_ptr@U-$event_array@U-$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEA.c)
 *     ?get_token@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EF1C (-get_token@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@AEBA-AUevent_token@2@AEBU.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18027F1A4 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemTimeOutInfoChan.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::add(
        RTL_SRWLOCK *a1,
        _QWORD *a2,
        __int64 *a3)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned int v7; // edx
  __int64 v8; // rdi
  winrt::Windows::Foundation::IUnknown *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF
  __int64 v14; // [rsp+58h] [rbp+38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+68h] [rbp+48h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v6 = a1 + 2;
  v15 = a1 + 2;
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  v7 = 1;
  if ( a1->Ptr )
    v7 = *((_DWORD *)a1->Ptr + 1) + 1;
  winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>(
    &v13,
    v7);
  v8 = v13;
  if ( a1->Ptr )
    std::copy_n<winrt::Windows::Foundation::EventHandler<unsigned int> *,unsigned int,winrt::Windows::Foundation::EventHandler<unsigned int> *>(
      (winrt::Windows::Foundation::IUnknown *)((char *)a1->Ptr + 8),
      *((_DWORD *)a1->Ptr + 1),
      (winrt::Windows::Foundation::IUnknown *)(v13 + 8));
  v9 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>>(
         (winrt::Windows::Foundation::IUnknown *)&v15,
         a3);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(v8 + 8LL * *(unsigned int *)(v8 + 4)),
    v9);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  *a2 = *(_QWORD *)winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::get_token(
                     v10,
                     &v15,
                     v8 + 8LL * *(unsigned int *)(v8 + 4));
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  v11 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>>(
          &v15,
          (__int64 *)a1,
          (__int64)&v13);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<unsigned int>>>::operator=(&v14, v11);
  if ( v15 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(&v15);
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v13 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(&v13);
  ReleaseSRWLockExclusive_0(v6);
  if ( v14 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref(&v14);
  return a2;
}
