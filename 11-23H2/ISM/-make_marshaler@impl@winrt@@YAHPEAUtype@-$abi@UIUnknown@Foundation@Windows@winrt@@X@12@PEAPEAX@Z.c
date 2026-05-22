/*
 * XREFs of ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x18009A4C8
 * Callers:
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_e811ed625de1c9f36d6dae6db721db2b_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002A060 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UAppViewWatcher@WindowManagement@Appl.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_be02bfc96701eec5f3a0245d87020f54_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18009D240 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowMana.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@V_lambda_60bc5d93aa36c864d5d47e476cd7d1f3_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18009D2E0 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowMan_ea_18009D2E0.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_8796a88b72841d6ebf3a72c1da83edbf_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18009D380 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowMan_ea_18009D380.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::QueryInterface @ 0x1800E4220 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--WorkItemHandler_ea_1800E4220.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_f7189cc794088eeaf33bed95e453010f_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18010DB20 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatch_ea_18010DB20.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@0@Z @ 0x180098B00 (--0marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::make_marshaler(__int64 a1, __int64 *a2)
{
  void *v4; // rcx
  __int64 v5; // rax

  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = `winrt::impl::make_marshaler'::`2'::marshaler::marshaler((__int64)v4, a1);
  *a2 = v5;
  return v5 == 0 ? 0x8007000E : 0;
}
