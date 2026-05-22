/*
 * XREFs of ?CreateDesktopTree@CDevice@DirectComposition@@UEAAJU_LUID@@PEAPEAUIDCompositionDesktopTreePartner@@@Z @ 0x1800EF1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateDesktopTree(
        DirectComposition::CDevice *this,
        struct _LUID a2,
        struct IDCompositionDesktopTreePartner **a3)
{
  int ProxyInternal; // edi
  DWORD LowPart; // eax
  DirectComposition::CTransformGroupProxy *v7; // r14
  DirectComposition::CResourceProxy *v8; // rcx
  struct _LUID v10; // [rsp+60h] [rbp+18h] BYREF
  DirectComposition::CTransformGroupProxy *v11; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    *a3 = 0LL;
    ProxyInternal = DirectComposition::CDevice::CreateProxyInternal(
                      (DirectComposition::CDevice *)((char *)this - 16),
                      53,
                      0,
                      (void **)&v11,
                      (unsigned int *)&v10);
    if ( ProxyInternal >= 0 )
    {
      LowPart = v10.LowPart;
      v7 = v11;
      v10 = a2;
      v8 = (DirectComposition::CTransformGroupProxy *)((char *)v11 + 8);
      *((_DWORD *)v11 + 3) = LowPart;
      *(_QWORD *)v7 = &DirectComposition::CDesktopTreeProxy::`vftable';
      *(_DWORD *)v8 = 1;
      ProxyInternal = DirectComposition::CResourceProxy::SetBufferProperty(v8, 0, &v10, 8uLL);
      if ( ProxyInternal < 0 )
        DirectComposition::CTransformGroupProxy::Release(v7);
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
