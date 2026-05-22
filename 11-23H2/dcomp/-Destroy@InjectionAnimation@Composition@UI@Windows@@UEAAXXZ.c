/*
 * XREFs of ?Destroy@InjectionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180162750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::InjectionAnimation::Destroy(
        Windows::UI::Composition::InjectionAnimation *this)
{
  _QWORD *v2; // rcx

  while ( *((_QWORD *)this + 46) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 46);
    if ( v2 == *((_QWORD **)this + 45) )
      *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = v2[1];
    v2[1] = 0LL;
    *v2 = 0LL;
    operator delete(v2);
  }
  Windows::UI::Composition::CompositionAnimation::Destroy(this);
}
