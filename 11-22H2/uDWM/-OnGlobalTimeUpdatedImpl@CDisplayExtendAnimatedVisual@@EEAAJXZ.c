/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BAF50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BAC60 (-CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BB018 (-ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplayExtendAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // r9d
  unsigned int v7; // eax
  __int64 v8; // rax
  bool v9; // zf
  char v10; // al

  v4 = 0;
  if ( !*((_BYTE *)this + 508) )
  {
    v5 = CDisplayExtendAnimatedVisual::CaptureForExtendedDisplay(this, a2, a3);
    v4 = v5;
    if ( v5 < 0 )
    {
      v6 = v5;
      v7 = 220;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v7);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      return (unsigned int)v4;
    }
    *((_BYTE *)this + 508) = 1;
  }
  v8 = *((_QWORD *)this + 60);
  if ( v8 && *(_BYTE *)(v8 + 72) )
  {
    *((_QWORD *)this + 60) = 0LL;
    v9 = (*(_DWORD *)(v8 + 8))-- == 1;
    v10 = CDesktopManager::s_fTimelineDirty;
    if ( v9 )
      v10 = 1;
    CDesktopManager::s_fTimelineDirty = v10;
    v4 = CDisplayExtendAnimatedVisual::ScheduleEntranceAnimations(this);
    v6 = v4;
    if ( v4 < 0 )
    {
      v7 = 228;
      goto LABEL_11;
    }
  }
  return (unsigned int)v4;
}
