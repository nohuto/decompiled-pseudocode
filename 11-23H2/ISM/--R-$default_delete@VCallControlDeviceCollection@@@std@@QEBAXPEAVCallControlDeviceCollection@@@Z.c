/*
 * XREFs of ??R?$default_delete@VCallControlDeviceCollection@@@std@@QEBAXPEAVCallControlDeviceCollection@@@Z @ 0x1800E0684
 * Callers:
 *     ??1?$unique_ptr@VCallControlDeviceCollection@@U?$default_delete@VCallControlDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E0664 (--1-$unique_ptr@VCallControlDeviceCollection@@U-$default_delete@VCallControlDeviceCollection@@@s.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<CallControlDeviceCollection>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  return result;
}
