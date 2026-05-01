/*
 * XREFs of ?OnGameInputSystemButtonCallbackStatic@GamingOverlayExperienceManager@@CAX_KPEAXPEAUIGameInputDevice@@0W4GameInputSystemButtons@@3@Z @ 0x1801DAF90
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z @ 0x1804000FC (-HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::OnGameInputSystemButtonCallbackStatic(
        __int64 a1,
        GamingOverlayExperienceManager *a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  if ( a2 )
    GamingOverlayExperienceManager::HandleButtonEvent(a2, a5 & 1, (a5 & 2) != 0, a4);
}
