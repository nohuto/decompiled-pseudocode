/*
 * XREFs of ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x18003D330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::GetFrame(
        CFrameApplicationPresentation *this,
        struct IApplicationFrameProxy **a2)
{
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 14) == 2 )
    return 2147947423LL;
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct IApplicationFrameProxy *)*((_QWORD *)this + 15);
  return 0LL;
}
