/*
 * XREFs of ?Initialize@CLegacyRenderTargetProxy@DirectComposition@@QEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I@Z @ 0x180092824
 * Callers:
 *     ?RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_N@Z @ 0x1800926B8 (-RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?CreateRenderTarget@CDevice@DirectComposition@@UEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_NPEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800F02F0 (-CreateRenderTarget@CDevice@DirectComposition@@UEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_T.c)
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetProxy::Initialize(
        DirectComposition::CLegacyRenderTargetProxy *this,
        struct _LUID a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_COLOR_SPACE_TYPE a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  DirectComposition::CResourceProxy *v7; // rbx
  __int64 result; // rax
  struct _LUID v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v6 = a4;
  v7 = (DirectComposition::CLegacyRenderTargetProxy *)((char *)this + 8);
  result = DirectComposition::CResourceProxy::SetBufferProperty(
             (DirectComposition::CLegacyRenderTargetProxy *)((char *)this + 8),
             2,
             &v10,
             8uLL);
  if ( (int)result >= 0 )
  {
    result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v7, 3, a3);
    if ( (int)result >= 0 )
    {
      result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v7, 4, v6);
      if ( (int)result >= 0 )
      {
        result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v7, 5, a5);
        if ( (int)result >= 0 )
          return DirectComposition::CResourceProxy::SetScalarIntegerProperty(v7, 10, a6);
      }
    }
  }
  return result;
}
