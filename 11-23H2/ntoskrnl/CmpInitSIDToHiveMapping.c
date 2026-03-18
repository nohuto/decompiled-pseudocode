/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x140865ED4
 * Callers:
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14031D870 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
