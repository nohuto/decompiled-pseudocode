/*
 * XREFs of ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x1800433C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x1800381BC (-IsDesktopInputContext@@YA_NXZ.c)
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180499AE0 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler::OnMessage(
        CMultitaskingViewHotKeyHandler *this,
        enum Windows::Internal::Shell::Holographic::UserInputContext *a2,
        int a3)
{
  if ( a3 >= 40 && a3 <= 45 && IsDesktopInputContext((__int64)this, a2) )
    CMultitaskingViewHotKeyHandler::_OnAltTab((char *)this - 8, (unsigned int)a3);
  return 0LL;
}
