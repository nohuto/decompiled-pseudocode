/*
 * XREFs of ?OpenWriteCaptureControllerFromHandle@Native@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIWriteCaptureController@Internal@345@@Z @ 0x180128F10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$ToPartner@UIWriteCaptureController@Internal@Composition@UI@Windows@@@SharedWriteCaptureController@Internal@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UIWriteCaptureController@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010E180 (--$ToPartner@UIWriteCaptureController@Internal@Composition@UI@Windows@@@SharedWriteCaptureContro.c)
 *     ?OpenSharedWriteCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVSharedWriteCaptureController@Internal@234@@Z @ 0x180128E94 (-OpenSharedWriteCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Native::OpenWriteCaptureControllerFromHandle(
        struct _RTL_CRITICAL_SECTION *this,
        void *a2,
        struct Windows::UI::Composition::Internal::IWriteCaptureController **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rsi
  unsigned int v6; // edi
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  struct Windows::UI::Composition::Internal::IWriteCaptureController *v9; // rax
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  struct Windows::UI::Composition::Internal::IWriteCaptureController *v12; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon *)&this[-7];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 7);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v13 = 0LL;
    v7 = Windows::UI::Composition::CompositorCommon::OpenSharedWriteCaptureControllerFromHandle(v3, a2, &v13);
    v6 = v7;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x1E3Du);
      v10 = v13;
      if ( !v13 )
        goto LABEL_8;
    }
    else
    {
      v8 = v13;
      v12 = 0LL;
      Windows::UI::Composition::Internal::SharedWriteCaptureController::ToPartner<Windows::UI::Composition::Internal::IWriteCaptureController>(
        v13,
        (__int64 *)&v12);
      v9 = v12;
      v12 = 0LL;
      v6 = 0;
      *a3 = v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v12);
      if ( !v8 )
        goto LABEL_8;
      v10 = v8;
    }
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
    goto LABEL_8;
  }
  v6 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v6;
}
