/*
 * XREFs of ?ValidateColorHsl@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180165590
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F820 (-ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateColorHsl(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  unsigned int v4; // ebx
  signed int v5; // eax

  *a2 = 3;
  if ( *(_DWORD *)this >= 3u )
  {
    v5 = Windows::UI::Composition::ExpressionAnimationBuilder::ValidateStackElementsAreOfType((__int64)this, 3u, 18);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, v5, 0x170Eu, 0LL);
    }
    else
    {
      *(_DWORD *)a3 = 70;
      return 0;
    }
  }
  else
  {
    v4 = -2147024809;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, 0x170Cu, 0LL);
  }
  return v4;
}
