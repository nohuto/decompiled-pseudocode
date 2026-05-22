/*
 * XREFs of ?ValidateVector4Transform@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016761C
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateVector4Transform(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)this;
  *a2 = 2;
  if ( v3 >= 2 )
  {
    *(_DWORD *)a3 = 69;
    v5 = *((_DWORD *)this + v3 + 65);
    v6 = *((_DWORD *)this + v3 + 64);
    if ( v6 == 35 || v6 == 52 || v6 == 69 )
    {
      if ( v5 == 71 || v5 == 265 )
        return 0;
      v8 = 7257;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    }
    else
    {
      v8 = 7246;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    }
  }
  else
  {
    v8 = 7231;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v8, 0LL);
  return v4;
}
