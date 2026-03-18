/*
 * XREFs of ?Trim@CD3DDevice@@QEAAXXZ @ 0x180104658
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x18006ED84 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800FF054 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x180104858 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x180285A8C (-TrimAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x18028F414 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x18028FA54 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 *     ?SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@I@Z @ 0x18029EAB0 (-SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007769C (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800CACC8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1801045D8 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801047B4 (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::Trim(CD3DDevice *this)
{
  char *v1; // rdi
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = (char *)this + 464;
  v2 = 0LL;
  if ( *((_DWORD *)this + 122) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)v1 + 8 * v2);
      *(_BYTE *)(v6 + 176) = 0;
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v6);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)v1 + 6) );
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v1, 8u);
  CD2DContext::ReleaseCachedD2DTarget((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyReleasedResources((CD3DDevice *)((char *)this + 1104));
  v4 = *((_QWORD *)this + 70);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 880LL))(v4);
  v5 = *((_QWORD *)this + 67);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
  *((_BYTE *)this + 1508) = 0;
}
