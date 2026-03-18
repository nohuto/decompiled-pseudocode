/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1407EC7E0
 * Callers:
 *     DifIoGetFileObjectGenericMappingWrapper @ 0x1405DFC00 (DifIoGetFileObjectGenericMappingWrapper.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140616398 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140AC2754 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
