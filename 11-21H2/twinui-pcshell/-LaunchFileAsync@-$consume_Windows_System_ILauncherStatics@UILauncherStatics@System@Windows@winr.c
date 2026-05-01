/*
 * XREFs of ?LaunchFileAsync@?$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@AEBUIStorageFile@Storage@63@AEBULauncherOptions@System@63@@Z @ 0x180572FF8
 * Callers:
 *     ??$call@AEAV_lambda_0f81849e913c1b156a82c8e661ce677e_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@2@AEAV_lambda_0f81849e913c1b156a82c8e661ce677e_@@@Z @ 0x18057018C (--$call@AEAV_lambda_0f81849e913c1b156a82c8e661ce677e_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchFileAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  signed int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 56LL))(v4, *a3, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  *a2 = v8;
  return a2;
}
