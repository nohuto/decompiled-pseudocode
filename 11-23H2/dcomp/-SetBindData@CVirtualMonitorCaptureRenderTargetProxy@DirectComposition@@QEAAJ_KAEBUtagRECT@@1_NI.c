/*
 * XREFs of ?SetBindData@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@QEAAJ_KAEBUtagRECT@@1_NI@Z @ 0x1800F4800
 * Callers:
 *     ?CreateSlateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@1IPEAPEAUIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@Z @ 0x1800F08E0 (-CreateSlateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@1IP.c)
 *     ?CreateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@PEAPEAUIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@Z @ 0x1800F1220 (-CreateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@PEAPEAUI.c)
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetProxy::SetBindData(
        DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *this,
        __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        bool a5,
        unsigned int a6)
{
  DirectComposition::CResourceProxy *v7; // rbx
  __int64 result; // rax

  v7 = (DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *)((char *)this + 8);
  result = DirectComposition::CResourceProxy::SetBufferProperty(
             (DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *)((char *)this + 8),
             11,
             a3,
             0x10uLL);
  if ( (int)result >= 0 )
  {
    result = DirectComposition::CResourceProxy::SetBufferProperty(v7, 14, a4, 0x10uLL);
    if ( (int)result >= 0 )
    {
      result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v7, 12, a5);
      if ( (int)result >= 0 )
      {
        result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v7, 10, a2);
        if ( (int)result >= 0 )
          return DirectComposition::CResourceProxy::SetScalarIntegerProperty(v7, 13, a6);
      }
    }
  }
  return result;
}
