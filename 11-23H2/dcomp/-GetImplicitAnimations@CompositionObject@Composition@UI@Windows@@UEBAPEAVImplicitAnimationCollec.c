/*
 * XREFs of ?GetImplicitAnimations@CompositionObject@Composition@UI@Windows@@UEBAPEAVImplicitAnimationCollection@234@XZ @ 0x180073CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ImplicitAnimationCollection *__fastcall Windows::UI::Composition::CompositionObject::GetImplicitAnimations(
        Windows::UI::Composition::CompositionObject *this)
{
  __int64 v1; // rax
  int v3; // edx
  int *v4; // rcx

  v1 = *((_QWORD *)this + 14);
  if ( (*(_DWORD *)(v1 + 4) & 0x20000000) == 0 )
    return 0LL;
  v3 = *(_DWORD *)(v1 + 12);
  v4 = (int *)(v1 + 12);
  if ( (v3 & 0x7F000000) != 0x3000000 )
  {
    do
    {
      v4 = (int *)((char *)v4 + (v3 & 0xFFFFFF) + 4);
      v3 = *v4;
    }
    while ( (*v4 & 0x7F000000) != 0x3000000 );
  }
  return *(struct Windows::UI::Composition::ImplicitAnimationCollection **)(v4 + 1);
}
