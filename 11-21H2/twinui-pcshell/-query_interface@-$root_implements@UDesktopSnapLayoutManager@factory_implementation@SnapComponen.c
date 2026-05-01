/*
 * XREFs of ?query_interface@?$root_implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIDesktopSnapLayoutManagerFactory@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B5004
 * Callers:
 *     ?QueryInterface@?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B43A0 (-QueryInterface@-$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Sh.c)
 *     ?QueryInterface@?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B43C0 (-QueryInterface@-$produce_base@UDesktopSnapLayoutManager@factory_implementation@Sna_ea_1805B43C0.c)
 *     ?QueryInterface@?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B43E0 (-QueryInterface@-$produce_base@UDesktopSnapLayoutManager@factory_implementation@Sna_ea_1805B43E0.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::query_interface(
        volatile signed __int32 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r9

  v6 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_2;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    v9 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
LABEL_5:
    *a3 = v9;
LABEL_2:
    _InterlockedExchangeAdd(a1 + 2, 1u);
    return 0LL;
  }
  if ( winrt::operator==(v8, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
    return winrt::impl::make_marshaler(v11, a3);
  }
  else
  {
    if ( winrt::operator==(v10, &winrt::impl::guid_v<IInspectable>) )
    {
      v9 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 56LL))(a1);
      goto LABEL_5;
    }
    if ( winrt::operator==(v12, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
    {
      v9 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(v13 + 24))(a1);
      goto LABEL_5;
    }
    return (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD *, __int64 *))v13)(a1, a2, a3);
  }
}
