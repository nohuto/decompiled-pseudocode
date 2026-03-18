/*
 * XREFs of MmMapViewInSessionSpace @ 0x1407DE9B0
 * Callers:
 *     LdrpMapResourceFile @ 0x1403A7DC4 (LdrpMapResourceFile.c)
 *     MiInitializeApiSets @ 0x140B45520 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406AD6A4 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
