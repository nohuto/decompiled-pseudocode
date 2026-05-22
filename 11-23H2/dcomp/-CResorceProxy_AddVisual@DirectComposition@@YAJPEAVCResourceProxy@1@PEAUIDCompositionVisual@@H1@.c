/*
 * XREFs of ?CResorceProxy_AddVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@H1@Z @ 0x18000F888
 * Callers:
 *     ?AddVisual@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionVisual@@H0@Z @ 0x18000F870 (-AddVisual@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCom.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?VisualAddChild@CDevice@DirectComposition@@QEAAXIIHI@Z @ 0x180061EB4 (-VisualAddChild@CDevice@DirectComposition@@QEAAXIIHI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CResorceProxy_AddVisual(
        DirectComposition *this,
        struct DirectComposition::CResourceProxy *a2,
        struct IDCompositionVisual *a3,
        void *a4)
{
  struct DirectComposition::CDevice *v6; // rsi
  unsigned int v7; // edi
  int v8; // r11d
  struct DirectComposition::CDevice *v9; // rbx
  __int64 v10; // r11
  struct DirectComposition::CDevice *v11; // r15
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-1Ch] BYREF
  struct DirectComposition::CDevice *v16; // [rsp+48h] [rbp-18h] BYREF
  struct DirectComposition::CDevice *v17; // [rsp+50h] [rbp-10h] BYREF
  struct DirectComposition::CDevice *v18; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF
  int v20; // [rsp+A0h] [rbp+40h]

  v20 = (int)a3;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v14 = 0;
  v19 = 0;
  v15 = 0;
  v6 = 0LL;
  v7 = 0;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(
    (void *)(((unsigned __int64)this - 8) & -(__int64)(this != 0LL)),
    &v16,
    &v14);
  v9 = v16;
  if ( v16
    && v14 != v8
    && (DirectComposition::CDevice::GetDeviceAndHandleWorker(a2, &v17, &v19), (v11 = v17) != 0LL)
    && v19 != (_DWORD)v10
    && (!a4
     || (DirectComposition::CDevice::GetDeviceAndHandleWorker(a4, &v18, &v15), (v6 = v18) != 0LL) && (v7 = v15) != 0) )
  {
    if ( v9 == v11 && (!a4 || v6 == v9) )
    {
      v18 = (struct DirectComposition::CDevice *)((char *)v9 + 96);
      DirectComposition::CDeviceLock::Enter((struct DirectComposition::CDevice *)((char *)v9 + 96));
      DirectComposition::CDevice::VisualAddChild(v9, v14, v19, v20, v7);
      v12 = DirectComposition::CDevice::TryFlushKernelCommands(v9, 0);
      CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v18);
    }
    else
    {
      if ( a4 )
        v10 = *((_QWORD *)v6 + 20);
      else
        v7 = v10;
      return (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64, unsigned int))(**((_QWORD **)v9 + 20) + 96LL))(
               *((_QWORD *)v9 + 20),
               v14,
               *((_QWORD *)v11 + 20),
               v19,
               v20,
               v10,
               v7);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v12;
}
