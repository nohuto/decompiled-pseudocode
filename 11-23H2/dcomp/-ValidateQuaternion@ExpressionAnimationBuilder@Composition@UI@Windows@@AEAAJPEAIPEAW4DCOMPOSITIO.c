/*
 * XREFs of ?ValidateQuaternion@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180166738
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F820 (-ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateQuaternion(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  bool v3; // cf
  unsigned int v5; // ebx
  signed int v6; // eax

  v3 = *(_DWORD *)this < 4u;
  *a2 = 4;
  if ( v3 )
  {
    v5 = -2147024809;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, 0x1744u, 0LL);
  }
  else
  {
    v6 = Windows::UI::Composition::ExpressionAnimationBuilder::ValidateStackElementsAreOfType((__int64)this, 4u, 18);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, v6, 0x1746u, 0LL);
    }
    else
    {
      *(_DWORD *)a3 = 71;
      return 0;
    }
  }
  return v5;
}
