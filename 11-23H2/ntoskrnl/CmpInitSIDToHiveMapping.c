/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x140866114
 * Callers:
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14031DB00 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
