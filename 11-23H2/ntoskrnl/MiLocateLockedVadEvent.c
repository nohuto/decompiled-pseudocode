/*
 * XREFs of MiLocateLockedVadEvent @ 0x14030B6B4
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiZeroFault @ 0x1402323F0 (MiZeroFault.c)
 *     MiCheckUserVirtualAddress @ 0x14025B040 (MiCheckUserVirtualAddress.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiComputeVadCharges @ 0x140289CC8 (MiComputeVadCharges.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiFreeVadRange @ 0x140309E30 (MiFreeVadRange.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     MiMarkMdlComplete @ 0x140632CD8 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x14064AEB0 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x140A495FC (MiCopyLargeVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateLockedVadEvent(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; result; result = *(_QWORD *)result )
  {
    if ( (a2 & *(_DWORD *)(result + 64)) != 0 )
      break;
  }
  return result;
}
