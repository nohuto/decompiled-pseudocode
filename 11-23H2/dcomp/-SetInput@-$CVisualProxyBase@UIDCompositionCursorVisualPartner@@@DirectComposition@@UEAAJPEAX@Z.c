/*
 * XREFs of ?SetInput@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAX@Z @ 0x1800F5530
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?VisualSetInputSink@CDevice@DirectComposition@@QEAAJIPEAX@Z @ 0x180035648 (-VisualSetInputSink@CDevice@DirectComposition@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::SetInput(
        __int64 a1,
        void *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  DirectComposition::CDevice *v6; // rbx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1 + 8;
  v4 = -a1;
  if ( (v2 & -(__int64)(v4 != 0)) != 0 )
    v5 = (v2 & -(__int64)(v4 != 0)) - 8;
  else
    v5 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v5, &v9, &v8);
  v6 = v9;
  v9 = (struct DirectComposition::CDevice *)((char *)v9 + 96);
  DirectComposition::CDeviceLock::Enter(v9);
  LODWORD(v6) = DirectComposition::CDevice::VisualSetInputSink(v6, v8, a2);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v9);
  return (unsigned int)v6;
}
