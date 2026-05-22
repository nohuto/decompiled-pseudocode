/*
 * XREFs of ??R?$default_delete@VKernelChannel@DirectComposition@@@std@@QEBAXPEAVKernelChannel@DirectComposition@@@Z @ 0x1801002F0
 * Callers:
 *     ??1?$unique_ptr@VKernelChannel@DirectComposition@@U?$default_delete@VKernelChannel@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1801002D0 (--1-$unique_ptr@VKernelChannel@DirectComposition@@U-$default_delete@VKernelChannel@DirectComposi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<DirectComposition::KernelChannel>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
