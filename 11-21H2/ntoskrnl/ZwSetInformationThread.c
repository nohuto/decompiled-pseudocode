/*
 * XREFs of ZwSetInformationThread @ 0x14041B900
 * Callers:
 *     sub_1402D5484 @ 0x1402D5484 (sub_1402D5484.c)
 *     sub_1406277D0 @ 0x1406277D0 (sub_1406277D0.c)
 *     sub_1406CB6DC @ 0x1406CB6DC (sub_1406CB6DC.c)
 *     sub_1406CB908 @ 0x1406CB908 (sub_1406CB908.c)
 *     sub_1406DAE08 @ 0x1406DAE08 (sub_1406DAE08.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 *     sub_140929C60 @ 0x140929C60 (sub_140929C60.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(ThreadHandle, ThreadInformationClass, ThreadInformation);
}
