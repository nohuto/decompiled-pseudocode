/*
 * XREFs of ??R?$default_delete@VDockProcessor@@@std@@QEBAXPEAVDockProcessor@@@Z @ 0x1801BA81C
 * Callers:
 *     ??1?$unique_ptr@VDockProcessor@@U?$default_delete@VDockProcessor@@@std@@@std@@QEAA@XZ @ 0x1801BA7FC (--1-$unique_ptr@VDockProcessor@@U-$default_delete@VDockProcessor@@@std@@@std@@QEAA@XZ.c)
 *     ?Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801BA8D0 (-Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<DockProcessor>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 16) + 24LL))(a2 + 16, 1LL);
  return result;
}
