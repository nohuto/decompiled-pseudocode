/*
 * XREFs of ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x1800FDF34
 * Callers:
 *     ?_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ @ 0x1800FDE18 (-_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ.c)
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180499AE0 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab(CMultitaskingViewHotKeyHandler *this)
{
  char v1; // bl

  if ( *((_DWORD *)this + 19) == 2 )
    return 1;
  v1 = 0;
  if ( !*((_DWORD *)this + 19) && !IsDebuggerPresent() )
    return 1;
  return v1;
}
