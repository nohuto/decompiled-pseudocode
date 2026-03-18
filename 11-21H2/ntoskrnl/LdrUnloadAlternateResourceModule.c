/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14025C678
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14025C690 (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 LdrUnloadAlternateResourceModule()
{
  return LdrUnloadAlternateResourceModuleEx();
}
