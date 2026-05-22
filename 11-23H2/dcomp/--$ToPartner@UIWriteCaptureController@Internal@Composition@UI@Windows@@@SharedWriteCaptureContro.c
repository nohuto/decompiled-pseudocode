/*
 * XREFs of ??$ToPartner@UIWriteCaptureController@Internal@Composition@UI@Windows@@@SharedWriteCaptureController@Internal@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UIWriteCaptureController@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010E180
 * Callers:
 *     ?CreateSharedWriteCaptureController@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIWriteCaptureController@1345@@Z @ 0x18010F1E0 (-CreateSharedWriteCaptureController@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIWri.c)
 *     ?OpenSharedWriteCaptureControllerFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionHandle@1Handles@Foundation@5@PEAPEAUIWriteCaptureController@1345@@Z @ 0x180110800 (-OpenSharedWriteCaptureControllerFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEA.c)
 *     ?OpenWriteCaptureControllerFromHandle@Native@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIWriteCaptureController@Internal@345@@Z @ 0x180128F10 (-OpenWriteCaptureControllerFromHandle@Native@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedWriteCaptureController::ToPartner<Windows::UI::Composition::Internal::IWriteCaptureController>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        __int64 *a2)
{
  __int64 result; // rax

  if ( this )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
    *a2 = (__int64)this + 192;
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
