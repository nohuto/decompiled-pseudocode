/*
 * XREFs of ?RemoveAllVisuals@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJXZ @ 0x1800F3F60
 * Callers:
 *     <none>
 * Callees:
 *     ?VisualRemoveAllChildren@CDevice@DirectComposition@@QEAAXI@Z @ 0x18000F564 (-VisualRemoveAllChildren@CDevice@DirectComposition@@QEAAXI@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::RemoveAllVisuals(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  DirectComposition::CDevice *v4; // rbx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1 + 8;
  v2 = -a1;
  if ( (v1 & -(__int64)(v2 != 0)) != 0 )
    v3 = (v1 & -(__int64)(v2 != 0)) - 8;
  else
    v3 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v3, &v7, &v6);
  v4 = v7;
  v7 = (struct DirectComposition::CDevice *)((char *)v7 + 96);
  DirectComposition::CDeviceLock::Enter(v7);
  DirectComposition::CDevice::VisualRemoveAllChildren(v4, v6);
  LODWORD(v4) = DirectComposition::CDevice::TryFlushKernelCommands(v4, 0);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v7);
  return (unsigned int)v4;
}
