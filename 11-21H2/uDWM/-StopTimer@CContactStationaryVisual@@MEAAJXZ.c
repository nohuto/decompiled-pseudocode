/*
 * XREFs of ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800AE530
 * Callers:
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x180069090 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x1800ADE40 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800AE050 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x1800AE500 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18005F94C (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::StopTimer(CContactStationaryVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  bool v3; // al
  __int64 v4; // rdx

  v1 = *((_QWORD *)this + 46);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 46) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  else
  {
    v3 = CDesktopManager::s_fTimelineDirty;
  }
  v4 = *((_QWORD *)this + 45);
  if ( v4 )
  {
    v2 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 45) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
