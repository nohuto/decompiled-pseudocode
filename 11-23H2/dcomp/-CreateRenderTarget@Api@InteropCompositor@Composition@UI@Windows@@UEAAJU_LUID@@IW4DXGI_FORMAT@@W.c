/*
 * XREFs of ?CreateRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_NPEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800924B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VInteropLegacyRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEAIAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropLegacyRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@3AEA_N@Z @ 0x180092574 (--$MakeAndInitialize2@VInteropLegacyRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCom.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateRenderTarget(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct _LUID a2,
        int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_COLOR_SPACE_TYPE a5,
        char a6,
        bool a7,
        struct IDCompositionRenderTargetPartner **a8)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  struct IDCompositionRenderTargetPartner **v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  char *v13; // [rsp+40h] [rbp-18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+80h] [rbp+28h] BYREF
  struct _LUID v15; // [rsp+88h] [rbp+30h] BYREF
  int v16; // [rsp+90h] [rbp+38h] BYREF
  enum DXGI_FORMAT v17; // [rsp+98h] [rbp+40h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1216);
  v13 = (char *)this - 1216;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (v8->SpinCount & 2) != 0 )
  {
    v9 = a8;
    if ( a8 )
    {
      *a8 = 0LL;
      v14 = 0LL;
      v10 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropLegacyRenderTarget,Windows::UI::Composition::InteropLegacyRenderTarget,Windows::UI::Composition::InteropCompositor * &,_LUID &,unsigned int &,enum DXGI_FORMAT &,enum DXGI_COLOR_SPACE_TYPE &,unsigned int &,bool &>(
              (unsigned int)&v14,
              (unsigned int)&v13,
              (unsigned int)&v15,
              (unsigned int)&v16,
              (__int64)&v17,
              (__int64)&a5,
              (__int64)&a6,
              (__int64)&a7);
      v11 = v10;
      if ( v10 < 0 )
      {
        DoStackCaptureDirect(v10, 0x74u);
        if ( v14 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
      }
      else
      {
        *v9 = (struct IDCompositionRenderTargetPartner *)(((unsigned __int64)v14 + 136) & -(__int64)(v14 != 0LL));
        v11 = 0;
      }
    }
    else
    {
      v11 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x67u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v8);
  return v11;
}
