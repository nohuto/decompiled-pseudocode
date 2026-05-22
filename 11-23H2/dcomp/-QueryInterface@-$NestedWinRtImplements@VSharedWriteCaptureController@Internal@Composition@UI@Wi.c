/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@UIWriteCaptureController@2345@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074F70
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VCaptureController@Internal@Composition@UI@Windows@@UIWriteCaptureController@2345@UIReadCaptureController@2345@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE9B0 (-QueryInterface@-$NestedWinRtImplements@VCaptureController@Internal@Composition@UI@Windows@@UIWr.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0BE0 (-QueryInterface@-$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0C00 (-QueryInterface@-$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Compositi_ea_1800B0C00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Internal::IWriteCaptureController>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 192),
           a2,
           a3);
}
