/*
 * XREFs of MmMapViewInSessionSpace @ 0x1407DEC80
 * Callers:
 *     LdrpMapResourceFile @ 0x1403A7FA4 (LdrpMapResourceFile.c)
 *     MiInitializeApiSets @ 0x140B45520 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406AD6D4 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
