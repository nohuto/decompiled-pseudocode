/*
 * XREFs of ?GetFileFromPathAsync@?$consume_Windows_Storage_IStorageFileStatics@UIStorageFileStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x180572C58
 * Callers:
 *     ??$call@AEAV_lambda_af1ac98131a4ec63c40875776acbbecc_@@@?$factory_cache_entry@UStorageFile@Storage@Windows@winrt@@UIStorageFileStatics@234@@impl@winrt@@QEAA?AU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_af1ac98131a4ec63c40875776acbbecc_@@@Z @ 0x1805702F0 (--$call@AEAV_lambda_af1ac98131a4ec63c40875776acbbecc_@@@-$factory_cache_entry@UStorageFile@Stora.c)
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Storage_IStorageFileStatics<winrt::Windows::Storage::IStorageFileStatics>::GetFileFromPathAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
