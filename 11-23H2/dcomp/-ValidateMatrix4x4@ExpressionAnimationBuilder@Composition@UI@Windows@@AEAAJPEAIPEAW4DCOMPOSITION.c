/*
 * XREFs of ?ValidateMatrix4x4@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F914
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F820 (-ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateMatrix4x4(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  unsigned int v3; // r10d
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax

  v3 = *(_DWORD *)this;
  *a2 = 1;
  if ( v3 )
  {
    v5 = *((_DWORD *)this + v3 + 65);
    if ( v5 == 18 )
    {
      *a2 = 16;
      if ( v3 < 0x10 )
      {
        v6 = -2147024809;
        *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
        MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024809, 0x1787u, 0LL);
        return v6;
      }
      v8 = Windows::UI::Composition::ExpressionAnimationBuilder::ValidateStackElementsAreOfType(
             (__int64)this,
             0x10u,
             18);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, v8, 0x1789u, 0LL);
        return v6;
      }
    }
    else if ( v5 != 104 )
    {
      v6 = -2147024809;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
      MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024809, 0x1796u, 0LL);
      return v6;
    }
    v6 = 0;
    *(_DWORD *)a3 = 265;
  }
  else
  {
    v6 = -2147024809;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024809, 0x177Cu, 0LL);
  }
  return v6;
}
