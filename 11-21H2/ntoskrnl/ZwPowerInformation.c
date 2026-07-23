/*
 * XREFs of ZwPowerInformation @ 0x14041C340
 * Callers:
 *     sub_14050AA58 @ 0x14050AA58 (sub_14050AA58.c)
 *     sub_140623190 @ 0x140623190 (sub_140623190.c)
 *     sub_1406D4270 @ 0x1406D4270 (sub_1406D4270.c)
 *     sub_1406D6A74 @ 0x1406D6A74 (sub_1406D6A74.c)
 *     sub_1407EDB2C @ 0x1407EDB2C (sub_1407EDB2C.c)
 *     sub_1407F287C @ 0x1407F287C (sub_1407F287C.c)
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 *     sub_140808F30 @ 0x140808F30 (sub_140808F30.c)
 *     sub_14085E510 @ 0x14085E510 (sub_14085E510.c)
 *     sub_14085F954 @ 0x14085F954 (sub_14085F954.c)
 *     sub_14098943C @ 0x14098943C (sub_14098943C.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1409BAB50 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1409BAD90 (RtlRestoreSystemBootStatusDefaults.c)
 *     sub_140B30A10 @ 0x140B30A10 (sub_140B30A10.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&InformationLevel, InputBuffer);
}
