/*
 * XREFs of KeDisableForceIdle @ 0x14057CC80
 * Callers:
 *     KiInitializeForceIdle @ 0x14081DB00 (KiInitializeForceIdle.c)
 * Callees:
 *     <none>
 */

void KeDisableForceIdle()
{
  KiForceIdleDisabled = 1;
}
