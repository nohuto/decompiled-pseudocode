/*
 * XREFs of ??4?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDispatcherQueue@System@Windows@@@Z @ 0x18001D624
 * Callers:
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 *     ?Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z @ 0x18003CC38 (-Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z.c)
 *     ?get_DispatcherQueue@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUIDispatcherQueue@System@5@@Z @ 0x180109E50 (-get_DispatcherQueue@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUIDispatcherQueue@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v5);
  }
  return a1;
}
