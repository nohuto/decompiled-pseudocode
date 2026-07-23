/*
 * XREFs of ZwEnumerateValueKey @ 0x14041B9C0
 * Callers:
 *     sub_1406202D0 @ 0x1406202D0 (sub_1406202D0.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     sub_1406CF2EC @ 0x1406CF2EC (sub_1406CF2EC.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_1407F44F0 @ 0x1407F44F0 (sub_1407F44F0.c)
 *     sub_140826EF0 @ 0x140826EF0 (sub_140826EF0.c)
 *     sub_14082FDD8 @ 0x14082FDD8 (sub_14082FDD8.c)
 *     sub_140851A60 @ 0x140851A60 (sub_140851A60.c)
 *     sub_140859794 @ 0x140859794 (sub_140859794.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 *     sub_14094D4C8 @ 0x14094D4C8 (sub_14094D4C8.c)
 *     sub_1409653FC @ 0x1409653FC (sub_1409653FC.c)
 *     sub_140A360D8 @ 0x140A360D8 (sub_140A360D8.c)
 *     sub_140A36378 @ 0x140A36378 (sub_140A36378.c)
 *     sub_140AF6E6C @ 0x140AF6E6C (sub_140AF6E6C.c)
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 *     sub_140B2AEDC @ 0x140B2AEDC (sub_140B2AEDC.c)
 *     sub_140B4FF80 @ 0x140B4FF80 (sub_140B4FF80.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, *(_QWORD *)&Index);
}
