/*
 * XREFs of ?add@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18067D8C0
 * Callers:
 *     ?add_DismissRequested@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18067DB90 (-add_DismissRequested@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 *     ?add_InstanceReady@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18067DC10 (-add_InstanceReady@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Win.c)
 *     ?add_InstanceShutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18067DD10 (-add_InstanceShutdown@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 *     ?add_PointerEntered@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18067DD90 (-add_PointerEntered@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Wi.c)
 *     ?add_PointerExited@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18067DE10 (-add_PointerExited@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x180678FB4 (--$exchange@U-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Wi.c)
 *     ??$make_agile_delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@1@AEBU234561@@Z @ 0x1806790D4 (--$make_agile_delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@i.c)
 *     ??$make_event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x18067929C (--$make_event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl.c)
 *     ??4?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180679F54 (--4-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18067EB20 (-unconditional_release_ref@-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@She.c)
 */

// Hidden C++ exception states: #wind=2
PVOID *__fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::add(
        RTL_SRWLOCK *a1,
        PVOID *a2,
        __int64 *a3)
{
  RTL_SRWLOCK *v5; // rbx
  unsigned int v6; // edx
  _DWORD *Ptr; // rax
  __int64 v8; // rdi
  winrt::Windows::Foundation::IUnknown *v9; // r12
  int v10; // r15d
  winrt::Windows::Foundation::IUnknown *v11; // r14
  winrt::Windows::Foundation::IUnknown *v12; // rax
  __int64 *v13; // rax
  __int64 v15; // [rsp+70h] [rbp+48h] BYREF
  __int64 v16; // [rsp+78h] [rbp+50h] BYREF
  __int64 *v17; // [rsp+80h] [rbp+58h]
  RTL_SRWLOCK *v18; // [rsp+88h] [rbp+60h] BYREF

  v17 = a3;
  *a2 = 0LL;
  v16 = 0LL;
  v5 = a1 + 2;
  v18 = a1 + 2;
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  if ( a1->Ptr )
    v6 = *((_DWORD *)a1->Ptr + 1) + 1;
  else
    v6 = 1;
  winrt::impl::make_event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>(&v15, v6);
  Ptr = a1->Ptr;
  v8 = v15;
  if ( a1->Ptr )
  {
    v9 = (winrt::Windows::Foundation::IUnknown *)(v15 + 8);
    v10 = Ptr[1];
    v11 = (winrt::Windows::Foundation::IUnknown *)(Ptr + 2);
    if ( v10 )
    {
      while ( 1 )
      {
        winrt::Windows::Foundation::IUnknown::operator=(v9, v11);
        v9 = (winrt::Windows::Foundation::IUnknown *)((char *)v9 + 8);
        if ( !--v10 )
          break;
        v11 = (winrt::Windows::Foundation::IUnknown *)((char *)v11 + 8);
      }
    }
  }
  v12 = winrt::impl::make_agile_delegate<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>(
          (winrt::Windows::Foundation::IUnknown *)&v18,
          v17);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(v8 + 8LL * *(unsigned int *)(v8 + 4)),
    v12);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  *a2 = WINRT_IMPL_EncodePointer(*(PVOID *)(v8 + 8LL * *(unsigned int *)(v8 + 4)));
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  v13 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>>(
          &v18,
          (__int64 *)a1,
          (__int64)&v15);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::operator=(
    &v16,
    v13);
  if ( v18 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::unconditional_release_ref(&v18);
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v15 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::unconditional_release_ref(&v15);
  ReleaseSRWLockExclusive_0(v5);
  if ( v16 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::unconditional_release_ref(&v16);
  return a2;
}
