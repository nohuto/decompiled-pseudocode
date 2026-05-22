/*
 * XREFs of ?SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestructionObject@2@@Z @ 0x180063C1C
 * Callers:
 *     ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974 (-GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAn.c)
 *     ?DisposeOnDelayedDestruction@CPrimitiveGroup@DirectComposition@@UEAAXXZ @ 0x180063C00 (-DisposeOnDelayedDestruction@CPrimitiveGroup@DirectComposition@@UEAAXXZ.c)
 *     ?DisposeOnDelayedDestruction@CCompositionTextureBinding@DirectComposition@@UEAAXXZ @ 0x1800A0490 (-DisposeOnDelayedDestruction@CCompositionTextureBinding@DirectComposition@@UEAAXXZ.c)
 *     ?DisposeOnDelayedDestruction@CFilterEffect@DirectComposition@@UEAAXXZ @ 0x1800F1720 (-DisposeOnDelayedDestruction@CFilterEffect@DirectComposition@@UEAAXXZ.c)
 *     ?DisposeOnDelayedDestruction@CGenericInk@DirectComposition@@MEAAXXZ @ 0x1800F8AB0 (-DisposeOnDelayedDestruction@CGenericInk@DirectComposition@@MEAAXXZ.c)
 *     ?DisposeOnDelayedDestruction@CSynchronousSuperWetInk@DirectComposition@@EEAAXXZ @ 0x1800FC990 (-DisposeOnDelayedDestruction@CSynchronousSuperWetInk@DirectComposition@@EEAAXXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 */

void __fastcall DirectComposition::CResourceProxy::SetDeletedNotificationTag(
        struct IUnknown *a1,
        struct DirectComposition::CDelayedDestructionObject *a2)
{
  DirectComposition::CDevice *v3; // rdi
  DirectComposition::CDeviceLock *v4; // rbx
  int v5; // esi
  _DWORD *v6; // rax
  void *v7; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CDevice *v8; // [rsp+58h] [rbp+20h] BYREF

  DirectComposition::CDevice::GetDeviceAndHandleWorker((unsigned __int64)a1, &v8, (unsigned int *)&v7);
  v3 = v8;
  v4 = (struct DirectComposition::CDevice *)((char *)v8 + 96);
  DirectComposition::CDeviceLock::Enter((struct DirectComposition::CDevice *)((char *)v8 + 96));
  v5 = (int)v7;
  if ( (_DWORD)v7 )
  {
    DirectComposition::CDevice::BeginKernelCommand(v3, 0x10u, &v7, 0);
    v6 = v7;
    *(_DWORD *)v7 = 16;
    v6[1] = v5;
    *((_QWORD *)v6 + 1) = a2;
  }
  if ( v4 )
    DirectComposition::CDeviceLock::Leave(v4);
}
