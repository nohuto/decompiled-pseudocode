/*
 * XREFs of ??4?$ComPtr@UITrustedComponentForegroundControl@@@WRL@Microsoft@@QEAAAEAV012@PEAUITrustedComponentForegroundControl@@@Z @ 0x18042A184
 * Callers:
 *     ?InitializeTrustedComponentForegroundControl@SearchAppExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x18042BAD0 (-InitializeTrustedComponentForegroundControl@SearchAppExperienceManager@@UEAAJPEAUITrustedCompon.c)
 *     ?InitializeTrustedComponentForegroundControl@UndockedSearchAppExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x180468190 (-InitializeTrustedComponentForegroundControl@UndockedSearchAppExperienceManager@@UEAAJPEAUITrust.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ITrustedComponentForegroundControl>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
  return a1;
}
