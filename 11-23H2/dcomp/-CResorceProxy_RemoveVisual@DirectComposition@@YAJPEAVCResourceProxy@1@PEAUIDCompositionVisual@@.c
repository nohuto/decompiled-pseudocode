/*
 * XREFs of ?CResorceProxy_RemoveVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@@Z @ 0x1800FE954
 * Callers:
 *     ?RemoveVisual@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x1800F40B0 (-RemoveVisual@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUID.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?VisualRemoveChild@CDevice@DirectComposition@@QEAAXII@Z @ 0x1800F6D60 (-VisualRemoveChild@CDevice@DirectComposition@@QEAAXII@Z.c)
 */

__int64 __fastcall DirectComposition::CResorceProxy_RemoveVisual(
        DirectComposition *this,
        struct DirectComposition::CResourceProxy *a2,
        struct IDCompositionVisual *a3)
{
  unsigned __int64 v3; // r11
  struct DirectComposition::CDevice *v4; // rbx
  unsigned int v5; // ebx
  struct DirectComposition::CDevice *v7; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+20h] BYREF
  struct DirectComposition::CDevice *v10; // [rsp+68h] [rbp+28h] BYREF

  v10 = 0LL;
  v9 = 0;
  v7 = 0LL;
  v8 = 0;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(
    ((unsigned __int64)this - 8) & -(__int64)(this != 0LL),
    &v10,
    &v9);
  v4 = v10;
  if ( v10 && v9 && (DirectComposition::CDevice::GetDeviceAndHandleWorker(v3, &v7, &v8), v7) && v8 )
  {
    if ( v4 == v7 )
    {
      v10 = (struct DirectComposition::CDevice *)((char *)v4 + 96);
      DirectComposition::CDeviceLock::Enter((struct DirectComposition::CDevice *)((char *)v4 + 96));
      DirectComposition::CDevice::VisualRemoveChild(v4, v9, v8);
      v5 = DirectComposition::CDevice::TryFlushKernelCommands(v4, 0);
      CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v10);
    }
    else
    {
      return (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)v4 + 20) + 104LL))(
               *((_QWORD *)v4 + 20),
               v9,
               *((_QWORD *)v7 + 20),
               v8);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v5;
}
