/*
 * XREFs of ?ValidateMatrix4x4FromScale@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180166220
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ValidateMatrix4x4FromScale(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int a2,
        unsigned int *a3,
        enum DCOMPOSITION_EXPRESSION_TYPE *a4)
{
  int v4; // r11d
  int v5; // r8d
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // r9d
  int v10; // edx
  char v11; // al
  bool v12; // zf
  unsigned int v13; // [rsp+20h] [rbp-18h]

  *a3 = a2;
  v4 = 16;
  v5 = *(_DWORD *)this;
  if ( *(_DWORD *)this >= a2 )
  {
    *(_DWORD *)a4 = 265;
    if ( a2 == 1 )
    {
      v6 = *((_DWORD *)this + (unsigned int)(v5 - 1) + 66);
      v4 = 15;
      if ( v6 != 18 && v6 != 52 )
        goto LABEL_6;
    }
    else if ( a2 == 2 )
    {
      v9 = *((_DWORD *)this + (unsigned int)(v5 - 2) + 66);
      v10 = *((_DWORD *)this + (unsigned int)(v5 - 1) + 66);
      if ( v9 == 18 && v10 == 52 || (v11 = 0, v9 == 52) && v10 == 52 )
        v11 = 1;
      v4 = 15;
      if ( !v11 )
        goto LABEL_6;
    }
    else
    {
      if ( a2 == 3 )
      {
        v4 = 15;
        if ( *((_DWORD *)this + (unsigned int)(v5 - 3) + 66) != 18
          || *((_DWORD *)this + (unsigned int)(v5 - 2) + 66) != 18 )
        {
          goto LABEL_6;
        }
        v12 = *((_DWORD *)this + (unsigned int)(v5 - 1) + 66) == 18;
      }
      else
      {
        if ( a2 != 4 )
          goto LABEL_6;
        v4 = 15;
        if ( *((_DWORD *)this + (unsigned int)(v5 - 4) + 66) != 18
          || *((_DWORD *)this + (unsigned int)(v5 - 3) + 66) != 18
          || *((_DWORD *)this + (unsigned int)(v5 - 2) + 66) != 18 )
        {
          goto LABEL_6;
        }
        v12 = *((_DWORD *)this + (unsigned int)(v5 - 1) + 66) == 52;
      }
      if ( !v12 )
      {
LABEL_6:
        v13 = 6321;
        goto LABEL_7;
      }
    }
    return 0;
  }
  v13 = 6272;
LABEL_7:
  v7 = -2147024809;
  *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = v4;
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, 0x80070057, v13, 0LL);
  return v7;
}
