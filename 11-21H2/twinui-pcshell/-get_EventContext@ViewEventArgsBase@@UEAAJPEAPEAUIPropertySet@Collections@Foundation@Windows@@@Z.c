/*
 * XREFs of ?get_EventContext@ViewEventArgsBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180157150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventArgsBase::get_EventContext(
        ViewEventArgsBase *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  __int64 v4; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v5; // rax

  v4 = *((_QWORD *)this + 7);
  v5 = 0LL;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 7);
  }
  *a2 = v5;
  return 0LL;
}
