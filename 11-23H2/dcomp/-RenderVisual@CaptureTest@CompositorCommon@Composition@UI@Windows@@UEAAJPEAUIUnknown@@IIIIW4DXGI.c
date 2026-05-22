/*
 * XREFs of ?RenderVisual@CaptureTest@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIUnknown@@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z @ 0x180129500
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?RenderVisual@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVVisual@234@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z @ 0x180129684 (-RenderVisual@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVVisual@234@IIIIW4DXGI_FORMAT@@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CaptureTest::RenderVisual(
        Windows::UI::Composition::CompositorCommon::CaptureTest *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        void **a8,
        void **a9,
        unsigned int *a10)
{
  struct Microsoft::WRL2::ContextSession *v10; // rdi
  __int64 v14; // rdx
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned int *v17; // rsi
  void **v18; // rbp
  void **v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v24; // [rsp+80h] [rbp+8h] BYREF

  v10 = (Windows::UI::Composition::CompositorCommon::CaptureTest *)((char *)this - 376);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 376));
  if ( (*((_BYTE *)v10 + 32) & 2) != 0 )
  {
    if ( !a2 )
    {
      v16 = 7077;
LABEL_5:
      v15 = -2147024809;
      DoStackCaptureDirect(-2147024809, v16);
      goto LABEL_19;
    }
    v17 = a10;
    if ( !a10 )
    {
      v16 = 7078;
      goto LABEL_5;
    }
    v18 = a9;
    if ( !a9 )
    {
      v16 = 7079;
      goto LABEL_5;
    }
    v19 = a8;
    if ( !a8 )
    {
      v16 = 7080;
      goto LABEL_5;
    }
    v24 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v24,
      v14);
    v20 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            v10,
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
            &v24);
    v15 = v20;
    if ( v20 < 0 )
    {
      v22 = 7083;
    }
    else
    {
      v20 = Windows::UI::Composition::CompositorCommon::RenderVisual(v10, v24, a3, a4, a5, a6, a7, v19, v18, v17);
      v15 = v20;
      if ( v20 >= 0 )
      {
        v15 = 0;
LABEL_18:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
          (volatile signed __int32 **)&v24,
          v21);
        goto LABEL_19;
      }
      v22 = 7086;
    }
    DoStackCaptureDirect(v20, v22);
    goto LABEL_18;
  }
  v15 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_19:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v10);
  return v15;
}
