/*
 * XREFs of ?IsEmpty@CMergedDirtyRect@@UEBA_NXZ @ 0x1800DD2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 */

bool __fastcall CMergedDirtyRect::IsEmpty(CMergedDirtyRect *this)
{
  struct CComposition *CurrentFrameId; // rax
  __int64 v2; // rcx

  CurrentFrameId = GetCurrentFrameId();
  return *(struct CComposition **)(v2 + 88) != CurrentFrameId || *(_DWORD *)(v2 + 80) == 0;
}
