/*
 * XREFs of std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___ @ 0x14006AB60
 * Callers:
 *     ?AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x14006C08C (-AddDeviceOrientationNotificationClient@CAPOProcessingHost@@AEAAJPEAVCAPOProcessingHostObject@@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDeviceOrientationNotificationsHandler@@QEAA@XZ @ 0x14006B6FC (--0CDeviceOrientationNotificationsHandler@@QEAA@XZ.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x14006BDC0 (--1_Init_once_completer@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  CDeviceOrientationNotificationsHandler *v4; // rax
  CDeviceOrientationNotificationsHandler *v5; // rbx
  CDeviceOrientationNotificationsHandler *v6; // rdx
  __int64 v7; // rcx
  union _RTL_RUN_ONCE *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF

  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v8 = a1;
    v4 = (CDeviceOrientationNotificationsHandler *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    if ( v4 )
    {
      memset_0(v4, 0, 0x68uLL);
      v6 = CDeviceOrientationNotificationsHandler::CDeviceOrientationNotificationsHandler(v5);
    }
    else
    {
      v6 = 0LL;
    }
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 296LL);
    *(_QWORD *)(*(_QWORD *)a2 + 296LL) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v9 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v8);
  }
}
