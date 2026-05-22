/*
 * XREFs of ?ValidateMatrix4x4FromPerspective@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180165E04
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateMatrix4x4FromPerspective(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2,
        enum DCOMPOSITION_EXPRESSION_TYPE *a3)
{
  int v3; // edx
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  *a2 = 4;
  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this >= 4u )
  {
    *(_DWORD *)a3 = 265;
    if ( *((_DWORD *)this + (unsigned int)(v3 - 4) + 66) == 18 )
    {
      if ( *((_DWORD *)this + (unsigned int)(v3 - 3) + 66) == 18 )
      {
        if ( *((_DWORD *)this + (unsigned int)(v3 - 2) + 66) == 18 )
        {
          if ( *((_DWORD *)this + (unsigned int)(v3 - 1) + 66) == 18 )
            return 0;
          v6 = 6578;
          *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
        }
        else
        {
          v6 = 6577;
          *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
        }
      }
      else
      {
        v6 = 6576;
        *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
      }
    }
    else
    {
      v6 = 6575;
      *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    }
  }
  else
  {
    v6 = 6567;
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v6, 0LL);
  return v4;
}
