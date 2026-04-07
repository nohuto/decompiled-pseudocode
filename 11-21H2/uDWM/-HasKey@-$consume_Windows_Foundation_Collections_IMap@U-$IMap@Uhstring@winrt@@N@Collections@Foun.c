/*
 * XREFs of ?HasKey@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@Uhstring@5@N@impl@winrt@@QEBA_NAEBUhstring@param@3@@Z @ 0x1800F41CC
 * Callers:
 *     ?UpdateFloatProperties@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F5B80 (-UpdateFloatProperties@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::HasKey(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v3; // eax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v5 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v2 + 64LL))(v2, *a2, &v5);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return v5;
}
