/*
 * XREFs of ?ValidateMatrix3x2FromRotation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180165BB0
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateMatrix3x2FromRotation(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int a2,
        unsigned int *a3,
        enum DCOMPOSITION_EXPRESSION_TYPE *a4)
{
  int v4; // r10d
  int v5; // r8d
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  *a3 = a2;
  v4 = 16;
  v5 = *(_DWORD *)this;
  if ( *(_DWORD *)this >= a2 )
  {
    *(_DWORD *)a4 = 104;
    if ( a2 == 1 )
    {
      v4 = 15;
      if ( *((_DWORD *)this + (unsigned int)(v5 - 1) + 66) != 18 )
      {
LABEL_5:
        v8 = 6441;
        goto LABEL_6;
      }
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_5;
      v4 = 15;
      if ( *((_DWORD *)this + (unsigned int)(v5 - 2) + 66) != 18
        || *((_DWORD *)this + (unsigned int)(v5 - 1) + 66) != 35 )
      {
        goto LABEL_5;
      }
    }
    return 0;
  }
  v8 = 6419;
LABEL_6:
  v6 = -2147024809;
  *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = v4;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v8, 0LL);
  return v6;
}
