/*
 * XREFs of KeQueryTimeIncrement @ 0x140311AD0
 * Callers:
 *     sub_1406F24A0 @ 0x1406F24A0 (sub_1406F24A0.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407737C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpSendDataBlock @ 0x140780FF0 (EtwpSendDataBlock.c)
 *     PfTInitialize @ 0x140846F2C (PfTInitialize.c)
 *     sub_1409F9A40 @ 0x1409F9A40 (sub_1409F9A40.c)
 *     sub_140A4C6A8 @ 0x140A4C6A8 (sub_140A4C6A8.c)
 *     sub_140B38B4C @ 0x140B38B4C (sub_140B38B4C.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
