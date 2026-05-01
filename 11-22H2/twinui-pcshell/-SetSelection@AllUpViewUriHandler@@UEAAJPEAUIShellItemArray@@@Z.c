/*
 * XREFs of ?SetSelection@AllUpViewUriHandler@@UEAAJPEAUIShellItemArray@@@Z @ 0x180549EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AllUpViewUriHandler::SetSelection(AllUpViewUriHandler *this, struct IShellItemArray *a2)
{
  __int64 v4; // rcx

  if ( *((struct IShellItemArray **)this + 2) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IShellItemArray *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
