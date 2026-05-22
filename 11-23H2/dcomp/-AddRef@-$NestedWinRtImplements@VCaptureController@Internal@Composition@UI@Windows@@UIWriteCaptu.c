/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCaptureController@Internal@Composition@UI@Windows@@UIWriteCaptureController@2345@UIReadCaptureController@2345@@WRL2@Microsoft@@UEAAKXZ @ 0x18008E280
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VCaptureController@Internal@Composition@UI@Windows@@UIWriteCaptureController@2345@UIReadCaptureController@2345@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AE350 (-AddRef@-$NestedWinRtImplements@VCaptureController@Internal@Composition@UI@Windows@_ea_1800AE350.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800B0AA0 (-AddRef@-$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UIComp.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800B0AC0 (-AddRef@-$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Wi_ea_1800B0AC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::CaptureController,Windows::UI::Composition::Internal::IWriteCaptureController,Windows::UI::Composition::Internal::IReadCaptureController>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 192));
}
