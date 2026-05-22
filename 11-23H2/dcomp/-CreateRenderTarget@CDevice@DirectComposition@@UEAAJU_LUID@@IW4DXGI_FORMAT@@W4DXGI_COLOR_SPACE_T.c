/*
 * XREFs of ?CreateRenderTarget@CDevice@DirectComposition@@UEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_NPEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800F02F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?Initialize@CLegacyRenderTargetProxy@DirectComposition@@QEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I@Z @ 0x180092824 (-Initialize@CLegacyRenderTargetProxy@DirectComposition@@QEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLO.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateRenderTarget(
        DirectComposition::CDevice *this,
        struct _LUID a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_COLOR_SPACE_TYPE a5,
        unsigned int a6,
        bool a7,
        struct IDCompositionRenderTargetPartner **a8)
{
  struct IDCompositionRenderTargetPartner **v8; // r14
  DirectComposition::CDevice *v12; // rcx
  int ProxyInternal; // edi
  DirectComposition::CTransformGroupProxy *v14; // rsi
  DirectComposition::CLegacyRenderTargetProxy *v15; // rcx
  DirectComposition::CLegacyRenderTargetProxy *v16; // rcx
  DirectComposition::CLegacyRenderTargetProxy *v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a8;
  if ( !a8 )
    return (unsigned int)-2147024809;
  *a8 = 0LL;
  if ( a6 - 2 > 1 )
    return (unsigned int)-2147024809;
  v12 = (DirectComposition::CDevice *)((char *)this - 16);
  if ( a7 )
  {
    ProxyInternal = DirectComposition::CDevice::CreateProxyInternal(v12, 97, 0, (void **)v18, (unsigned int *)&a8);
    if ( ProxyInternal < 0 )
      return (unsigned int)ProxyInternal;
    v14 = v18[0];
    v16 = v18[0];
    *((_DWORD *)v18[0] + 3) = (_DWORD)a8;
    *(_QWORD *)v16 = &DirectComposition::CLegacyStereoRenderTargetProxy::`vftable';
    *((_DWORD *)v16 + 2) = 1;
    ProxyInternal = DirectComposition::CLegacyRenderTargetProxy::Initialize(v16, a2, a3, a4, a5, a6);
    if ( ProxyInternal < 0 )
    {
      DirectComposition::CTransformGroupProxy::Release(v14);
      return (unsigned int)ProxyInternal;
    }
    goto LABEL_9;
  }
  ProxyInternal = DirectComposition::CDevice::CreateProxyInternal(v12, 96, 0, (void **)v18, (unsigned int *)&a8);
  if ( ProxyInternal >= 0 )
  {
    v14 = v18[0];
    v15 = v18[0];
    *((_DWORD *)v18[0] + 3) = (_DWORD)a8;
    *(_QWORD *)v15 = &DirectComposition::CLegacyRenderTargetProxy::`vftable';
    *((_DWORD *)v15 + 2) = 1;
    ProxyInternal = DirectComposition::CLegacyRenderTargetProxy::Initialize(v15, a2, a3, a4, a5, a6);
    if ( ProxyInternal < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CTransformGroupProxy *))(*(_QWORD *)v14 + 16LL))(v14);
      return (unsigned int)ProxyInternal;
    }
LABEL_9:
    *v8 = v14;
  }
  return (unsigned int)ProxyInternal;
}
