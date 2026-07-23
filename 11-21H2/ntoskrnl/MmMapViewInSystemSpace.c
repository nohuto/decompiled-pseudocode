/*
 * XREFs of MmMapViewInSystemSpace @ 0x1406DEFB0
 * Callers:
 *     sub_1403D79F4 @ 0x1403D79F4 (sub_1403D79F4.c)
 *     sub_140B087BC @ 0x140B087BC (sub_140B087BC.c)
 * Callees:
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return sub_1406F3FDC((_DWORD)Section, (_DWORD)MappedBase, (_DWORD)ViewSize, (unsigned int)&v4, 0LL, 0LL);
}
