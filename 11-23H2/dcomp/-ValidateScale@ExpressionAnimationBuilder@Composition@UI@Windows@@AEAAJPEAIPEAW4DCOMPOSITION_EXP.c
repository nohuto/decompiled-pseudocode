/*
 * XREFs of ?ValidateScale@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180166B28
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateScale(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // ebx
  int v5; // edx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)this;
  *a2 = 2;
  if ( v3 >= 2 )
  {
    v5 = *((_DWORD *)this + v3 + 64);
    if ( v5 == 18 || v5 == 35 || v5 == 52 || v5 == 69 || v5 == 104 || v5 == 265 )
    {
      if ( *((_DWORD *)this + v3 + 65) == 18 )
      {
        *(_DWORD *)a3 = v5;
        return 0;
      }
      v7 = 5212;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    }
    else
    {
      v7 = 5220;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    }
  }
  else
  {
    v7 = 5198;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v7, 0LL);
  return v4;
}
