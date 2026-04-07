/*
 * XREFs of ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800DBAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000EE90 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F238 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x18006D494 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 */

__int64 __fastcall CLauncherDismiss::OnEndTransitionRequest(struct _LIST_ENTRY *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax

  CLauncherAnimationBase::RecordLauncherRect(this, a2, a3);
  v5 = CStoryboard::_EnumerateWindows((CStoryboard *)this, 4u, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0xB89u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0xB88u);
  }
  return v6;
}
