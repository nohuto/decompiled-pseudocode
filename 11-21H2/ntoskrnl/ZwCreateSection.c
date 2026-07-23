/*
 * XREFs of ZwCreateSection @ 0x14041C0A0
 * Callers:
 *     sub_14020B710 @ 0x14020B710 (sub_14020B710.c)
 *     sub_1403CB4C0 @ 0x1403CB4C0 (sub_1403CB4C0.c)
 *     sub_1403D79F4 @ 0x1403D79F4 (sub_1403D79F4.c)
 *     sub_14061EE20 @ 0x14061EE20 (sub_14061EE20.c)
 *     sub_1406C421C @ 0x1406C421C (sub_1406C421C.c)
 *     sub_140784CB0 @ 0x140784CB0 (sub_140784CB0.c)
 *     sub_1407EC34C @ 0x1407EC34C (sub_1407EC34C.c)
 *     sub_1407ECCD0 @ 0x1407ECCD0 (sub_1407ECCD0.c)
 *     sub_140832CF4 @ 0x140832CF4 (sub_140832CF4.c)
 *     sub_14083B480 @ 0x14083B480 (sub_14083B480.c)
 *     sub_140857D34 @ 0x140857D34 (sub_140857D34.c)
 *     sub_1409348AC @ 0x1409348AC (sub_1409348AC.c)
 *     sub_1409F6A1C @ 0x1409F6A1C (sub_1409F6A1C.c)
 *     sub_1409F6C5C @ 0x1409F6C5C (sub_1409F6C5C.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 *     sub_140A04C34 @ 0x140A04C34 (sub_140A04C34.c)
 *     sub_140A05110 @ 0x140A05110 (sub_140A05110.c)
 *     sub_140A0AA8C @ 0x140A0AA8C (sub_140A0AA8C.c)
 *     sub_140A1A2F8 @ 0x140A1A2F8 (sub_140A1A2F8.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(SectionHandle, *(_QWORD *)&DesiredAccess);
}
