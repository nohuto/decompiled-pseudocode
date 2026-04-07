/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180097128
 * Callers:
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x1800E1A40 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>>::operator Windows::UI::Composition::ICompositionBrush * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(*a1);
  return v1;
}
