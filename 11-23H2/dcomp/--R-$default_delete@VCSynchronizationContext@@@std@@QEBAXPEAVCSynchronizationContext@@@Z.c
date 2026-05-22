/*
 * XREFs of ??R?$default_delete@VCSynchronizationContext@@@std@@QEBAXPEAVCSynchronizationContext@@@Z @ 0x1801AD0E4
 * Callers:
 *     ??1CPresentationManager@@EEAA@XZ @ 0x1801ACF48 (--1CPresentationManager@@EEAA@XZ.c)
 *     ?Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z @ 0x1801ADD50 (-Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AEB84 (-Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<CSynchronizationContext>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
