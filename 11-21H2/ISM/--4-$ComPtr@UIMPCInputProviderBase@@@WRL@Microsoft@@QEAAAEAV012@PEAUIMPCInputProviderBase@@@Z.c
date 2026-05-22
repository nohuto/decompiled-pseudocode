/*
 * XREFs of ??4?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputProviderBase@@@Z @ 0x1800AD124
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800296EC (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IMPCInputProviderBase>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v5);
  }
  return a1;
}
