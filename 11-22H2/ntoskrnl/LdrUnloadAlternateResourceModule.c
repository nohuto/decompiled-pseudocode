/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14020B61C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B660 (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 LdrUnloadAlternateResourceModule()
{
  return LdrUnloadAlternateResourceModuleEx();
}
