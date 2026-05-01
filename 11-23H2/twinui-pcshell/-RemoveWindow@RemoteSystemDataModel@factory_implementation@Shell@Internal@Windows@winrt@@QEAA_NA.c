/*
 * XREFs of ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180717B68
 * Callers:
 *     ?RemoveWindow@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA_NAEBUWindowId@UI@56@@Z @ 0x180717D50 (-RemoveWindow@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA_NAEBUWindowI.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UAppInfo@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1806FC2A4 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UAppInfo@ApplicationMo.c)
 *     ?ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18070FA5C (-ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ?ProviderWindows@?$consume_Windows_Internal_Shell_IRemoteSystem@UIRemoteSystem@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180716410 (-ProviderWindows@-$consume_Windows_Internal_Shell_IRemoteSystem@UIRemoteSystem@Shell@Internal@Wi.c)
 *     ?Remove@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_K@Z @ 0x180717794 (-Remove@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@Fou.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180719620 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@URemoteSystem@S.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_K@Z @ 0x1807196A4 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@.c)
 *     ?DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x180727C48 (-DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     ?RemoveWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180729F68 (-RemoveWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoveWindow(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  RTL_SRWLOCK *v4; // rbx
  struct winrt::impl::hstring_header *v5; // rdx
  unsigned int v6; // r8d
  char v7; // al
  __int64 *v8; // rax
  bool v9; // si
  winrt::impl *v11; // [rsp+28h] [rbp-38h] BYREF
  char v12; // [rsp+30h] [rbp-30h]
  volatile signed __int32 *v13; // [rsp+38h] [rbp-28h] BYREF
  struct winrt::impl::hstring_header *v14; // [rsp+98h] [rbp+38h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 128);
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::TryLookup(
    (char *)this + 152,
    &v11,
    a2);
  v7 = v12;
  if ( v12 )
  {
    v14 = winrt::impl::duplicate_hstring(v11, v5, v6);
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::Remove(
      (_QWORD *)this + 19,
      a2);
    v13 = (volatile signed __int32 *)v14;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::TryLookup(
      (char *)this + 144,
      &v15,
      &v13);
    if ( v15 )
    {
      winrt::Windows::Internal::Shell::implementation::RemoteSystem::RemoveWindow(
        (winrt::Windows::Internal::Shell::implementation::RemoteSystem *)(v15 - 16),
        a2);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteWindow(
        *((PSRWLOCK *)this + 4),
        a2,
        (const struct winrt::hstring *)&v14);
      v8 = winrt::impl::consume_Windows_Internal_Shell_IRemoteSystem<winrt::Windows::Internal::Shell::IRemoteSystem>::ProviderWindows(
             &v15,
             &v16);
      v9 = !(unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::AppInfo>,winrt::Windows::ApplicationModel::AppInfo>::Size(v8)
        && !*((_DWORD *)this + 11);
      if ( v16 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
      if ( v9 )
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::ClearCorrelationId(
          (RTL_SRWLOCK *)this,
          (const struct winrt::hstring *)&v14);
      if ( v15 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v14);
      if ( v12 )
        winrt::hstring::~hstring((void **)&v11);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      return 1;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v14);
    v7 = v12;
  }
  if ( v7 )
    winrt::hstring::~hstring((void **)&v11);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0;
}
