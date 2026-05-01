/*
 * XREFs of ?CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18070F66C
 * Callers:
 *     ?CleanUpRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x18070F7B8 (-CleanUpRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUh.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UAppInfo@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1806FC2A4 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UAppInfo@ApplicationMo.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@I@Z @ 0x180711658 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowId@UI@Windows@.c)
 *     ?ProviderWindows@?$consume_Windows_Internal_Shell_IRemoteSystem@UIRemoteSystem@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180716410 (-ProviderWindows@-$consume_Windows_Internal_Shell_IRemoteSystem@UIRemoteSystem@Shell@Internal@Wi.c)
 *     ?Remove@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_K@Z @ 0x180717794 (-Remove@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@Fou.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180719620 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@URemoteSystem@S.c)
 *     ?DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x180727C48 (-DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::CleanUpRemoteSystem(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const struct winrt::hstring *a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // edi
  int v6; // r14d
  signed int v7; // eax
  _QWORD v8[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+80h] [rbp+40h] BYREF
  __int64 v10; // [rsp+88h] [rbp+48h] BYREF
  char v11; // [rsp+90h] [rbp+50h] BYREF
  RTL_SRWLOCK *v12; // [rsp+98h] [rbp+58h]

  v4 = (RTL_SRWLOCK *)((char *)this + 128);
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  v12 = v4;
  v8[0] = *(_QWORD *)a2;
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::TryLookup(
    (char *)this + 144,
    &v10,
    v8);
  if ( v10 )
  {
    winrt::impl::consume_Windows_Internal_Shell_IRemoteSystem<winrt::Windows::Internal::Shell::IRemoteSystem>::ProviderWindows(
      &v10,
      &v9);
    v5 = 0;
    v6 = winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::AppInfo>,winrt::Windows::ApplicationModel::AppInfo>::Size(&v9);
    while ( v5 != v6 )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetAt(
        &v9,
        &v11,
        v5);
      winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::Remove(
        (char *)this + 152,
        &v11);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteWindow(
        *((PSRWLOCK *)this + 4),
        (const struct winrt::Windows::UI::WindowId *)&v11,
        a2);
      ++v5;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 88LL))(
           *((_QWORD *)this + 18),
           *(_QWORD *)a2);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  }
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
