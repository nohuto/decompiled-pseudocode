/*
 * XREFs of ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1C0235978
 * Callers:
 *     ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0235920 (-ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 *     ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1C0235A50 (-SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  char *v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // rax

  v1 = (char *)*((_QWORD *)this + 12);
  if ( v1 )
  {
    v3 = 0;
    if ( !*((_QWORD *)this + 14) )
      goto LABEL_6;
    v4 = 0LL;
    do
    {
      ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 12) + 8 * v4));
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 14) );
    v1 = (char *)*((_QWORD *)this + 12);
    if ( v1 )
LABEL_6:
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v1);
    *((_QWORD *)this + 12) = 0LL;
  }
}
