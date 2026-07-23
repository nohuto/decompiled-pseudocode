/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x180084920
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckHeldCriticalSections @ 0x180084950 (RtlCheckHeldCriticalSections.c)
 */

void __cdecl RtlCheckForOrphanedCriticalSections(HANDLE ThreadHandle)
{
  RtlCheckHeldCriticalSections(ThreadHandle);
}
