/*
 * XREFs of ViFlushDoubleBuffer @ 0x140AC8904
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140AC5E00 (VfFlushAdapterBuffers.c)
 *     VfPutScatterGatherList @ 0x140AC75F0 (VfPutScatterGatherList.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1405CE2D4 (VfUtilDbgPrint.c)
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     MmMapLockedPages @ 0x14061E8E0 (MmMapLockedPages.c)
 *     ViCopyBackModifiedBuffer @ 0x140AC8694 (ViCopyBackModifiedBuffer.c)
 *     ViFindMappedRegisterInFile @ 0x140AC88CC (ViFindMappedRegisterInFile.c)
 *     ViFreeMapRegistersToFile @ 0x140AC8C90 (ViFreeMapRegistersToFile.c)
 *     ViGetMdlBufferSa @ 0x140AC9074 (ViGetMdlBufferSa.c)
 *     ViHalPreprocessOptions @ 0x140AC9324 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViFlushDoubleBuffer(_QWORD *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  ULONG_PTR v6; // rbx
  __int64 MdlBufferSa; // rax
  ULONG_PTR v10; // rbp
  __int64 v12; // rcx
  ULONG_PTR v13; // rdi
  char *v14; // r15
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rcx
  ULONG_PTR v18[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = a4;
  LODWORD(v18[0]) = 0;
  MdlBufferSa = ViGetMdlBufferSa(a2, a3);
  v10 = MdlBufferSa;
  if ( !MdlBufferSa )
    return 0LL;
  if ( !ViFindMappedRegisterInFile((__int64)a1, MdlBufferSa, v18) )
  {
    ViHalPreprocessOptions(byte_140C0DE00, "Cannot flush buffers that aren't mapped (Addr %p).", (const void *)0x16);
    VfReportIssueWithOptions(0xE6u, 0x16uLL, v10, (ULONG_PTR)a1, 0LL, byte_140C0DE00);
    return 0LL;
  }
  v12 = a1[7];
  v13 = (unsigned int)(LODWORD(v18[0]) << 12) + (v10 & 0xFFF);
  v14 = (char *)(v13 + a1[8]);
  v18[0] = v13;
  if ( (*(_BYTE *)(v12 + 10) & 5) != 0 )
    v15 = *(_QWORD *)(v12 + 24);
  else
    LODWORD(v15) = (unsigned int)MmMapLockedPages((PMDL)v12, 0);
  v16 = v15 + *(_DWORD *)(a1[7] + 40LL) - (_DWORD)v14;
  if ( (unsigned int)v6 > v16 )
  {
    ViHalPreprocessOptions(
      byte_140C0DDFC,
      "FLUSH: Can only flush %x bytes to end of map register file (%x attempted)",
      0x10000000,
      1);
    VfReportIssueWithOptions(0xE6u, 0LL, 1uLL, v16, v6, byte_140C0DDFC);
    v13 = v18[0];
    LODWORD(v6) = v16;
  }
  if ( !a5 )
  {
    v17 = a1[9];
    if ( v17 )
      ViCopyBackModifiedBuffer(a2, a3, v14, (char *)(v17 + v13), (unsigned int)v6);
  }
  if ( !(unsigned int)ViFreeMapRegistersToFile(a1, v10, (unsigned int)v6) )
    VfUtilDbgPrint("Flushing too many map registers\n");
  return 1LL;
}
