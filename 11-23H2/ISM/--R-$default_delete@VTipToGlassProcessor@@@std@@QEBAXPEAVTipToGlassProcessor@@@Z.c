/*
 * XREFs of ??R?$default_delete@VTipToGlassProcessor@@@std@@QEBAXPEAVTipToGlassProcessor@@@Z @ 0x1801D2638
 * Callers:
 *     ??1?$unique_ptr@VTipToGlassProcessor@@U?$default_delete@VTipToGlassProcessor@@@std@@@std@@QEAA@XZ @ 0x1801D2618 (--1-$unique_ptr@VTipToGlassProcessor@@U-$default_delete@VTipToGlassProcessor@@@std@@@std@@QEAA@X.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<TipToGlassProcessor>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 8) + 24LL))(a2 + 8, 1LL);
  return result;
}
