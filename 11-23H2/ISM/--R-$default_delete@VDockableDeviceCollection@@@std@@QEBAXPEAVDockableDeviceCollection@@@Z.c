/*
 * XREFs of ??R?$default_delete@VDockableDeviceCollection@@@std@@QEBAXPEAVDockableDeviceCollection@@@Z @ 0x1800E3268
 * Callers:
 *     ??1?$unique_ptr@VDockableDeviceCollection@@U?$default_delete@VDockableDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E3090 (--1-$unique_ptr@VDockableDeviceCollection@@U-$default_delete@VDockableDeviceCollection@@@std@@@s.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<DockableDeviceCollection>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  return result;
}
