/*
 * XREFs of ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800DBA60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000EE90 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F238 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGrowPanel::OnEndTransitionRequest(CGrowPanel *this, __int64 a2, __int64 a3)
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
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x567u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x566u);
  }
  return v5;
}
