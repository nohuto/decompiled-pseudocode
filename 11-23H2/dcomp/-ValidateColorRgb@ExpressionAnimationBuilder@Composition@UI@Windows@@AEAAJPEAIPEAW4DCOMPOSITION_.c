/*
 * XREFs of ?ValidateColorRgb@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E558
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F820 (-ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateColorRgb(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  bool v3; // cf
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *(_DWORD *)this < 4u;
  *a2 = 4;
  if ( v3 )
  {
    v6 = -2147024809;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024809, 0x1728u, 0LL);
  }
  else
  {
    v5 = Windows::UI::Composition::ExpressionAnimationBuilder::ValidateStackElementsAreOfType(this, 4LL, 18LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, v5, 0x172Au, 0LL);
    }
    else
    {
      *(_DWORD *)a3 = 70;
      return 0;
    }
  }
  return v6;
}
