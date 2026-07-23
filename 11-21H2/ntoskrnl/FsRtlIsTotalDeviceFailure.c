/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x14028D390
 * Callers:
 *     sub_14028D2D8 @ 0x14028D2D8 (sub_14028D2D8.c)
 *     sub_14028D31C @ 0x14028D31C (sub_14028D31C.c)
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
