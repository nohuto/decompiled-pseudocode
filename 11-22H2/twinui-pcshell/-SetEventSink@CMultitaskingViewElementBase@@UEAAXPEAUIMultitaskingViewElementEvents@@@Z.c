/*
 * XREFs of ?SetEventSink@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElementEvents@@@Z @ 0x180575730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::SetEventSink(
        CMultitaskingViewElementBase *this,
        struct IMultitaskingViewElementEvents *a2)
{
  __int64 v4; // rcx

  if ( *((struct IMultitaskingViewElementEvents **)this + 6) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IMultitaskingViewElementEvents *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
