/*
 * XREFs of ?ValidateMatrix3x2FromSkew@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180165C68
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateMatrix3x2FromSkew(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int a2,
        unsigned int *a3,
        enum DCOMPOSITION_EXPRESSION_TYPE *a4)
{
  int v4; // r11d
  unsigned int v5; // r8d
  bool v6; // zf
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  *a3 = a2;
  v4 = 16;
  v5 = *(_DWORD *)this;
  *(_DWORD *)a4 = 104;
  if ( v5 < a2 )
  {
    v9 = 6358;
LABEL_13:
    v7 = -2147024809;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = v4;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v9, 0LL);
    return v7;
  }
  if ( a2 == 2 )
  {
    v4 = 15;
    if ( *((_DWORD *)this + v5 + 64) != 18 )
    {
LABEL_12:
      v9 = 6384;
      goto LABEL_13;
    }
    v6 = *((_DWORD *)this + v5 + 65) == 18;
  }
  else
  {
    if ( a2 != 3 )
      goto LABEL_12;
    v4 = 15;
    if ( *((_DWORD *)this + v5 + 63) != 18 || *((_DWORD *)this + v5 + 64) != 18 )
      goto LABEL_12;
    v6 = *((_DWORD *)this + v5 + 65) == 35;
  }
  if ( !v6 )
    goto LABEL_12;
  return 0;
}
