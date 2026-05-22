/*
 * XREFs of ??$_Destroy_range@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAXPEAUObjectPropertyStringTuple@@QEAU1@AEAV?$allocator@UObjectPropertyStringTuple@@@0@@Z @ 0x180046D78
 * Callers:
 *     ??$_Uninitialized_move@PEAUObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAPEAUObjectPropertyStringTuple@@QEAU1@0PEAU1@AEAV?$allocator@UObjectPropertyStringTuple@@@0@@Z @ 0x180046C94 (--$_Uninitialized_move@PEAUObjectPropertyStringTuple@@V-$allocator@UObjectPropertyStringTuple@@@.c)
 *     ?SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18004D960 (-SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVComposi.c)
 *     ??_EKeyFrameAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180053640 (--_EKeyFrameAnimator@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ @ 0x180161958 (--1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?Destroy@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAXXZ @ 0x1801905E0 (-Destroy@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall std::_Destroy_range<std::allocator<ObjectPropertyStringTuple>>(HSTRING *a1, HSTRING *a2)
{
  HSTRING *v3; // rbx
  HSTRING *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      WindowsDeleteString(v3[1]);
      v3[1] = 0LL;
      WindowsDeleteString(*v3);
      *v3 = 0LL;
      v3 += 3;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
