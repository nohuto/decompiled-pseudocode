/*
 * XREFs of ?CreateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@PEAPEAUIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@Z @ 0x1800F1220
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ??$ReleaseInterface@VCVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@@@YAXAEAPEAVCVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@@Z @ 0x1800ECF9C (--$ReleaseInterface@VCVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@@@YAXAEAPEAVCVir.c)
 *     ?SetBindData@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@QEAAJ_KAEBUtagRECT@@1_NI@Z @ 0x1800F4800 (-SetBindData@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@QEAAJ_KAEBUtagRECT@@1_NI.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateVirtualMonitorCaptureRenderTarget(
        DirectComposition::CDevice *this,
        unsigned __int64 a2,
        const struct tagRECT *a3,
        struct IDCompositionVirtualMonitorCaptureRenderTargetInternal **a4)
{
  int v7; // ebx
  DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *v8; // rsi
  DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *v9; // rcx
  DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *v11; // [rsp+30h] [rbp-38h] BYREF
  DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *v12; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT v13; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( a4 )
  {
    v11 = 0LL;
    v7 = DirectComposition::CDevice::CreateProxyInternal(
           (DirectComposition::CDevice *)((char *)this - 40),
           195,
           0,
           (void **)&v12,
           &v14);
    if ( v7 < 0
      || (v8 = v12,
          v9 = v12,
          v11 = v12,
          *((_DWORD *)v12 + 3) = v14,
          *(_QWORD *)v9 = &DirectComposition::CVirtualMonitorCaptureRenderTargetProxy::`vftable',
          *((_DWORD *)v9 + 2) = 1,
          v7 = DirectComposition::CVirtualMonitorCaptureRenderTargetProxy::SetBindData(v9, a2, a3, &v13, 0, 0),
          v7 < 0) )
    {
      ReleaseInterface<DirectComposition::CVirtualMonitorCaptureRenderTargetProxy>(&v11);
      *a4 = 0LL;
    }
    else
    {
      *a4 = v8;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v7;
}
