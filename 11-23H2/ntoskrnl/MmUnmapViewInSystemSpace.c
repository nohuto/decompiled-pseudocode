/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1407E0410
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B640 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F77DC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403A24F4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x1403A7DC4 (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x140608F80 (ExpDeleteSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
  return 0;
}
