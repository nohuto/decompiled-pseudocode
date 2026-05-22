/*
 * XREFs of ?ValidateMatrix4x4FromQuaternion@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801660D4
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateMatrix4x4FromQuaternion(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)this;
  *a2 = 1;
  if ( v3 )
  {
    *(_DWORD *)a3 = 265;
    if ( *((_DWORD *)this + (unsigned int)(v3 - 1) + 66) == 71 )
      return 0;
    v6 = 6657;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
  }
  else
  {
    v6 = 6653;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v6, 0LL);
  return v4;
}
