/*
 * XREFs of PsDereferenceSiloContext @ 0x140369C20
 * Callers:
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObReferenceObjectByName @ 0x1406C2D00 (ObReferenceObjectByName.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x140740650 (ObpDeleteNameCheck.c)
 *     ObReferenceFileObjectForWrite @ 0x14074A2F4 (ObReferenceFileObjectForWrite.c)
 *     PspAssignSiloSystemRootPath @ 0x1409ACA60 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AD7C8 (PspSiloInitializeSystemRootBuffer.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceSiloContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
