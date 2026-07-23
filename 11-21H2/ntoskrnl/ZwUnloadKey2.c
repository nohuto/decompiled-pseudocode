/*
 * XREFs of ZwUnloadKey2 @ 0x14041F1E0
 * Callers:
 *     sub_1407F3F88 @ 0x1407F3F88 (sub_1407F3F88.c)
 *     sub_1407F405C @ 0x1407F405C (sub_1407F405C.c)
 *     sub_1407F5F80 @ 0x1407F5F80 (sub_1407F5F80.c)
 *     sub_1407F6200 @ 0x1407F6200 (sub_1407F6200.c)
 *     sub_1408073EC @ 0x1408073EC (sub_1408073EC.c)
 *     sub_140B26B08 @ 0x140B26B08 (sub_140B26B08.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return sub_140433F80(TargetKey, *(_QWORD *)&Flags);
}
