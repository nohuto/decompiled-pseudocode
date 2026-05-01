/*
 * XREFs of ??$get_activation_factory@UILauncherStatics@System@Windows@winrt@@@winrt@@YA?AUILauncherStatics@System@Windows@0@AEBUhstring@param@0@@Z @ 0x18057070C
 * Callers:
 *     ??$call@AEAV_lambda_0f81849e913c1b156a82c8e661ce677e_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@2@AEAV_lambda_0f81849e913c1b156a82c8e661ce677e_@@@Z @ 0x18057018C (--$call@AEAV_lambda_0f81849e913c1b156a82c8e661ce677e_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ??$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@2@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@Z @ 0x18057044C (--$call@AEAV_lambda_f90fd89f5c660ec91b58f654b0e35989_@@@-$factory_cache_entry@ULauncher@System@W.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180570794 (--$get_runtime_activation_factory@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@YA-AUhres.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::System::ILauncherStatics>(_QWORD *a1, __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::System::ILauncherStatics>(&v5, a2, &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
