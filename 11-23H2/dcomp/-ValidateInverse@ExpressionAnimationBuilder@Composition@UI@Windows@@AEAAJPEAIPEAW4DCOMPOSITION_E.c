/*
 * XREFs of ?ValidateInverse@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801658C4
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateInverse(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)this;
  *a2 = 1;
  if ( v3 )
  {
    v5 = *((_DWORD *)this + (unsigned int)(v3 - 1) + 66);
    if ( v5 == 104 || v5 == 265 )
    {
      *(_DWORD *)a3 = v5;
      return 0;
    }
    v7 = 5313;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
  }
  else
  {
    v7 = 5297;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v7, 0LL);
  return v4;
}
