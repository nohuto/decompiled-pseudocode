/*
 * XREFs of sub_140AD6320 @ 0x140AD6320
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     sub_14024DA70 @ 0x14024DA70 (sub_14024DA70.c)
 *     KeExpandKernelStackAndCallout @ 0x14025D2A0 (KeExpandKernelStackAndCallout.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D6F40 @ 0x1402D6F40 (sub_1402D6F40.c)
 *     sub_1402D8EEC @ 0x1402D8EEC (sub_1402D8EEC.c)
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KdDisableDebugger @ 0x140565360 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140565580 (KdEnableDebugger.c)
 *     sub_140B19880 @ 0x140B19880 (sub_140B19880.c)
 *     sub_140B1D468 @ 0x140B1D468 (sub_140B1D468.c)
 *     sub_140B31590 @ 0x140B31590 (sub_140B31590.c)
 */

void sub_140AD6320()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  sub_140B19880();
  local_unwind(v0, &loc_140AD6345);
}
