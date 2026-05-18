/*
 * XREFs of ??R?$default_delete@VCommandListState@Engine@Spectre@@@std@@QEBAXPEAVCommandListState@Engine@Spectre@@@Z @ 0x1800390C0
 * Callers:
 *     ??1?$unique_ptr@VCommandListState@Engine@Spectre@@U?$default_delete@VCommandListState@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003903C (--1-$unique_ptr@VCommandListState@Engine@Spectre@@U-$default_delete@VCommandListState@Engine@Spe.c)
 *     ?Create@CommandList@Engine@Spectre@@UEAA_NAEBVState@23@@Z @ 0x1800391E0 (-Create@CommandList@Engine@Spectre@@UEAA_NAEBVState@23@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<Spectre::Engine::CommandListState>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
