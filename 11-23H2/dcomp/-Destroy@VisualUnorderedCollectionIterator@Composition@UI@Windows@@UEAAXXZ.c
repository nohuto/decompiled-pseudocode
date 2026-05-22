/*
 * XREFs of ?Destroy@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAXXZ @ 0x1801A3840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::VisualUnorderedCollectionIterator::Destroy(
        Windows::UI::Composition::VisualUnorderedCollectionIterator *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 8);
  if ( v2 )
  {
    (**v2)(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 18) = 0;
  Microsoft::WRL2::ContextRuntimeClass::Destroy(this);
}
