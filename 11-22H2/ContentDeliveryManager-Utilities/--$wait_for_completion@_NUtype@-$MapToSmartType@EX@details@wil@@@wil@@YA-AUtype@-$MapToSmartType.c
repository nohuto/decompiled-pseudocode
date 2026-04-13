/*
 * XREFs of ??$wait_for_completion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18006DFE4
 * Callers:
 *     ??$call_and_wait_for_completion@UILauncherStatics@System@Windows@@PEAUIUriRuntimeClass@Foundation@3@PEAUILauncherOptions@23@PEAPEAU?$IAsyncOperation@_N@53@$$ZPEAU453@PEAU623@@wil@@YA?A_PPEAUILauncherStatics@System@Windows@@P8123@EAAJPEAUIUriRuntimeClass@Foundation@3@PEAUILauncherOptions@23@PEAPEAU?$IAsyncOperation@_N@53@@Z$$QEAPEAU453@$$QEAPEAU623@@Z @ 0x18006DCD8 (--$call_and_wait_for_completion@UILauncherStatics@System@Windows@@PEAUIUriRuntimeClass@Foundatio.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800B3D28 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006DA14 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU-$IAs.c)
 */

_BYTE *__fastcall wil::wait_for_completion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(
        _BYTE *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0;
  v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *,unsigned char *>(
         a2,
         (__int64)a1,
         a3);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4,
      v6);
  return a1;
}
