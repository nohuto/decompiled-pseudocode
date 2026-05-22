/*
 * XREFs of ?ValidateMultiply@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F7A0
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateMultiply(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  unsigned int v3; // r10d
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)this;
  *a2 = 2;
  if ( v3 < 2 )
  {
    v10 = 4808;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 8;
    goto LABEL_16;
  }
  v5 = *((_DWORD *)this + v3 + 64);
  v6 = *((_DWORD *)this + v3 + 65);
  v7 = v5;
  if ( v6 == 18 )
  {
    v7 = 18;
    v6 = v5;
  }
  if ( v6 != 265 && v6 != 104 && v6 != 18 && v6 != 35 && v6 != 52 && v6 != 69 && v6 != 71 )
  {
    v10 = 4856;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    goto LABEL_16;
  }
  if ( v6 != v7 && v7 != 18 )
  {
    v10 = 4847;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
LABEL_16:
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024809, v10, 0LL);
    return v8;
  }
  *(_DWORD *)a3 = v6;
  return 0;
}
