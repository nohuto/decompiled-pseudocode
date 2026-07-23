/*
 * XREFs of ZwMapViewOfSection @ 0x14041BC60
 * Callers:
 *     sub_14020B638 @ 0x14020B638 (sub_14020B638.c)
 *     sub_1403CB4C0 @ 0x1403CB4C0 (sub_1403CB4C0.c)
 *     sub_140621100 @ 0x140621100 (sub_140621100.c)
 *     sub_1407EC34C @ 0x1407EC34C (sub_1407EC34C.c)
 *     sub_1409348AC @ 0x1409348AC (sub_1409348AC.c)
 *     sub_1409F6A1C @ 0x1409F6A1C (sub_1409F6A1C.c)
 *     sub_1409F6C5C @ 0x1409F6C5C (sub_1409F6C5C.c)
 *     sub_140A04C34 @ 0x140A04C34 (sub_140A04C34.c)
 *     sub_140A05110 @ 0x140A05110 (sub_140A05110.c)
 *     sub_140A0AA8C @ 0x140A0AA8C (sub_140A0AA8C.c)
 *     sub_140A1A2F8 @ 0x140A1A2F8 (sub_140A1A2F8.c)
 *     sub_140B0DAC4 @ 0x140B0DAC4 (sub_140B0DAC4.c)
 *     sub_140B179D4 @ 0x140B179D4 (sub_140B179D4.c)
 *     sub_140B17BA4 @ 0x140B17BA4 (sub_140B17BA4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  _disable();
  __readeflags();
  return sub_140433F80(SectionHandle, ProcessHandle);
}
