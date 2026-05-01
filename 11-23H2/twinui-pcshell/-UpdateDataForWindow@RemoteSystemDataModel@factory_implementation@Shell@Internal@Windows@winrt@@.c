/*
 * XREFs of ?UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180719C80
 * Callers:
 *     ?UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180707A58 (-UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindow.c)
 *     ?UpdateDataForWindow@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@@Z @ 0x180719C20 (-UpdateDataForWindow@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x180711B68 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_KAEBUhstring@param@3@@Z @ 0x1807139A0 (-Insert@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@Fou.c)
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 *     ?SaveWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x180728350 (-SaveWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEB.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateDataForWindow(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  struct winrt::impl::hstring_header *v4; // rdx
  unsigned int v5; // r8d
  signed int v6; // eax
  winrt::impl *v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h]
  volatile signed __int32 *v9; // [rsp+40h] [rbp-20h] BYREF
  char v10; // [rsp+90h] [rbp+30h] BYREF
  struct winrt::impl::hstring_header *v11; // [rsp+98h] [rbp+38h] BYREF
  char *v12; // [rsp+A0h] [rbp+40h]

  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetDataFromFileMappings(
    (__int64)this,
    (__int64)&v7,
    (__int64 *)a2);
  v11 = winrt::impl::duplicate_hstring(v7, v4, v5);
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  v12 = (char *)this + 128;
  v10 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 19) + 64LL))(
         *((_QWORD *)this + 19),
         *(_QWORD *)a2,
         &v10);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  if ( !v10 )
  {
    v8 = 100;
    v9 = (volatile signed __int32 *)v11;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::Insert(
      (__int64 *)this + 19,
      a2,
      &v9);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveWindow(
      *((PSRWLOCK *)this + 4),
      a2,
      (const struct winrt::hstring *)&v11);
  }
  if ( this != (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)-128LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 16);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateModifiedPropertiesAndNotify(
    this,
    a2,
    (const struct RemoteSystemData::RemoteSystem *)&v7,
    0);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v11);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v7);
}
