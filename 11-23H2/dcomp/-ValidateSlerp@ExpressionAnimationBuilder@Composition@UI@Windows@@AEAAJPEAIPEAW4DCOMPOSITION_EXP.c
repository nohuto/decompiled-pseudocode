/*
 * XREFs of ?ValidateSlerp@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180166C0C
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateSlerp(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  int v3; // edx
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  *a2 = 3;
  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this >= 3u )
  {
    if ( *((_DWORD *)this + (unsigned int)(v3 - 3) + 66) == 71 )
    {
      if ( *((_DWORD *)this + (unsigned int)(v3 - 2) + 66) == 71 )
      {
        if ( *((_DWORD *)this + (unsigned int)(v3 - 1) + 66) == 18 )
        {
          *(_DWORD *)a3 = 71;
          return 0;
        }
        v6 = 5573;
        *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
      }
      else
      {
        v6 = 5572;
        *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
      }
    }
    else
    {
      v6 = 5571;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    }
  }
  else
  {
    v6 = 5565;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v6, 0LL);
  return v4;
}
