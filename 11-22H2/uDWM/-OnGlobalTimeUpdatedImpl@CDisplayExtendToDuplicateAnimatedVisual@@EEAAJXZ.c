/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BB690
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BB718 (-ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayExtendToDuplicateAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplayExtendToDuplicateAnimatedVisual *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  bool v4; // zf
  char v5; // al
  int v6; // eax

  v1 = *((_QWORD *)this + 59);
  v2 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    *((_QWORD *)this + 59) = 0LL;
    v4 = (*(_DWORD *)(v1 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
    v6 = CDisplayExtendToDuplicateAnimatedVisual::ScheduleEntranceAnimation(this);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xABu);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
    }
  }
  return v2;
}
