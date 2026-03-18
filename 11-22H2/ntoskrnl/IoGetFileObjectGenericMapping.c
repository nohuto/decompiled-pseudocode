/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1407ECD60
 * Callers:
 *     DifIoGetFileObjectGenericMappingWrapper @ 0x1405DFC90 (DifIoGetFileObjectGenericMappingWrapper.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140616408 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140AC3724 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
