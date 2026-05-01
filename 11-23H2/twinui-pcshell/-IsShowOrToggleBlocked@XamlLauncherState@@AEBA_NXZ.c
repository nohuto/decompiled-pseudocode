/*
 * XREFs of ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x180202E1C
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180506E40 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1805075F0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x180202DB4 (-IsSessionIdle@XamlLauncherState@@AEBA_NXZ.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x180480BE8 (CortanaHelpers--AllowCortanaAboveLock.c)
 */

bool __fastcall XamlLauncherState::IsShowOrToggleBlocked(XamlLauncherState *this)
{
  char v1; // bl

  v1 = 0;
  if ( XamlLauncherState::IsSessionIdle(this) && !IsPPIEdition() )
    return (unsigned __int8)CortanaHelpers::AllowCortanaAboveLock() == 0;
  return v1;
}
