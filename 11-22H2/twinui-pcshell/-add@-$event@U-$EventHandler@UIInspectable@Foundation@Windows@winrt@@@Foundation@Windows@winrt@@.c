/*
 * XREFs of ?add@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x1800B1C7C
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E8760 (-subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAU.c)
 *     ?add_NetworkStateChanged@?$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtils@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1807346E0 (-add_NetworkStateChanged@-$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows.c)
 * Callees:
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1800B1D88 (--$exchange@U-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@F.c)
 *     ??4?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B1DBC (--4-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@.c)
 *     ??$make_event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800B1E00 (--$make_event_array@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 *     ??$make_agile_delegate@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x1800B1E80 (--$make_agile_delegate@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windo.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800D9EC8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=2
PVOID *__fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::add(
        RTL_SRWLOCK *a1,
        PVOID *a2,
        __int64 a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rdx
  _DWORD *Ptr; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  winrt::Windows::Foundation::IUnknown *v12; // r12
  int v13; // r15d
  char *v14; // r14
  __int64 v15; // [rsp+70h] [rbp+48h] BYREF
  __int64 v16; // [rsp+78h] [rbp+50h] BYREF
  __int64 v17; // [rsp+80h] [rbp+58h]
  RTL_SRWLOCK *v18; // [rsp+88h] [rbp+60h] BYREF

  v17 = a3;
  *a2 = 0LL;
  v16 = 0LL;
  v5 = a1 + 2;
  v18 = a1 + 2;
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  if ( a1->Ptr )
    v6 = (unsigned int)(*((_DWORD *)a1->Ptr + 1) + 1);
  else
    v6 = 1LL;
  winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(
    &v15,
    v6);
  Ptr = a1->Ptr;
  v8 = v15;
  if ( a1->Ptr )
  {
    v12 = (winrt::Windows::Foundation::IUnknown *)(v15 + 8);
    v13 = Ptr[1];
    v14 = (char *)(Ptr + 2);
    if ( v13 )
    {
      while ( 1 )
      {
        winrt::Windows::Foundation::IUnknown::operator=(v12);
        v12 = (winrt::Windows::Foundation::IUnknown *)((char *)v12 + 8);
        if ( !--v13 )
          break;
        v14 += 8;
      }
    }
  }
  v9 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>((winrt::Windows::Foundation::IUnknown *)&v18);
  winrt::Windows::Foundation::IUnknown::operator=(v8 + 8LL * *(unsigned int *)(v8 + 4), v9);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  *a2 = WINRT_IMPL_EncodePointer(*(PVOID *)(v8 + 8LL * *(unsigned int *)(v8 + 4)));
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  v10 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>>(
          &v18,
          a1,
          &v15);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::operator=(
    &v16,
    v10);
  if ( v18 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v18);
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v15 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v15);
  ReleaseSRWLockExclusive_0(v5);
  if ( v16 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v16);
  return a2;
}
