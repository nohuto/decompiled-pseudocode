/*
 * XREFs of ZwDeleteKey @ 0x14041D280
 * Callers:
 *     sub_140395610 @ 0x140395610 (sub_140395610.c)
 *     sub_14061F730 @ 0x14061F730 (sub_14061F730.c)
 *     sub_1407F44F0 @ 0x1407F44F0 (sub_1407F44F0.c)
 *     sub_1407F6410 @ 0x1407F6410 (sub_1407F6410.c)
 *     sub_14080B090 @ 0x14080B090 (sub_14080B090.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     sub_14091D7D0 @ 0x14091D7D0 (sub_14091D7D0.c)
 *     sub_14091E6AC @ 0x14091E6AC (sub_14091E6AC.c)
 *     sub_140925BD8 @ 0x140925BD8 (sub_140925BD8.c)
 *     sub_1409E190C @ 0x1409E190C (sub_1409E190C.c)
 *     sub_140B2AEDC @ 0x140B2AEDC (sub_140B2AEDC.c)
 *     sub_140B30BB0 @ 0x140B30BB0 (sub_140B30BB0.c)
 *     sub_140B4FF80 @ 0x140B4FF80 (sub_140B4FF80.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, v1);
}
