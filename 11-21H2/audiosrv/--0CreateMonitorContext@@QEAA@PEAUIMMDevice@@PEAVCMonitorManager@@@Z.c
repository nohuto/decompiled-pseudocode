/*
 * XREFs of ??0CreateMonitorContext@@QEAA@PEAUIMMDevice@@PEAVCMonitorManager@@@Z @ 0x180119364
 * Callers:
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011A114 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CreateMonitorContext *__fastcall CreateMonitorContext::CreateMonitorContext(
        CreateMonitorContext *this,
        struct IMMDevice *a2,
        struct CMonitorManager *a3)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct CMonitorManager *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
