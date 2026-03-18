/*
 * XREFs of KeDisableForceIdle @ 0x14057CD10
 * Callers:
 *     KiInitializeForceIdle @ 0x140820080 (KiInitializeForceIdle.c)
 * Callees:
 *     <none>
 */

void KeDisableForceIdle()
{
  KiForceIdleDisabled = 1;
}
