/*
 * XREFs of ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1804F6C24
 * Callers:
 *     ?NonDelegatingGetIids@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804F5AC4 (-NonDelegatingGetIids@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@I.c)
 *     ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1806849AC (-NonDelegatingGetIids@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     ?clear@?$com_array@E@winrt@@QEAAXXZ @ 0x180274E34 (-clear@-$com_array@E@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::get_interfaces(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _DWORD *, __int64); // rbx
  signed int v5; // eax
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = *a2;
  v4 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)*a2 + 24LL);
  winrt::com_array<unsigned char>::clear(a1);
  v7[0] = 0;
  v5 = v4(v3, v7, a1);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *(_DWORD *)(a1 + 8) = v7[0];
  return a1;
}
