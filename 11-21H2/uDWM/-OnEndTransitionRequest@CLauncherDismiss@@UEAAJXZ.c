/*
 * XREFs of ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800D7E00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x1800D80E0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x1800D8618 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x1800DA684 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 */

__int64 __fastcall CLauncherDismiss::OnEndTransitionRequest(CLauncherDismiss *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  CLauncherAnimationBase::RecordLauncherRect(this);
  v2 = CStoryboard::_EnumerateWindows(this, 4LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CStoryboard::OnEndTransitionRequest(this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0xBE3u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0xBE2u);
  }
  return v3;
}
