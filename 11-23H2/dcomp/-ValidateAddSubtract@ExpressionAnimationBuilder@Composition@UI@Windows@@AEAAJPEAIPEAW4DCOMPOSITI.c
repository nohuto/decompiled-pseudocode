/*
 * XREFs of ?ValidateAddSubtract@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F860
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateAddSubtract(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  unsigned int v3; // r10d
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)this;
  *a2 = 2;
  if ( v3 < 2 )
  {
    v7 = 4760;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 8;
LABEL_11:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024809, v7, 0LL);
    return v5;
  }
  v4 = *((_DWORD *)this + v3 + 64);
  if ( v4 != 18 && v4 != 52 && v4 != 35 && v4 != 69 && v4 != 104 && v4 != 265 )
  {
    v7 = 4782;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    goto LABEL_11;
  }
  if ( v4 != *((_DWORD *)this + v3 + 65) )
  {
    v7 = 4774;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    goto LABEL_11;
  }
  *(_DWORD *)a3 = v4;
  return 0;
}
