/*
 * XREFs of IoFreeIrp @ 0x140348610
 * Callers:
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     sub_14025A250 @ 0x14025A250 (sub_14025A250.c)
 *     sub_14029BAD0 @ 0x14029BAD0 (sub_14029BAD0.c)
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     sub_1402DE5C0 @ 0x1402DE5C0 (sub_1402DE5C0.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_1403A4DCC @ 0x1403A4DCC (sub_1403A4DCC.c)
 *     sub_1403DCAD0 @ 0x1403DCAD0 (sub_1403DCAD0.c)
 *     sub_140540EA0 @ 0x140540EA0 (sub_140540EA0.c)
 *     sub_1405648E0 @ 0x1405648E0 (sub_1405648E0.c)
 *     sub_140564940 @ 0x140564940 (sub_140564940.c)
 *     sub_1405FD170 @ 0x1405FD170 (sub_1405FD170.c)
 *     sub_14060EDB0 @ 0x14060EDB0 (sub_14060EDB0.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     sub_14068BEAC @ 0x14068BEAC (sub_14068BEAC.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     sub_1406ACB64 @ 0x1406ACB64 (sub_1406ACB64.c)
 *     sub_1406C1BD4 @ 0x1406C1BD4 (sub_1406C1BD4.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406E4AF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406E4C10 (FsRtlMdlReadEx.c)
 *     sub_1406E8220 @ 0x1406E8220 (sub_1406E8220.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_1407839B4 @ 0x1407839B4 (sub_1407839B4.c)
 *     sub_140810B00 @ 0x140810B00 (sub_140810B00.c)
 *     sub_14081AB80 @ 0x14081AB80 (sub_14081AB80.c)
 *     sub_1408296B8 @ 0x1408296B8 (sub_1408296B8.c)
 *     sub_140858D04 @ 0x140858D04 (sub_140858D04.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     sub_1409303C0 @ 0x1409303C0 (sub_1409303C0.c)
 *     sub_140930460 @ 0x140930460 (sub_140930460.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     sub_140958514 @ 0x140958514 (sub_140958514.c)
 *     sub_140997F58 @ 0x140997F58 (sub_140997F58.c)
 *     sub_1409D57BC @ 0x1409D57BC (sub_1409D57BC.c)
 *     sub_1409D5B38 @ 0x1409D5B38 (sub_1409D5B38.c)
 *     sub_140A8D17C @ 0x140A8D17C (sub_140A8D17C.c)
 * Callees:
 *     sub_140348640 @ 0x140348640 (sub_140348640.c)
 *     sub_140A80820 @ 0x140A80820 (sub_140A80820.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( dword_140D06C3C )
    sub_140A80820((ULONG_PTR)Irp);
  else
    sub_140348640((ULONG_PTR)Irp);
}
