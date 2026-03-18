/*
 * XREFs of MmMapViewInSessionSpace @ 0x1406DEFB0
 * Callers:
 *     LdrpMapResourceFile @ 0x1403D79F4 (LdrpMapResourceFile.c)
 *     MiInitializeApiSets @ 0x140B087BC (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406F3FDC (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((_DWORD)Section, (_DWORD)MappedBase, (_DWORD)ViewSize, (unsigned int)&v4, 0LL, 0LL);
}
