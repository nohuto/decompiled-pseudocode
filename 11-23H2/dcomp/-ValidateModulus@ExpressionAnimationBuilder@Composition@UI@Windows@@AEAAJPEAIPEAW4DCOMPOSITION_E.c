/*
 * XREFs of ?ValidateModulus@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016656C
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F820 (-ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateModulus(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  unsigned int v4; // ebx
  signed int v5; // eax

  *a2 = 2;
  if ( *(_DWORD *)this >= 2u )
  {
    v5 = Windows::UI::Composition::ExpressionAnimationBuilder::ValidateStackElementsAreOfType((__int64)this, 2u, 18);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, v5, 0x1345u, 0LL);
    }
    else
    {
      *(_DWORD *)a3 = 18;
      return 0;
    }
  }
  else
  {
    v4 = -2147024809;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 8;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, 0x1343u, 0LL);
  }
  return v4;
}
