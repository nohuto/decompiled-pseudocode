/*
 * XREFs of ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1800BC9DC
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180114F20 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180397220 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsCredentialReset@@YA_NXZ @ 0x1800BCA0C (-IsCredentialReset@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800BCF8C (-IsUserOOBE@@YA_NXZ.c)
 */

char IsUserOOBEOrCredentialReset(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsUserOOBE() || IsCredentialReset() )
    return 1;
  return v0;
}
