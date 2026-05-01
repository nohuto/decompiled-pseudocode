/*
 * XREFs of ?WriteTextAsync@?$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIStorageFile@Storage@Windows@3@AEBUhstring@param@3@AEBW4UnicodeEncoding@Streams@563@@Z @ 0x1803E475C
 * Callers:
 *     ??R_lambda_ab3e553f5135d66a1c20f494927a541c_@@QEBA@AEBUIFileIOStatics@Storage@Windows@winrt@@@Z @ 0x1803E3060 (--R_lambda_ab3e553f5135d66a1c20f494927a541c_@@QEBA@AEBUIFileIOStatics@Storage@Windows@winrt@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Storage_IFileIOStatics<winrt::Windows::Storage::IFileIOStatics>::WriteTextAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5)
{
  __int64 v5; // rcx
  signed int v7; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v5 = *a1;
  v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v5 + 72LL))(
         v5,
         *a3,
         *a4,
         *a5,
         &v9);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  *a2 = v9;
  return a2;
}
