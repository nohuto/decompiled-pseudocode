/*
 * XREFs of ?CreateRemoteAppRenderTarget@CDevice@DirectComposition@@UEAAJPEAUHWND__@@AEBUtagRECT@@PEAPEAUIDCompositionRemoteAppRenderTargetPartner@@@Z @ 0x1800F0160
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateRemoteAppRenderTarget(
        DirectComposition::CDevice *this,
        __int64 a2,
        const struct tagRECT *a3,
        struct IDCompositionRemoteAppRenderTargetPartner **a4)
{
  int v7; // ebx
  DirectComposition::CTransformGroupProxy *v8; // rsi
  DirectComposition::CResourceProxy *v9; // r14
  DirectComposition::CTransformGroupProxy *v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    v7 = DirectComposition::CDevice::CreateProxyInternal(
           (DirectComposition::CDevice *)((char *)this - 24),
           143,
           0,
           (void **)&v11,
           &v12);
    if ( v7 < 0 )
    {
      *a4 = 0LL;
    }
    else
    {
      v8 = v11;
      v9 = (DirectComposition::CTransformGroupProxy *)((char *)v11 + 8);
      *((_DWORD *)v11 + 3) = v12;
      *(_DWORD *)v9 = 1;
      *(_QWORD *)v8 = &DirectComposition::CRemoteAppRenderTargetProxy::`vftable';
      v7 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v9, 3, a2);
      if ( v7 < 0 || (v7 = DirectComposition::CResourceProxy::SetBufferProperty(v9, 1, a3, 0x10uLL), v7 < 0) )
        DirectComposition::CTransformGroupProxy::Release(v8);
      else
        *a4 = v8;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v7;
}
