/*
 * XREFs of ?CreateDDisplayRenderTarget@CDevice@DirectComposition@@UEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@IPEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800EF0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?Initialize@CDDisplayRenderTargetProxy@DirectComposition@@QEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x1800F2080 (-Initialize@CDDisplayRenderTargetProxy@DirectComposition@@QEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DX.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateDDisplayRenderTarget(
        DirectComposition::CDevice *this,
        void *a2,
        unsigned int a3,
        struct _LUID a4,
        unsigned int a5,
        enum DXGI_FORMAT a6,
        enum DXGI_COLOR_SPACE_TYPE a7,
        const struct D2D_SIZE_U *a8,
        unsigned int a9,
        struct IDCompositionRenderTargetPartner **a10)
{
  struct IDCompositionRenderTargetPartner **v10; // r14
  int ProxyInternal; // edi
  DirectComposition::CTransformGroupProxy *v15; // rsi
  DirectComposition::CTransformGroupProxy *v16; // rcx
  DirectComposition::CTransformGroupProxy *v18; // [rsp+50h] [rbp-28h] BYREF

  v10 = a10;
  if ( a10 && (*a10 = 0LL, a8->width) && a8->height )
  {
    ProxyInternal = DirectComposition::CDevice::CreateProxyInternal(
                      (DirectComposition::CDevice *)((char *)this - 16),
                      52,
                      0,
                      (void **)&v18,
                      (unsigned int *)&a10);
    if ( ProxyInternal >= 0 )
    {
      v15 = v18;
      v16 = v18;
      *((_DWORD *)v18 + 3) = (_DWORD)a10;
      *(_QWORD *)v16 = &DirectComposition::CDDisplayRenderTargetProxy::`vftable';
      *((_DWORD *)v16 + 2) = 1;
      ProxyInternal = DirectComposition::CDDisplayRenderTargetProxy::Initialize(v16, a2, a3, a4, a5, a6, a7, a8, a9);
      if ( ProxyInternal < 0 )
        DirectComposition::CTransformGroupProxy::Release(v15);
      else
        *v10 = v15;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)ProxyInternal;
}
