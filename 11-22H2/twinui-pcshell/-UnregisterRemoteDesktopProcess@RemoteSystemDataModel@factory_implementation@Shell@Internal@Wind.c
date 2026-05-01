/*
 * XREFs of ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180719A68
 * Callers:
 *     ?UnregisterRemoteDesktopProcess@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHI@Z @ 0x180707970 (-UnregisterRemoteDesktopProcess@-$produce@UCloudPCComponent@implementation@Shell@Internal@Window.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UProcessInfoChangedEventArgs@2345@@?$event@U?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBUProcessInfoChangedEventArgs@4561@@Z @ 0x180709314 (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UProcessInfoCha.c)
 *     ??$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@AEAI_N@winrt@@YA?A_PAEAUhstring@0@AEAI$$QEA_N@Z @ 0x18070C1DC (--$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@A_ea_18070C1DC.c)
 *     ?ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18070FA5C (-ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@@Z @ 0x18071185C (-GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180718844 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBI@Z @ 0x180719524 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@IUhstring@winrt@@@Collections@F.c)
 *     ?DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x180727B30 (-DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UnregisterRemoteDesktopProcess(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        unsigned int a2)
{
  unsigned int v2; // esi
  RTL_SRWLOCK *v4; // r14
  struct winrt::impl::hstring_header *v5; // rdx
  unsigned int v6; // r8d
  char v7; // al
  winrt::hstring *CorrelationId; // rax
  __int64 v9; // r8
  bool v10; // bl
  signed int v11; // eax
  winrt::impl *v12; // [rsp+28h] [rbp-20h] BYREF
  char v13; // [rsp+30h] [rbp-18h]
  volatile signed __int32 *v14; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+40h] BYREF
  winrt::impl *v16; // [rsp+90h] [rbp+48h] BYREF
  __int64 v17; // [rsp+98h] [rbp+50h] BYREF

  v15 = a2;
  v2 = a2;
  v4 = (RTL_SRWLOCK *)((char *)this + 128);
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,unsigned int,winrt::hstring>::TryLookup(
    (__int64 *)this + 32,
    (__int64)&v12,
    &v15);
  v7 = v13;
  if ( v13 )
  {
    v16 = winrt::impl::duplicate_hstring(v12, v5, v6);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession(this, 0);
    CorrelationId = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
                      (RTL_SRWLOCK *)this,
                      (winrt::hstring *)&v14,
                      (__int64 *)&v16);
    v10 = !winrt::operator==((__int64)CorrelationId, (__int64)&LocaleName, v9);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
    if ( v10 )
      winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::ClearCorrelationId(
        (RTL_SRWLOCK *)this,
        (const struct winrt::hstring *)&v16);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteProcessId(
      *((PSRWLOCK *)this + 4),
      v2,
      (const struct winrt::hstring *)&v16);
    if ( !*((_DWORD *)this + 12) )
    {
      LOBYTE(v14) = 0;
      winrt::make<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::hstring &,unsigned int &,bool>(
        &v17,
        &v16,
        &v15,
        &v14);
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>(
        (RTL_SRWLOCK *)this + 34,
        (__int64)this,
        (__int64)&v17);
      if ( v17 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
      v2 = v15;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 32) + 88LL))(*((_QWORD *)this + 32), v2);
    if ( v11 < 0 )
      winrt::throw_hresult(v11);
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 66) = 0;
    *((_WORD *)this + 134) = 0;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v16);
    v7 = v13;
  }
  if ( v7 )
    winrt::hstring::~hstring((void **)&v12);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
