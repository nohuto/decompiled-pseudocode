/*
 * XREFs of ObQueryNameString @ 0x14070F640
 * Callers:
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 *     sub_1402A0DA4 @ 0x1402A0DA4 (sub_1402A0DA4.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_1405FB648 @ 0x1405FB648 (sub_1405FB648.c)
 *     sub_14080FDC0 @ 0x14080FDC0 (sub_14080FDC0.c)
 *     sub_1409EA760 @ 0x1409EA760 (sub_1409EA760.c)
 *     sub_140A513D4 @ 0x140A513D4 (sub_140A513D4.c)
 *     sub_140A51F50 @ 0x140A51F50 (sub_140A51F50.c)
 *     sub_140A9BAD4 @ 0x140A9BAD4 (sub_140A9BAD4.c)
 * Callees:
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return sub_1407103B0((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
