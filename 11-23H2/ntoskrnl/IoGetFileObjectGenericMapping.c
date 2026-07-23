/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1407ECAB0
 * Callers:
 *     DifIoGetFileObjectGenericMappingWrapper @ 0x1405E0170 (DifIoGetFileObjectGenericMappingWrapper.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406168E8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140AC2744 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
