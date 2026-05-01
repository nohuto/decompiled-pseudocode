/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_423982affe67655b051dce975e42cf39___ @ 0x18041CCF8
 * Callers:
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x18041DE58 (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_423982affe67655b051dce975e42cf39_::operator() @ 0x18041D1BC (_lambda_423982affe67655b051dce975e42cf39_--operator().c)
 */

__int64 **__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_423982affe67655b051dce975e42cf39___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rdi
  __int64 **result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    v9 = *i;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    if ( (unsigned __int8)lambda_423982affe67655b051dce975e42cf39_::operator()(a4, &v9) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
