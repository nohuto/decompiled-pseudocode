/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1406FE2E0
 * Callers:
 *     sub_14028866C @ 0x14028866C (sub_14028866C.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 * Callees:
 *     sub_1406FE4F0 @ 0x1406FE4F0 (sub_1406FE4F0.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  sub_1406FE4F0(FileObject, 0, 0LL);
}
