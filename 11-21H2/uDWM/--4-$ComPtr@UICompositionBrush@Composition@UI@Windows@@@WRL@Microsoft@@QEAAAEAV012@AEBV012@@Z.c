/*
 * XREFs of ??4?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180018FA0
 * Callers:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180018E0C (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180010920 (-InternalAddRef@-$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
