/*
 * XREFs of ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800E4450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::GetProperty(CKeyframeAnimation *this, int a2, struct CExpressionValue *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // xmm0_4
  unsigned int v7; // ebx
  float AnimationTimeLength; // xmm0_4
  __int64 v10; // r9
  float v11; // xmm0_4

  v3 = a2 - 16;
  if ( v3 )
  {
    v4 = v3 - 14;
    if ( !v4 )
    {
      AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
      *(_DWORD *)(v10 + 72) = 42;
      *(_BYTE *)(v10 + 76) = 1;
      *(float *)v10 = AnimationTimeLength * 1000.0;
      return 0;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        v7 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x8AFu);
        return v7;
      }
      v6 = *((_DWORD *)this + 131);
    }
    else
    {
      v6 = *((_DWORD *)this + 130);
    }
    *(_DWORD *)a3 = v6;
    *((_DWORD *)a3 + 18) = 18;
  }
  else
  {
    v11 = (float)*((int *)this + 120);
    *((_DWORD *)a3 + 18) = 42;
    *(float *)a3 = v11;
  }
  *((_BYTE *)a3 + 76) = 1;
  return 0;
}
