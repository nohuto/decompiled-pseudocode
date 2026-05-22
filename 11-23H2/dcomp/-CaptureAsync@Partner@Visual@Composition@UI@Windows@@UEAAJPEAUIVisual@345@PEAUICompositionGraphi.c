/*
 * XREFs of ?CaptureAsync@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAUICompositionGraphicsDevice@345@HHW4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@9Graphics@5@PEAPEAU?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z @ 0x18010AF80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??$ToAsyncOperation@U?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@VisualCapture@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@U?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010AB58 (--$ToAsyncOperation@U-$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundati.c)
 *     ?CaptureAsync@Visual@Composition@UI@Windows@@QEAAJPEAV1234@PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@784@MPEAPEAVVisualCapture@234@@Z @ 0x18010B138 (-CaptureAsync@Visual@Composition@UI@Windows@@QEAAJPEAV1234@PEAVCompositionGraphicsDevice@234@HHW.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::CaptureAsync(
        __int64 a1,
        struct IUnknown *a2,
        struct IUnknown *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 *a8)
{
  __int64 v8; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // r14
  __int64 v13; // rdx
  unsigned int v14; // edi
  int v15; // eax
  Microsoft::WRL2::NestableRuntimeClass *v16; // r15
  int v17; // eax
  Microsoft::WRL2::NestableRuntimeClass *v18; // rsi
  int v19; // eax
  Microsoft::WRL2::NestableRuntimeClass *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v23; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v24; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v26; // [rsp+50h] [rbp-20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v27; // [rsp+58h] [rbp-18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v28[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF

  v8 = a1 - 224;
  v10 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 224 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v10);
  if ( (*(_BYTE *)(v8 + 32) & 2) != 0 )
  {
    v27 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v27,
      v13);
    v15 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            (struct Microsoft::WRL2::ContextSession *)v10,
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
            v28);
    v16 = v28[0];
    v14 = v15;
    v27 = v28[0];
    if ( v15 < 0 )
    {
      DoStackCaptureDirect(v15, 0xB20u);
      goto LABEL_15;
    }
    v17 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            (struct Microsoft::WRL2::ContextSession *)v10,
            a3,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionGraphicsDevice::s_InterfaceType,
            v28);
    v14 = v17;
    if ( v17 < 0 )
    {
      DoStackCaptureDirect(v17, 0xB23u);
      v24 = v28[0];
      if ( v28[0] )
        goto LABEL_13;
      goto LABEL_15;
    }
    v18 = v28[0];
    v26 = 0LL;
    v19 = Windows::UI::Composition::Visual::CaptureAsync(v8, v16, v28[0], a4, a5, a6, a7, LODWORD(FLOAT_1_0), &v26);
    v14 = v19;
    if ( v19 < 0 )
    {
      DoStackCaptureDirect(v19, 0xB2Eu);
      v23 = v26;
      if ( !v26 )
        goto LABEL_10;
    }
    else
    {
      v20 = v26;
      v29 = 0LL;
      Windows::UI::Composition::VisualCapture::ToAsyncOperation<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::ICompositionSurface *>>(
        v26,
        &v29);
      v21 = v29;
      v14 = 0;
      v29 = 0LL;
      *a8 = v21;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v29);
      if ( !v20 )
        goto LABEL_10;
      v23 = v20;
    }
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v23);
LABEL_10:
    if ( v18 )
    {
      v24 = v18;
LABEL_13:
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v24);
    }
LABEL_15:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v27,
      v22);
    goto LABEL_16;
  }
  v14 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_16:
  Microsoft::WRL2::ContextSession::EndApiEntry(v10);
  return v14;
}
