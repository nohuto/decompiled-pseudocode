/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayExtendAnimatedVisual@@EEAAJI@Z @ 0x1800B7760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::OnAnimationCompleteImpl(CDisplayExtendAnimatedVisual *this, int a2)
{
  if ( a2 == *((_DWORD *)this + 122) )
  {
    *((_DWORD *)this + 122) = -1;
    return CDisplayExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 123) )
  {
    *((_DWORD *)this + 123) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 124) )
      *((_DWORD *)this + 124) = -1;
    if ( a2 == *((_DWORD *)this + 125) )
      *((_DWORD *)this + 125) = -1;
    if ( a2 == *((_DWORD *)this + 126) )
      *((_DWORD *)this + 126) = -1;
    return 0LL;
  }
}
