/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCaptureController@Internal@Composition@UI@Windows@@UIWriteCaptureController@2345@UIReadCaptureController@2345@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::CaptureController,Windows::UI::Composition::Internal::IWriteCaptureController,Windows::UI::Composition::Internal::IReadCaptureController>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Internal::IWriteCaptureController>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
