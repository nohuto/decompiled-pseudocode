/*
 * XREFs of ?StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C146C
 * Callers:
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C1414 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C15B0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndirectTouchVisual::StopOpacityTimeline(CIndirectTouchVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  char v3; // al

  v1 = *((_QWORD *)this + 47);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 47) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
}
