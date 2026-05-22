/*
 * XREFs of ?SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z @ 0x1800FAC8C
 * Callers:
 *     ?SetAdapterLuidAndBuffers@?$CCaptureRenderTargetProxyBase@UIDCompositionCaptureRenderTargetInternal@@@DirectComposition@@UEAAJAEBU_LUID@@IPEAPEAX@Z @ 0x1800F4340 (-SetAdapterLuidAndBuffers@-$CCaptureRenderTargetProxyBase@UIDCompositionCaptureRenderTargetInter.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ResourceSetHandleArrayProperty@CDevice@DirectComposition@@QEAAJIIPEBQEAXI@Z @ 0x1800F424C (-ResourceSetHandleArrayProperty@CDevice@DirectComposition@@QEAAJIIPEBQEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceProxy::SetHandleArrayProperty(
        DirectComposition::CResourceProxy *this,
        unsigned int a2,
        void *const *a3,
        unsigned int a4)
{
  DirectComposition::CDevice *v6; // rbx
  __int64 v7; // r8
  DirectComposition::CDevice *v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(
    ((unsigned __int64)this - 8) & -(__int64)(this != 0LL),
    &v9,
    &v10);
  v6 = v9;
  v9 = (DirectComposition::CDevice *)((char *)v9 + 96);
  DirectComposition::CDeviceLock::Enter(v9);
  LODWORD(v6) = DirectComposition::CDevice::ResourceSetHandleArrayProperty(v6, v10, v7, a3, a4);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v9);
  return (unsigned int)v6;
}
