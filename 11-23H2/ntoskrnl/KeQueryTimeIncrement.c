/*
 * XREFs of KeQueryTimeIncrement @ 0x140311D60
 * Callers:
 *     sub_1406F24D0 @ 0x1406F24D0 (sub_1406F24D0.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407739B0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpSendDataBlock @ 0x1407811E0 (EtwpSendDataBlock.c)
 *     PfTInitialize @ 0x14084722C (PfTInitialize.c)
 *     sub_1409F9CD0 @ 0x1409F9CD0 (sub_1409F9CD0.c)
 *     sub_140A4C958 @ 0x140A4C958 (sub_140A4C958.c)
 *     sub_140B38B4C @ 0x140B38B4C (sub_140B38B4C.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
