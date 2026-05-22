/*
 * XREFs of ?Destroy@VisualUnorderedCollection@Composition@UI@Windows@@UEAAXXZ @ 0x180011C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::VisualUnorderedCollection::Destroy(
        Windows::UI::Composition::VisualUnorderedCollection *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 20);
  if ( v2 )
  {
    (**v2)(v2);
    *((_QWORD *)this + 20) = 0LL;
  }
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
