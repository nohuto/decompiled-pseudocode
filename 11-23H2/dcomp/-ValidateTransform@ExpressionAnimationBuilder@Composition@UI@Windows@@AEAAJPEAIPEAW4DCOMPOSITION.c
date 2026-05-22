/*
 * XREFs of ?ValidateTransform@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180166E30
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateTransform(
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
    v5 = *((_DWORD *)this + v3 + 64);
    v6 = *((_DWORD *)this + v3 + 65);
    if ( v5 == 35 )
    {
      if ( v6 != 104 )
      {
        v8 = 5256;
        *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
        goto LABEL_3;
      }
    }
    else
    {
      if ( v5 != 69 )
      {
        v8 = 5270;
        *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
        goto LABEL_3;
      }
      if ( v6 != 265 )
      {
        v8 = 5262;
        *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
        goto LABEL_3;
      }
    }
    *(_DWORD *)a3 = v5;
    return 0;
  }
  v8 = 5247;
  *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
LABEL_3:
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v8, 0LL);
  return v4;
}
