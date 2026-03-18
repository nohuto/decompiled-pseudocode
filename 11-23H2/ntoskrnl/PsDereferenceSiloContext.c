/*
 * XREFs of PsDereferenceSiloContext @ 0x14036A270
 * Callers:
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObReferenceObjectByName @ 0x1406C2C50 (ObReferenceObjectByName.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x1406ECFE0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x140740140 (ObpDeleteNameCheck.c)
 *     ObReferenceFileObjectForWrite @ 0x140749DE4 (ObReferenceFileObjectForWrite.c)
 *     PspAssignSiloSystemRootPath @ 0x1409AC9B0 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AD718 (PspSiloInitializeSystemRootBuffer.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B00 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceSiloContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
