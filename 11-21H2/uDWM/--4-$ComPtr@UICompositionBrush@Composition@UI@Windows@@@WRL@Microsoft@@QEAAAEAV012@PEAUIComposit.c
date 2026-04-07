/*
 * XREFs of ??4?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180062BB4
 * Callers:
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x1800E1A40 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180010920 (-InternalAddRef@-$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
