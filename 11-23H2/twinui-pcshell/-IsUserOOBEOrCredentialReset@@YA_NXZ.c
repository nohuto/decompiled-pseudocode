/*
 * XREFs of ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801B8DA8
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180475BD8 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800F18C8 (-IsUserOOBE@@YA_NXZ.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x1801B8DD8 (-IsCredentialReset@@YA_NXZ.c)
 */

char IsUserOOBEOrCredentialReset(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsUserOOBE() || IsCredentialReset() )
    return 1;
  return v0;
}
