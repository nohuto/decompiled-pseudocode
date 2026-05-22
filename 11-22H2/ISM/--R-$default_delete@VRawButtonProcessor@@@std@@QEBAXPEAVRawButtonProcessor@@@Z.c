/*
 * XREFs of ??R?$default_delete@VRawButtonProcessor@@@std@@QEBAXPEAVRawButtonProcessor@@@Z @ 0x1801E0088
 * Callers:
 *     ??1?$unique_ptr@VRawButtonProcessor@@U?$default_delete@VRawButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1801DFF68 (--1-$unique_ptr@VRawButtonProcessor@@U-$default_delete@VRawButtonProcessor@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<RawButtonProcessor>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 8) + 24LL))(a2 + 8, 1LL);
  return result;
}
