/*
 * XREFs of ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800565C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::HideGhost(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  __int64 v3; // r8
  int v4; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 970) )
  {
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
    {
      v4 = VisualCollection::Remove(
             (VisualCollection *)(v3 + 32),
             (struct CVisual *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)));
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2B9u, 0LL);
    }
  }
  return v1;
}
