/*
 * XREFs of ?RedirectMouseToHwnd@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUHWND__@@KK@Z @ 0x1800F3BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z @ 0x1800F6BCC (-VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::RedirectMouseToHwnd(
        __int64 a1,
        HWND a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  DirectComposition::CDevice *v9; // rbx
  struct DirectComposition::CDevice *v11[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v7 = (a1 + 8) & -(__int64)(a1 != 0);
  if ( v7 )
    v8 = v7 - 8;
  else
    v8 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v8, v11, &v12);
  v9 = v11[0];
  v11[0] = (struct DirectComposition::CDevice *)((char *)v11[0] + 96);
  DirectComposition::CDeviceLock::Enter(v11[0]);
  LODWORD(v9) = DirectComposition::CDevice::VisualRedirectMouseToHwnd(v9, v12, a2, a3, a4);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)v11);
  return (unsigned int)v9;
}
