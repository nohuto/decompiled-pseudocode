/*
 * XREFs of ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x180222910
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18004F554 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800505B4 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800D8C0C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x1802292E0 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::StartAsTriggeredAnimation(KeyframeSequence **this)
{
  int started; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  KeyframeSequence *v5; // r9
  int updated; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx

  started = CBaseExpression::StartAsTriggeredAnimation((CBaseExpression *)this);
  v4 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, started, 0xD0Cu);
  }
  else if ( ((_BYTE)this[29] & 1) == 0 )
  {
    v5 = this[2];
    *((_DWORD *)this + 138) = 0;
    updated = CKeyframeAnimation::UpdatePlaybackState((__int64)this, 1u, 0, *((_QWORD *)v5 + 76));
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, updated, 0xD23u);
    }
    else if ( ((_BYTE)this[29] & 8) != 0 )
    {
      v8 = CKeyframeAnimation::Reset((CKeyframeAnimation *)this, 0, 0LL);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0xD2Cu);
      }
      else
      {
        CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)this, 0);
        KeyframeSequence::ConfigureTimer(this[48]);
        *(_DWORD *)(v10 + 92) = 0;
      }
    }
  }
  return v4;
}
