/*
 * XREFs of MmMapViewInSessionSpace @ 0x1407DEF30
 * Callers:
 *     LdrpMapResourceFile @ 0x1403A7634 (LdrpMapResourceFile.c)
 *     MiInitializeApiSets @ 0x140B48C20 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406AD6A4 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
