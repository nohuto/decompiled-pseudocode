/*
 * XREFs of ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800E877C
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E82C4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8480 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8624 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800E8740 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800E8810 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800E8E70 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchPressHoldVisual::StopAllTimelines(CTouchPressHoldVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  bool v3; // al
  __int64 v4; // rdx
  __int64 v5; // rdx

  v1 = *((_QWORD *)this + 43);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 43) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  else
  {
    v3 = CDesktopManager::s_fTimelineDirty;
  }
  v4 = *((_QWORD *)this + 44);
  if ( v4 )
  {
    v2 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 44) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  v5 = *((_QWORD *)this + 45);
  if ( v5 )
  {
    v2 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 45) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
}
