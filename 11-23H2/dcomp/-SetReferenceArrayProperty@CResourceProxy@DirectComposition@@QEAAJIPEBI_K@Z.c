/*
 * XREFs of ?SetReferenceArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBI_K@Z @ 0x180033800
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?SetTransformList@CTransform3DGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform3D@@I@Z @ 0x1800FD5A4 (-SetTransformList@CTransform3DGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform3D.c)
 *     ?SetTransformList@CTransformGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform@@I@Z @ 0x1800FD68C (-SetTransformList@CTransformGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform@@I@.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z @ 0x18003401C (-ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceProxy::SetReferenceArrayProperty(
        DirectComposition::CResourceProxy *this,
        unsigned int a2,
        const unsigned int *a3,
        unsigned __int64 a4)
{
  DirectComposition::CDevice *v7; // rbx
  DirectComposition::CDeviceLock *v8; // r14
  unsigned int v9; // ebx
  DirectComposition::CDevice *v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF

  DirectComposition::CDevice::GetDeviceAndHandleWorker(
    ((unsigned __int64)this - 8) & -(__int64)(this != 0LL),
    &v11,
    &v12);
  v7 = v11;
  v8 = (DirectComposition::CDevice *)((char *)v11 + 96);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)v11 + 96));
  DirectComposition::CDevice::ResourceSetReferenceArrayProperty(v7, v12, a2, a3, a4);
  v9 = DirectComposition::CDevice::TryFlushKernelCommands(v7, 0);
  if ( v8 )
    DirectComposition::CDeviceLock::Leave(v8);
  return v9;
}
