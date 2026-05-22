/*
 * XREFs of ?ValidateEqualityComparison@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801657C4
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateEqualityComparison(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  int v4; // edx
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // edx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  *a2 = 2;
  v4 = *(_DWORD *)this;
  if ( *(_DWORD *)this >= 2u )
  {
    v6 = *((_DWORD *)this + (unsigned int)(v4 - 2) + 66);
    v7 = *((_DWORD *)this + (unsigned int)(v4 - 1) + 66);
    if ( v6 == 17 || v6 == 18 || v6 == 35 || v6 == 52 || v6 == 69 || v6 == 70 || v6 == 71 || v6 == 104 || v6 == 265 )
    {
      if ( v6 == v7 )
      {
        *(_DWORD *)a3 = 17;
        return 0;
      }
      v9 = 4977;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    }
    else
    {
      v9 = 4985;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    }
  }
  else
  {
    v9 = 4960;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 8;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v9, 0LL);
  return v5;
}
