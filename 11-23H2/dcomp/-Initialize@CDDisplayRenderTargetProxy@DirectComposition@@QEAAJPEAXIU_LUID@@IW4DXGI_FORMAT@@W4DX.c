/*
 * XREFs of ?Initialize@CDDisplayRenderTargetProxy@DirectComposition@@QEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x1800F2080
 * Callers:
 *     ?CreateDDisplayRenderTarget@CDevice@DirectComposition@@UEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@IPEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800EF0C0 (-CreateDDisplayRenderTarget@CDevice@DirectComposition@@UEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_.c)
 *     ?RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x18019ACBC (-RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@.c)
 * Callees:
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetProxy::Initialize(
        DirectComposition::CDDisplayRenderTargetProxy *this,
        void *a2,
        unsigned int a3,
        struct _LUID a4,
        unsigned int a5,
        enum DXGI_FORMAT a6,
        enum DXGI_COLOR_SPACE_TYPE a7,
        const struct D2D_SIZE_U *a8,
        unsigned int a9)
{
  DirectComposition::CResourceProxy *v10; // rbx
  __int64 result; // rax
  struct _LUID v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = a4;
  v10 = (DirectComposition::CDDisplayRenderTargetProxy *)((char *)this + 8);
  result = DirectComposition::CResourceProxy::SetHandleProperty(
             (DirectComposition::CDDisplayRenderTargetProxy *)((char *)this + 8),
             2u,
             a2);
  if ( (int)result >= 0 )
  {
    result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v10, 3, a3);
    if ( (int)result >= 0 )
    {
      result = DirectComposition::CResourceProxy::SetBufferProperty(v10, 4, &v12, 8uLL);
      if ( (int)result >= 0 )
      {
        result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v10, 5, a5);
        if ( (int)result >= 0 )
        {
          result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v10, 6, a6);
          if ( (int)result >= 0 )
          {
            result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v10, 7, a7);
            if ( (int)result >= 0 )
            {
              if ( a8->width || a8->height )
              {
                result = DirectComposition::CResourceProxy::SetBufferProperty(v10, 12, a8, 8uLL);
                if ( (int)result >= 0 )
                  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(v10, 13, a9);
              }
              else
              {
                return 2147942487LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
