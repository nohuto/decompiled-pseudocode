/*
 * XREFs of ??4?$ComPtr@UITrustedComponentForegroundControl@@@WRL@Microsoft@@QEAAAEAV012@PEAUITrustedComponentForegroundControl@@@Z @ 0x180357E1C
 * Callers:
 *     ?InitializeTrustedComponentForegroundControl@SearchAppExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x180359B40 (-InitializeTrustedComponentForegroundControl@SearchAppExperienceManager@@UEAAJPEAUITrustedCompon.c)
 *     ?InitializeTrustedComponentForegroundControl@UndockedSearchAppExperienceManager@@UEAAJPEAUITrustedComponentForegroundControl@@@Z @ 0x18038ED40 (-InitializeTrustedComponentForegroundControl@UndockedSearchAppExperienceManager@@UEAAJPEAUITrust.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
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
