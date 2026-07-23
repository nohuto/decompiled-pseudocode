/*
 * XREFs of KeDisableForceIdle @ 0x14057D170
 * Callers:
 *     KiInitializeForceIdle @ 0x14081DDD0 (KiInitializeForceIdle.c)
 * Callees:
 *     <none>
 */

void KeDisableForceIdle()
{
  KiForceIdleDisabled = 1;
}
