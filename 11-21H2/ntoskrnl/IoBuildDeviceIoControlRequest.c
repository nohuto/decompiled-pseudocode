/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x140342880
 * Callers:
 *     IoVolumeDeviceToGuidPath @ 0x14068BA10 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14068BB80 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlQueryCachedVdl @ 0x1406C2860 (FsRtlQueryCachedVdl.c)
 *     sub_1406D3ACC @ 0x1406D3ACC (sub_1406D3ACC.c)
 *     RtlVolumeDeviceToDosName @ 0x140710B90 (RtlVolumeDeviceToDosName.c)
 *     sub_140780D40 @ 0x140780D40 (sub_140780D40.c)
 *     FsRtlIssueDeviceIoControl @ 0x1407FA460 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1407FC880 (FsRtlBalanceReads.c)
 *     sub_14080AB40 @ 0x14080AB40 (sub_14080AB40.c)
 *     sub_14080C5C8 @ 0x14080C5C8 (sub_14080C5C8.c)
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     sub_14081C234 @ 0x14081C234 (sub_14081C234.c)
 *     sub_140908124 @ 0x140908124 (sub_140908124.c)
 *     sub_140908208 @ 0x140908208 (sub_140908208.c)
 *     sub_14090A480 @ 0x14090A480 (sub_14090A480.c)
 *     sub_14090A560 @ 0x14090A560 (sub_14090A560.c)
 *     sub_140930280 @ 0x140930280 (sub_140930280.c)
 *     sub_14093449C @ 0x14093449C (sub_14093449C.c)
 *     sub_140935C64 @ 0x140935C64 (sub_140935C64.c)
 *     sub_14093F428 @ 0x14093F428 (sub_14093F428.c)
 *     sub_1409B4F34 @ 0x1409B4F34 (sub_1409B4F34.c)
 *     sub_1409B5088 @ 0x1409B5088 (sub_1409B5088.c)
 *     sub_1409D6368 @ 0x1409D6368 (sub_1409D6368.c)
 *     sub_140A3437C @ 0x140A3437C (sub_140A3437C.c)
 * Callees:
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 */

PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+58h] [rbp+0h]

  return (PIRP)sub_1403428E0(
                 IoControlCode,
                 DeviceObject,
                 InputBuffer,
                 InputBufferLength,
                 OutputBuffer,
                 OutputBufferLength,
                 InternalDeviceIoControl,
                 Event,
                 IoStatusBlock,
                 retaddr);
}
