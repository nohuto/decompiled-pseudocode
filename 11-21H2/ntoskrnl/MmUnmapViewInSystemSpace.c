/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1406DF130
 * Callers:
 *     sub_14025C690 @ 0x14025C690 (sub_14025C690.c)
 *     sub_1402D708C @ 0x1402D708C (sub_1402D708C.c)
 *     sub_1403D525C @ 0x1403D525C (sub_1403D525C.c)
 *     sub_1403D79F4 @ 0x1403D79F4 (sub_1403D79F4.c)
 *     sub_140639B54 @ 0x140639B54 (sub_140639B54.c)
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  sub_14026D048((ULONG_PTR)MappedBase, 1);
  return 0;
}
