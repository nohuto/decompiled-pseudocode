/*
 * XREFs of ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001F180
 * Callers:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18000F014 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800129D8 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001EFD0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::RemoveSelfFromParent(CVisual *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return VisualCollection::Remove((VisualCollection *)(v2 + 32), this);
  else
    return 0LL;
}
