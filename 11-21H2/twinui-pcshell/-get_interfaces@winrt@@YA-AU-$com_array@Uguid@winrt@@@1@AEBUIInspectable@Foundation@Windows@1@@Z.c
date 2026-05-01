/*
 * XREFs of ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1805B4DFC
 * Callers:
 *     ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805B4080 (-NonDelegatingGetIids@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?clear@?$com_array@Uguid@winrt@@@winrt@@QEAAXXZ @ 0x1805B4CA0 (-clear@-$com_array@Uguid@winrt@@@winrt@@QEAAXXZ.c)
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
  winrt::com_array<winrt::guid>::clear(a1);
  v7[0] = 0;
  v5 = v4(v3, v7, a1);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *(_DWORD *)(a1 + 8) = v7[0];
  return a1;
}
