/*
 * XREFs of ZwUnmapViewOfSection @ 0x14041BCA0
 * Callers:
 *     sub_140254F78 @ 0x140254F78 (sub_140254F78.c)
 *     sub_1402D89E8 @ 0x1402D89E8 (sub_1402D89E8.c)
 *     sub_1403CB4C0 @ 0x1403CB4C0 (sub_1403CB4C0.c)
 *     sub_1406E09A4 @ 0x1406E09A4 (sub_1406E09A4.c)
 *     sub_1407EC34C @ 0x1407EC34C (sub_1407EC34C.c)
 *     sub_1409348AC @ 0x1409348AC (sub_1409348AC.c)
 *     sub_1409F6A1C @ 0x1409F6A1C (sub_1409F6A1C.c)
 *     sub_1409F6C5C @ 0x1409F6C5C (sub_1409F6C5C.c)
 *     sub_140A04C34 @ 0x140A04C34 (sub_140A04C34.c)
 *     sub_140A05110 @ 0x140A05110 (sub_140A05110.c)
 *     sub_140A0A574 @ 0x140A0A574 (sub_140A0A574.c)
 *     sub_140A1A5D0 @ 0x140A1A5D0 (sub_140A1A5D0.c)
 *     sub_140B0D974 @ 0x140B0D974 (sub_140B0D974.c)
 *     sub_140B179D4 @ 0x140B179D4 (sub_140B179D4.c)
 *     sub_140B17BA4 @ 0x140B17BA4 (sub_140B17BA4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, BaseAddress);
}
