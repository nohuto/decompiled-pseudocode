/*
 * XREFs of ?add@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@2@@Z @ 0x1801A4104
 * Callers:
 *     ?add_SearchBoxPlacementMarginChanged@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1801A24C0 (-add_SearchBoxPlacementMarginChanged@-$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk.c)
 * Callees:
 *     ??$make_event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x18001A4FC (--$make_event_array@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001F7FC (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$copy_n@PEAU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@IPEAU1234@@std@@YAPEAU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@PEAU1234@I0@Z @ 0x1801A3838 (--$copy_n@PEAU-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedE.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1801A389C (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@wi.c)
 *     ??$make_agile_delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@1@AEBU2341@@Z @ 0x1801A3B58 (--$make_agile_delegate@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspecta.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801A3D20 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIIns.c)
 *     ?get_token@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@2@@Z @ 0x1801A439C (-get_token@-$event@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>::add(
        RTL_SRWLOCK *a1,
        _QWORD *a2,
        void (__fastcall ****a3)(_QWORD, __int64 *, __int64 *))
{
  RTL_SRWLOCK *v6; // rdi
  unsigned int v7; // edx
  unsigned int *v8; // rbx
  winrt::Windows::Foundation::IUnknown *v9; // rax
  __int64 v10; // rcx
  unsigned int **v11; // rax
  unsigned int *v13; // [rsp+50h] [rbp+30h] BYREF
  unsigned int *v14; // [rsp+58h] [rbp+38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+68h] [rbp+48h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v6 = a1 + 2;
  v15 = a1 + 2;
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  v7 = 1;
  if ( a1->Ptr )
    v7 = *((_DWORD *)a1->Ptr + 1) + 1;
  winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>(
    &v13,
    v7);
  v8 = v13;
  if ( a1->Ptr )
    std::copy_n<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs> *,unsigned int,winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs> *>(
      (winrt::Windows::Foundation::IUnknown *)((char *)a1->Ptr + 8),
      *((_DWORD *)a1->Ptr + 1),
      (winrt::Windows::Foundation::IUnknown *)(v13 + 2));
  v9 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>(
         (winrt::Windows::Foundation::IUnknown *)&v15,
         a3);
  winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)&v8[2 * v8[1]], v9);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  *a2 = *(_QWORD *)winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>::get_token(
                     v10,
                     &v15,
                     &v8[2 * v8[1]]);
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  v11 = (unsigned int **)std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>>(
                           &v15,
                           (__int64 *)a1,
                           (__int64)&v13);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::operator=(
    &v14,
    v11);
  if ( v15 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref((unsigned int **)&v15);
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v13 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v13);
  ReleaseSRWLockExclusive_0(v6);
  if ( v14 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v14);
  return a2;
}
