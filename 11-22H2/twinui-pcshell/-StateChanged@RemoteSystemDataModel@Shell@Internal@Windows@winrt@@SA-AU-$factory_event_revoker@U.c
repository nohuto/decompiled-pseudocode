/*
 * XREFs of ?StateChanged@RemoteSystemDataModel@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@5@Uauto_revoke_t@5@AEBU?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@45@@Z @ 0x1801A1760
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ??$as@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRemoteSystemDataModelStatics@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800B3CF4 (--$as@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Foundat.c)
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B4084 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::RemoteSystemDataModel::StateChanged(
        winrt::Windows::Foundation::IUnknown *this,
        __int64 a2,
        _QWORD *a3)
{
  char *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  char *v8; // rbx
  char *v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(&v10);
  v5 = v10;
  winrt::impl::as<winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v11,
    (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v10);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  v10 = 0LL;
  v6 = v11;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, char **))(*(_QWORD *)v11 + 64LL))(v11, *a3, &v10);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  v8 = v10;
  *(_QWORD *)this = v6;
  winrt::Windows::Foundation::IUnknown::add_ref(this);
  *((_QWORD *)this + 1) = v8;
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  return this;
}
