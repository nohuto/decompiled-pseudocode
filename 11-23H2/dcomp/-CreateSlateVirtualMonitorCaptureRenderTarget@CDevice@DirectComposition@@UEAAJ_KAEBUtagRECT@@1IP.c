/*
 * XREFs of ?CreateSlateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@1IPEAPEAUIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@Z @ 0x1800F08E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ??$ReleaseInterface@VCVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@@@YAXAEAPEAVCVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@@Z @ 0x1800ECF9C (--$ReleaseInterface@VCVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@@@YAXAEAPEAVCVir.c)
 *     ?SetBindData@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@QEAAJ_KAEBUtagRECT@@1_NI@Z @ 0x1800F4800 (-SetBindData@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@QEAAJ_KAEBUtagRECT@@1_NI.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSlateVirtualMonitorCaptureRenderTarget(
        DirectComposition::CDevice *this,
        unsigned __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        struct IDCompositionVirtualMonitorCaptureRenderTargetInternal **a6)
{
  struct IDCompositionVirtualMonitorCaptureRenderTargetInternal **v6; // rdi
  int ProxyInternal; // ebx
  DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *v11; // rsi
  DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *v12; // rcx
  DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *v14; // [rsp+30h] [rbp-28h] BYREF
  DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *v15; // [rsp+38h] [rbp-20h] BYREF

  v6 = a6;
  if ( a6 )
  {
    v14 = 0LL;
    ProxyInternal = DirectComposition::CDevice::CreateProxyInternal(
                      (DirectComposition::CDevice *)((char *)this - 40),
                      195,
                      0,
                      (void **)&v15,
                      (unsigned int *)&a6);
    if ( ProxyInternal < 0
      || (v11 = v15,
          v14 = v15,
          v12 = v15,
          *((_DWORD *)v15 + 3) = (_DWORD)a6,
          *(_QWORD *)v11 = &DirectComposition::CVirtualMonitorCaptureRenderTargetProxy::`vftable',
          *((_DWORD *)v11 + 2) = 1,
          ProxyInternal = DirectComposition::CVirtualMonitorCaptureRenderTargetProxy::SetBindData(
                            v12,
                            a2,
                            a3,
                            a4,
                            1,
                            a5),
          ProxyInternal < 0) )
    {
      ReleaseInterface<DirectComposition::CVirtualMonitorCaptureRenderTargetProxy>(&v14);
      *v6 = 0LL;
    }
    else
    {
      *v6 = v11;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)ProxyInternal;
}
