/*
 * XREFs of ?CreateRemoteRenderTarget@CDevice@DirectComposition@@UEAAJU_LUID@@PEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800F0240
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?Release@CSharedManipulationTransformProxy@DirectComposition@@UEAAKXZ @ 0x18006A840 (-Release@CSharedManipulationTransformProxy@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateRemoteRenderTarget(
        DirectComposition::CDevice *this,
        struct _LUID a2,
        struct IDCompositionRenderTargetPartner **a3)
{
  int ProxyInternal; // edi
  DWORD LowPart; // eax
  DirectComposition::CSharedManipulationTransformProxy *v7; // r14
  DirectComposition::CResourceProxy *v8; // rcx
  struct _LUID v10; // [rsp+60h] [rbp+18h] BYREF
  DirectComposition::CSharedManipulationTransformProxy *v11; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    *a3 = 0LL;
    ProxyInternal = DirectComposition::CDevice::CreateProxyInternal(
                      (DirectComposition::CDevice *)((char *)this - 24),
                      144,
                      0,
                      (void **)&v11,
                      (unsigned int *)&v10);
    if ( ProxyInternal >= 0 )
    {
      LowPart = v10.LowPart;
      v7 = v11;
      v10 = a2;
      v8 = (DirectComposition::CSharedManipulationTransformProxy *)((char *)v11 + 8);
      *((_DWORD *)v11 + 3) = LowPart;
      *(_DWORD *)v8 = 1;
      *(_QWORD *)v7 = &DirectComposition::CRemoteRenderTargetProxy::`vftable';
      ProxyInternal = DirectComposition::CResourceProxy::SetBufferProperty(v8, 2, &v10, 8uLL);
      if ( ProxyInternal < 0 )
        DirectComposition::CSharedManipulationTransformProxy::Release(v7);
      else
        *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)ProxyInternal;
}
