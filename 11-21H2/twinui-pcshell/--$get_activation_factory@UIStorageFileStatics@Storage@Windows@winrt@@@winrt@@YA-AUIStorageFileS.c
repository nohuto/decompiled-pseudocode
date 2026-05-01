/*
 * XREFs of ??$get_activation_factory@UIStorageFileStatics@Storage@Windows@winrt@@@winrt@@YA?AUIStorageFileStatics@Storage@Windows@0@AEBUhstring@param@0@@Z @ 0x180570750
 * Callers:
 *     ??$call@AEAV_lambda_af1ac98131a4ec63c40875776acbbecc_@@@?$factory_cache_entry@UStorageFile@Storage@Windows@winrt@@UIStorageFileStatics@234@@impl@winrt@@QEAA?AU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_af1ac98131a4ec63c40875776acbbecc_@@@Z @ 0x1805702F0 (--$call@AEAV_lambda_af1ac98131a4ec63c40875776acbbecc_@@@-$factory_cache_entry@UStorageFile@Stora.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIStorageFileStatics@Storage@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180570A68 (--$get_runtime_activation_factory@UIStorageFileStatics@Storage@Windows@winrt@@@impl@winrt@@YA-AU.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Storage::IStorageFileStatics>(_QWORD *a1, __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Storage::IStorageFileStatics>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
