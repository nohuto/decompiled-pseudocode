/*
 * XREFs of ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800DBC40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000EE90 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F238 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800AC4EC (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 */

__int64 __fastcall CShrinkPanel::OnEndTransitionRequest(CShrinkPanel *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CStoryboard::_EnumerateWindows(this, 4u, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
    v5 = v6;
    if ( v6 >= 0 )
      CAnimationScheduler::AbandonTransition(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
        5);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x5D9u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x5D8u);
  }
  return v5;
}
