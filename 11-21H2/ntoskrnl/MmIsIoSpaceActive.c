/*
 * XREFs of MmIsIoSpaceActive @ 0x140591DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140201144 @ 0x140201144 (sub_140201144.c)
 */

LOGICAL __stdcall MmIsIoSpaceActive(PHYSICAL_ADDRESS StartAddress, SIZE_T NumberOfBytes)
{
  return sub_140201144(
           (unsigned __int64)StartAddress.QuadPart >> 12,
           ((StartAddress.QuadPart - 1 + NumberOfBytes) >> 12) - ((unsigned __int64)StartAddress.QuadPart >> 12) + 1,
           0);
}
