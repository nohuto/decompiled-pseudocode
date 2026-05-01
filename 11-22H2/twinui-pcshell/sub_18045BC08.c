/*
 * XREFs of sub_18045BC08 @ 0x18045BC08
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18045BC08()
{
  char v0; // of

  if ( !v0 )
    JUMPOUT(0x18045BC5ALL);
  __asm { fstp1   st(7) }
  return CortanaStoreAppExperienceManager::InputHostShowing();
}
