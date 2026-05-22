/*
 * XREFs of ?Destroy@GlobalCompositionTarget@Composition@UI@Windows@@UEAAXXZ @ 0x180158CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ @ 0x18008A69C (--1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::GlobalCompositionTarget::Destroy(
        Windows::UI::Composition::GlobalCompositionTarget *this)
{
  Windows::UI::Composition::SystemBackdropHelper *v1; // rdi

  v1 = (Windows::UI::Composition::SystemBackdropHelper *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v1 )
  {
    Windows::UI::Composition::SystemBackdropHelper::~SystemBackdropHelper(v1);
    operator delete(v1);
  }
  Windows::UI::Composition::CompositionTarget::Destroy(this);
}
