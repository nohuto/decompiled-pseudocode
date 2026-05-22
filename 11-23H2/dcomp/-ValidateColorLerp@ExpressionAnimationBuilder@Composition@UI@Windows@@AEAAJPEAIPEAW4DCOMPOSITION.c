/*
 * XREFs of ?ValidateColorLerp@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18000F014
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateColorLerp(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  int v3; // edx
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  *a2 = 3;
  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this < 3u )
  {
    v6 = 5392;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
LABEL_9:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024809, v6, 0LL);
    return v4;
  }
  if ( *((_DWORD *)this + (unsigned int)(v3 - 3) + 66) != 70 )
  {
    v6 = 5398;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + (unsigned int)(v3 - 2) + 66) != 70 )
  {
    v6 = 5399;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + (unsigned int)(v3 - 1) + 66) != 18 )
  {
    v6 = 5400;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    goto LABEL_9;
  }
  *(_DWORD *)a3 = 70;
  return 0;
}
