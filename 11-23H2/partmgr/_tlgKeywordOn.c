/*
 * XREFs of _tlgKeywordOn @ 0x1C0007B80
 * Callers:
 *     ?PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003690 (-PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PmSendTelemetry @ 0x1C0020134 (PmSendTelemetry.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C0017058 & 0x400000000000LL) != 0 && (qword_1C0017060 & 0x400000000000LL) == qword_1C0017060;
}
