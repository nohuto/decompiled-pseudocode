/*
 * XREFs of ?add@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18015154C
 * Callers:
 *     ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180153E30 (-subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAU.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800F4B7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801514C8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x180151658 (--$exchange@U-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@F.c)
 *     ??4?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18015168C (--4-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@.c)
 *     ??$make_agile_delegate@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x1801516D0 (--$make_agile_delegate@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windo.c)
 *     ??$make_event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x180151768 (--$make_event_array@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801892E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=2
PVOID *__fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::add(
        RTL_SRWLOCK *a1,
        PVOID *a2,
        __int64 a3)
{
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rdx
  _DWORD *Ptr; // rax
  __int64 v8; // rbx
  winrt::Windows::Foundation::IUnknown *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  winrt::Windows::Foundation::IUnknown *v21; // r12
  int v22; // r15d
  winrt::Windows::Foundation::IUnknown *v23; // r14
  __int64 v24; // [rsp+70h] [rbp+48h] BYREF
  __int64 v25; // [rsp+78h] [rbp+50h] BYREF
  __int64 v26; // [rsp+80h] [rbp+58h]
  RTL_SRWLOCK *v27; // [rsp+88h] [rbp+60h] BYREF

  v26 = a3;
  *a2 = 0LL;
  v25 = 0LL;
  v5 = a1 + 2;
  v27 = a1 + 2;
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  if ( a1->Ptr )
    v6 = (unsigned int)(*((_DWORD *)a1->Ptr + 1) + 1);
  else
    v6 = 1LL;
  winrt::impl::make_event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(
    &v24,
    v6);
  Ptr = a1->Ptr;
  v8 = v24;
  if ( a1->Ptr )
  {
    v21 = (winrt::Windows::Foundation::IUnknown *)(v24 + 8);
    v22 = Ptr[1];
    v23 = (winrt::Windows::Foundation::IUnknown *)(Ptr + 2);
    if ( v22 )
    {
      while ( 1 )
      {
        winrt::Windows::Foundation::IUnknown::operator=(v21, v23);
        v21 = (winrt::Windows::Foundation::IUnknown *)((char *)v21 + 8);
        if ( !--v22 )
          break;
        v23 = (winrt::Windows::Foundation::IUnknown *)((char *)v23 + 8);
      }
    }
  }
  v9 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>((winrt::Windows::Foundation::IUnknown *)&v27);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(v8 + 8LL * *(unsigned int *)(v8 + 4)),
    v9);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  *a2 = WINRT_IMPL_EncodePointer(*(PVOID *)(v8 + 8LL * *(unsigned int *)(v8 + 4)));
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  v10 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>>(
          &v27,
          a1,
          &v24);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::operator=(
    &v25,
    v10);
  if ( v27 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(
      (__int64 *)&v27,
      v11,
      v12,
      v13);
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v24 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(
      &v24,
      v14,
      v15,
      v16);
  ReleaseSRWLockExclusive_0(v5);
  if ( v25 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(
      &v25,
      v17,
      v18,
      v19);
  return a2;
}
