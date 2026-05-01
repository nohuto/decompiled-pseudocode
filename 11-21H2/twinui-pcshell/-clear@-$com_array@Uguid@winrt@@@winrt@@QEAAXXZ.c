/*
 * XREFs of ?clear@?$com_array@Uguid@winrt@@@winrt@@QEAAXXZ @ 0x1805B4CA0
 * Callers:
 *     ??1?$com_array@Uguid@winrt@@@winrt@@QEAA@XZ @ 0x1805B3880 (--1-$com_array@Uguid@winrt@@@winrt@@QEAA@XZ.c)
 *     ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805B4080 (-NonDelegatingGetIids@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1805B4DFC (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x180189A5F (CoTaskMemFree_0.c)
 */

void __fastcall winrt::com_array<winrt::guid>::clear(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree_0(v2);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
