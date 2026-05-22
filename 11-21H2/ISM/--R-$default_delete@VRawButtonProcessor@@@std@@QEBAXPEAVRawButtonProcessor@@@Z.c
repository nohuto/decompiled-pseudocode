/*
 * XREFs of ??R?$default_delete@VRawButtonProcessor@@@std@@QEBAXPEAVRawButtonProcessor@@@Z @ 0x1801B42F8
 * Callers:
 *     ??1?$unique_ptr@VRawButtonProcessor@@U?$default_delete@VRawButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1801B41D8 (--1-$unique_ptr@VRawButtonProcessor@@U-$default_delete@VRawButtonProcessor@@@std@@@std@@QEAA@XZ.c)
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801B4524 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<RawButtonProcessor>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 8) + 24LL))(a2 + 8, 1LL);
  return result;
}
