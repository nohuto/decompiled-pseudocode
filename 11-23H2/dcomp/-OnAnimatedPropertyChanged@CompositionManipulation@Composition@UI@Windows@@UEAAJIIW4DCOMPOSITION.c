/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionManipulation@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180161530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionManipulation::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        __int64 a7,
        __int16 a8)
{
  if ( a3 == 9 )
    return 0LL;
  else
    return Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(a1, a2, a3, a4, a5, a6, a7, a8);
}
