/*
 * XREFs of ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x1801D3120
 * Callers:
 *     ??1?$unique_ptr@VSystemButtonProcessor@@U?$default_delete@VSystemButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1801D3100 (--1-$unique_ptr@VSystemButtonProcessor@@U-$default_delete@VSystemButtonProcessor@@@std@@@std@@QE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<SystemButtonProcessor>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 8) + 24LL))(a2 + 8, 1LL);
  return result;
}
