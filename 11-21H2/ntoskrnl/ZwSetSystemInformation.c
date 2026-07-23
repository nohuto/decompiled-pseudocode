/*
 * XREFs of ZwSetSystemInformation @ 0x14041EE00
 * Callers:
 *     sub_1405FBC00 @ 0x1405FBC00 (sub_1405FBC00.c)
 *     sub_140627B90 @ 0x140627B90 (sub_140627B90.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1409D4754 @ 0x1409D4754 (sub_1409D4754.c)
 *     sub_1409D4850 @ 0x1409D4850 (sub_1409D4850.c)
 *     sub_1409D4A38 @ 0x1409D4A38 (sub_1409D4A38.c)
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 *     sub_140B2DD94 @ 0x140B2DD94 (sub_140B2DD94.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&SystemInformationClass, SystemInformation);
}
