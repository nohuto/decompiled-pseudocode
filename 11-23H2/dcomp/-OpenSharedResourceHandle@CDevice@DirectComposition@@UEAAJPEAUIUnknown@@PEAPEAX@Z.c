/*
 * XREFs of ?OpenSharedResourceHandle@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAX@Z @ 0x1800354E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1800336D4 (-ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::OpenSharedResourceHandle(
        DirectComposition::CDevice *this,
        struct IUnknown *a2,
        void **a3)
{
  __int64 v4; // r11
  DirectComposition::CDevice *v5; // rbx
  int v6; // ebx
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF
  struct DirectComposition::CDevice *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( !a3 )
    return (unsigned int)-2147024809;
  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_8:
    *a3 = 0LL;
    return (unsigned int)v6;
  }
  DirectComposition::CDevice::GetDeviceAndHandleWorker((unsigned __int64)a2, &v9, &v8);
  v5 = (DirectComposition::CDevice *)(v4 - 16);
  if ( v9 == (struct DirectComposition::CDevice *)(v4 - 16) )
  {
    v9 = (struct DirectComposition::CDevice *)(v4 + 80);
    DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(v4 + 80));
    v6 = DirectComposition::CDevice::ResourceOpenSharedHandle(v5, v8, a3);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v9);
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v6 < 0 )
    goto LABEL_8;
  return (unsigned int)v6;
}
