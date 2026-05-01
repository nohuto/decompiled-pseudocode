/*
 * XREFs of ?GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18004ADE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::GetView(CTaskWindow *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *, void **); // rcx

  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 6);
  if ( v3 )
    return (**v3)(v3, a2, a3);
  else
    return 2147943568LL;
}
