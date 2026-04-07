/*
 * XREFs of ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180055930
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18001C2FC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z @ 0x1800559D0 (-_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardBegin(CAnimatedTransitionVisual *this, unsigned int a2)
{
  int v4; // edi
  int v5; // eax

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x94u, 0LL);
  }
  else
  {
    if ( !*((_BYTE *)this + 968) && *((float *)this + 235) == 0.0 )
    {
      *((_QWORD *)this + 94) = 0LL;
      *((_DWORD *)this + 190) = 0;
      *((_DWORD *)this + 186) = *((_DWORD *)this + 232);
      v5 = *((_DWORD *)this + 24);
      if ( (v5 & 0x2000) == 0 )
      {
        *((_DWORD *)this + 24) = v5 | 0x2000;
        CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)this + 8));
      }
    }
    CAnimatedTransitionVisual::_LogVisualBeginAndEndValues(this, a2);
    *((_BYTE *)this + 985) = 1;
  }
  return (unsigned int)v4;
}
