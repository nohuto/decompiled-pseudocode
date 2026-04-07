/*
 * XREFs of ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180012E90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z @ 0x180012F24 (-_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800179D4 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardBegin(CAnimatedTransitionVisual *this, unsigned int a2)
{
  int v4; // edi

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x94u);
  }
  else
  {
    if ( !*((_BYTE *)this + 968) && *((float *)this + 235) == 0.0 )
    {
      *((_QWORD *)this + 94) = 0LL;
      *((_DWORD *)this + 190) = 0;
      *((_DWORD *)this + 186) = *((_DWORD *)this + 232);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000u);
    }
    CAnimatedTransitionVisual::_LogVisualBeginAndEndValues(this, a2);
    *((_BYTE *)this + 985) = 1;
  }
  return (unsigned int)v4;
}
