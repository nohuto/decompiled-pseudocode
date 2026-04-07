/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayDuplicateAnimatedVisual@@EEAAJI@Z @ 0x1800B95E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::OnAnimationCompleteImpl(
        CDisplayDuplicateAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 120) )
  {
    *((_DWORD *)this + 120) = -1;
    return CDisplayDuplicateAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 121) )
  {
    *((_DWORD *)this + 121) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 122) )
      *((_DWORD *)this + 122) = -1;
    if ( a2 == *((_DWORD *)this + 123) )
      *((_DWORD *)this + 123) = -1;
    return 0LL;
  }
}
