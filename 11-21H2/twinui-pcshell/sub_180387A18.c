/*
 * XREFs of sub_180387A18 @ 0x180387A18
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180387A18()
{
  char v0; // of

  if ( !v0 )
    JUMPOUT(0x180387A6ALL);
  __asm { fstp1   st(7) }
  return CortanaStoreAppExperienceManager::InputHostShowing();
}
