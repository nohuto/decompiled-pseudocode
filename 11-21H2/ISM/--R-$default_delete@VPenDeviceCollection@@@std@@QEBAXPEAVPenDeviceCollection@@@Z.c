/*
 * XREFs of ??R?$default_delete@VPenDeviceCollection@@@std@@QEBAXPEAVPenDeviceCollection@@@Z @ 0x1800CB2A8
 * Callers:
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002AEA0 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VPenDeviceCollection@@U?$default_delete@VPenDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800CB220 (--1-$unique_ptr@VPenDeviceCollection@@U-$default_delete@VPenDeviceCollection@@@std@@@std@@QEAA@X.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<PenDeviceCollection>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  return result;
}
