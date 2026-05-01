/*
 * XREFs of ??1?$com_ptr_t@VWindowDragInputProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18068ACD0
 * Callers:
 *     _WindowDragInputProvider::MsgWindowWndProc_::_1_::dtor$0 @ 0x18068B5CB (_WindowDragInputProvider--MsgWindowWndProc_--_1_--dtor$0.c)
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::com_ptr_t<WindowDragInputProvider,wil::err_exception_policy>::~com_ptr_t<WindowDragInputProvider,wil::err_exception_policy>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((_QWORD *)v1 + 1);
    while ( v2 >= 0 )
    {
      v3 = v2 - 1;
      v4 = v2;
      v2 = _InterlockedCompareExchange64(v1 + 1, v2 - 1, v2);
      if ( v4 == v2 )
        goto LABEL_7;
    }
    v3 = winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v2));
LABEL_7:
    if ( !v3 )
    {
      _InterlockedExchange64(v1 + 1, 1LL);
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v1 + 8))(v1, 1LL);
    }
  }
}
