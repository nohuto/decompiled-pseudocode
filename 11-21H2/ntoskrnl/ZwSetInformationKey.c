/*
 * XREFs of ZwSetInformationKey @ 0x14041EBC0
 * Callers:
 *     sub_140627410 @ 0x140627410 (sub_140627410.c)
 *     sub_1406C55CC @ 0x1406C55CC (sub_1406C55CC.c)
 *     sub_140925D1C @ 0x140925D1C (sub_140925D1C.c)
 *     sub_140925D8C @ 0x140925D8C (sub_140925D8C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, *(_QWORD *)&KeySetInformationClass);
}
