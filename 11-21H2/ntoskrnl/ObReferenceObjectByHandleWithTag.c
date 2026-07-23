/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140732CC0
 * Callers:
 *     sub_14024F140 @ 0x14024F140 (sub_14024F140.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_1402F8F70 @ 0x1402F8F70 (sub_1402F8F70.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_1403B5088 @ 0x1403B5088 (sub_1403B5088.c)
 *     sub_140540798 @ 0x140540798 (sub_140540798.c)
 *     sub_1405AC580 @ 0x1405AC580 (sub_1405AC580.c)
 *     sub_1405E14E0 @ 0x1405E14E0 (sub_1405E14E0.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 *     sub_140690CFC @ 0x140690CFC (sub_140690CFC.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     ObWaitForSingleObject @ 0x1407E0200 (ObWaitForSingleObject.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 *     sub_140988EE4 @ 0x140988EE4 (sub_140988EE4.c)
 *     sub_1409B2390 @ 0x1409B2390 (sub_1409B2390.c)
 *     sub_140B270C4 @ 0x140B270C4 (sub_140B270C4.c)
 * Callees:
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return sub_140732D40((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
