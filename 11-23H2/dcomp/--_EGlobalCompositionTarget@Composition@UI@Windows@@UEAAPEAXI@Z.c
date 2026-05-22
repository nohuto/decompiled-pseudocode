/*
 * XREFs of ??_EGlobalCompositionTarget@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180158C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ @ 0x18008A69C (--1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CompositionTarget@Composition@UI@Windows@@UEAA@XZ @ 0x180158C14 (--1CompositionTarget@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::GlobalCompositionTarget *__fastcall Windows::UI::Composition::GlobalCompositionTarget::`vector deleting destructor'(
        Windows::UI::Composition::GlobalCompositionTarget *this,
        __int64 a2)
{
  void *v2; // rsi
  char v3; // di

  v2 = (void *)*((_QWORD *)this + 26);
  v3 = a2;
  if ( v2 )
  {
    Windows::UI::Composition::SystemBackdropHelper::~SystemBackdropHelper(*((Windows::UI::Composition::SystemBackdropHelper **)this
                                                                          + 26));
    operator delete(v2);
  }
  Windows::UI::Composition::CompositionTarget::~CompositionTarget(this, a2);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
