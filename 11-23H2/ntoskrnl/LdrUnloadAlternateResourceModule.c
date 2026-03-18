/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14020B5FC
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B640 (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 LdrUnloadAlternateResourceModule()
{
  return LdrUnloadAlternateResourceModuleEx();
}
