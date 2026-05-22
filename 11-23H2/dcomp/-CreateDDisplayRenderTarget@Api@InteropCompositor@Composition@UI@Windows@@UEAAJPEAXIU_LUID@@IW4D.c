/*
 * XREFs of ?CreateDDisplayRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@IPEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18015F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VInteropDDisplayRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAPEAXAEAIAEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@AEAI@Details@WRL2@Microsoft@@YAJPEAPEAVInteropDDisplayRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAPEAXAEAIAEAU_LUID@@3AEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@3@Z @ 0x18015F500 (--$MakeAndInitialize2@VInteropDDisplayRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropC.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateDDisplayRenderTarget(
        Windows::UI::Composition::InteropCompositor::Api *this,
        void *a2,
        int a3,
        struct _LUID a4,
        unsigned int a5,
        enum DXGI_FORMAT a6,
        enum DXGI_COLOR_SPACE_TYPE a7,
        struct D2D_SIZE_U *a8,
        unsigned int a9,
        struct IDCompositionRenderTargetPartner **a10)
{
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  unsigned int v11; // ebx
  struct IDCompositionRenderTargetPartner **v12; // rsi
  int v13; // eax
  int v15[2]; // [rsp+50h] [rbp-18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+90h] [rbp+28h] BYREF
  void *v17; // [rsp+98h] [rbp+30h] BYREF
  int v18; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+40h] BYREF

  v19 = (__int64)a4;
  v18 = a3;
  v17 = a2;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1216);
  *(_QWORD *)v15 = (char *)this - 1216;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (v10->SpinCount & 2) != 0 )
  {
    v12 = a10;
    if ( a10 )
    {
      *a10 = 0LL;
      v16 = 0LL;
      v13 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropDDisplayRenderTarget,Windows::UI::Composition::InteropDDisplayRenderTarget,Windows::UI::Composition::InteropCompositor * &,void * &,unsigned int &,_LUID &,unsigned int &,enum DXGI_FORMAT &,enum DXGI_COLOR_SPACE_TYPE &,D2D_SIZE_U const &,unsigned int &>(
              &v16,
              (struct Windows::UI::Composition::Compositor **)v15,
              &v17,
              (unsigned int *)&v18,
              (struct _LUID *)&v19,
              &a5,
              &a6,
              &a7,
              a8,
              &a9);
      v11 = v13;
      if ( v13 < 0 )
      {
        DoStackCaptureDirect(v13, 0x9Au);
        if ( v16 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v16);
      }
      else
      {
        *v12 = (struct IDCompositionRenderTargetPartner *)(((unsigned __int64)v16 + 136) & -(__int64)(v16 != 0LL));
        v11 = 0;
      }
    }
    else
    {
      v11 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x8Bu);
    }
  }
  else
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v10);
  return v11;
}
