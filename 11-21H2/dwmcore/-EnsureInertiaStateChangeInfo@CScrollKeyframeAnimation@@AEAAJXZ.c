/*
 * XREFs of ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18025F724
 * Callers:
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18025F654 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18004F148 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AC2C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1802223B0 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(CScrollKeyframeAnimation *this)
{
  char v2; // al
  KeyframeValue *LastKeyframeValue; // rax
  float *v4; // rsi
  int Value; // eax
  const char *v6; // r9
  unsigned int v7; // edi
  const char *v9; // r9
  float AnimationTimeLength; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float CurrentValue; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_BYTE *)this + 744);
  if ( (v2 & 2) == 0 )
  {
    *((_BYTE *)this + 744) = v2 | 2;
    LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
    v4 = (float *)((char *)this + 584);
    Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (CScrollKeyframeAnimation *)((char *)this + 584));
    v7 = Value;
    if ( Value < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)Value);
      return v7;
    }
    if ( !*((_BYTE *)this + 660) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        228LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        v6);
    AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
    if ( AnimationTimeLength != 0.0 )
    {
      if ( *((_DWORD *)this + 48) == 1 )
      {
        if ( *((_DWORD *)this + 164) != 52 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            237LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
        CurrentValue = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 72), 1);
        v14 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 72), 0);
        v15 = *v4;
        v16 = *((float *)this + 147);
        v17 = *((float *)this + 148);
        *((_DWORD *)this + 184) = 52;
        *((float *)this + 166) = (float)(v15 - v14) * (float)(1.0 / AnimationTimeLength);
        *((float *)this + 167) = (float)(v16 - CurrentValue) * (float)(1.0 / AnimationTimeLength);
        *((float *)this + 168) = (float)(v17 - 0.0) * (float)(1.0 / AnimationTimeLength);
      }
      else
      {
        if ( *((_DWORD *)this + 48) != 2 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            258LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
        if ( *((_DWORD *)this + 164) != 18 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            249LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
        v11 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 72), 2);
        v12 = *v4;
        *((_DWORD *)this + 184) = 18;
        *((float *)this + 166) = (float)(v12 - v11) / AnimationTimeLength;
      }
      *((_BYTE *)this + 740) = 1;
    }
  }
  return 0LL;
}
