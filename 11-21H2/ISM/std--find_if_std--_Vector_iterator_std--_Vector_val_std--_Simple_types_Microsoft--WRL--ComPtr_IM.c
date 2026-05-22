/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_4eb1bd967a44c8988ac0e8ab217f7822___ @ 0x18009CAF0
 * Callers:
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800A0E5C (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 */

__int64 **__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_4eb1bd967a44c8988ac0e8ab217f7822___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *i; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    v11 = *i;
    v8 = v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v11);
    v9 = *a4;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v11);
    if ( v9 == v8 )
      break;
  }
  *a1 = i;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a4);
  return a1;
}
