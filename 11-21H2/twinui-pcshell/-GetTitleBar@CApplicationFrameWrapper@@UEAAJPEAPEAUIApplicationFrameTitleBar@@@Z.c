/*
 * XREFs of ?GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18014F620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameWrapper::GetTitleBar(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameTitleBar **a2)
{
  struct IApplicationFrameTitleBar *v4; // rcx

  v4 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 15);
  }
  *a2 = v4;
  return 0LL;
}
