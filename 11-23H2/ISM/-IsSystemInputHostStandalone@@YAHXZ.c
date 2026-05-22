/*
 * XREFs of ?IsSystemInputHostStandalone@@YAHXZ @ 0x180093380
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 */

_BOOL8 IsSystemInputHostStandalone(void)
{
  return IsEdition(8778LL) == 0;
}
