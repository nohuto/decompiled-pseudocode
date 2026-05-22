/*
 * XREFs of ?CaptureAsync@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAUIVisual@345@USizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@85@W4DirectXAlphaMode@DirectX@85@MPEAPEAU?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180156B40
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??$ToAsyncOperation@U?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@VisualCapture@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@U?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010AB58 (--$ToAsyncOperation@U-$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundati.c)
 *     ?CaptureAsync@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVVisual@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@784@MPEAPEAVVisualCapture@234@@Z @ 0x180156CA8 (-CaptureAsync@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVVisual@234@HHW4DirectXP.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::Api::CaptureAsync(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  __int64 v8; // r14
  unsigned int v10; // ebx
  struct _RTL_CRITICAL_SECTION *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // esi
  int v15; // eax
  Microsoft::WRL2::NestableRuntimeClass *v16; // rdx
  int v17; // eax
  Microsoft::WRL2::NestableRuntimeClass *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v21; // rcx
  volatile signed __int32 *v23[2]; // [rsp+40h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v24; // [rsp+80h] [rbp+30h] BYREF
  __int64 v25; // [rsp+90h] [rbp+40h]

  v25 = a3;
  v7 = a7;
  v8 = a1 - 160;
  v10 = a3;
  *a7 = 0LL;
  v12 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 160 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v12);
  if ( (*(_BYTE *)(v8 + 32) & 2) != 0 )
  {
    v23[0] = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(v23, v13);
    v15 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
            &v24);
    v16 = v24;
    v14 = v15;
    v23[0] = (volatile signed __int32 *)v24;
    if ( v15 < 0 )
    {
      DoStackCaptureDirect(v15, 0x2D3u);
      goto LABEL_10;
    }
    v24 = 0LL;
    v17 = Windows::UI::Composition::CompositionGraphicsDevice::CaptureAsync(
            v8,
            v16,
            v10,
            HIDWORD(v25),
            a4,
            a5,
            a6,
            &v24,
            v23[0]);
    v14 = v17;
    if ( v17 < 0 )
    {
      DoStackCaptureDirect(v17, 0x2DDu);
      v21 = v24;
      if ( v24 )
        goto LABEL_8;
    }
    else
    {
      v18 = v24;
      a7 = 0LL;
      Windows::UI::Composition::VisualCapture::ToAsyncOperation<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::ICompositionSurface *>>(
        v24,
        (__int64 *)&a7);
      v19 = a7;
      a7 = 0LL;
      v14 = 0;
      *v7 = v19;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&a7);
      if ( v18 )
      {
        v21 = v18;
LABEL_8:
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v21);
      }
    }
LABEL_10:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(v23, v20);
    goto LABEL_11;
  }
  v14 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_11:
  Microsoft::WRL2::ContextSession::EndApiEntry(v12);
  return v14;
}
