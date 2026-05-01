/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805B4080
 * Callers:
 *     ?GetIids@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805B3E30 (-GetIids@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows.c)
 *     ?GetIids@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805B3E50 (-GetIids@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Wi.c)
 *     ?GetIids@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805B3E90 (-GetIids@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shel_ea_1805B3E90.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x180189A6B (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$com_array@Uguid@winrt@@@winrt@@QEAAXXZ @ 0x1805B4CA0 (-clear@-$com_array@Uguid@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1805B4DFC (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingGetIids(
        _QWORD **a1,
        _DWORD *a2,
        char **a3)
{
  unsigned int v6; // edx
  char *v7; // rax
  char *v8; // rdi
  size_t v10; // rbx
  void *v11; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-20h]
  unsigned int v13; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  ((void (__fastcall *)(_QWORD **, unsigned int *))(*a1)[4])(a1, &v13);
  if ( !v13 )
    return (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, char **))(*a1[1] + 24LL))(a1[1], a2, a3);
  winrt::get_interfaces(&v11, a1 + 1);
  v6 = v13 + v12;
  *a2 = v13 + v12;
  v7 = (char *)_Platform_CoTaskMemAlloc(16LL * v6);
  v8 = v7;
  *a3 = v7;
  if ( v7 )
  {
    v10 = 16LL * v13;
    memmove_0(v7, Src, v10);
    *a3 = &v8[v10];
    memmove_0(&v8[v10], v11, 16LL * v12);
    winrt::com_array<winrt::guid>::clear(&v11);
    return 0LL;
  }
  else
  {
    winrt::com_array<winrt::guid>::clear(&v11);
    return 2147942414LL;
  }
}
