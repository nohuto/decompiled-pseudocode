/*
 * XREFs of MiLocateLockedVadEvent @ 0x14030B424
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiZeroFault @ 0x140232320 (MiZeroFault.c)
 *     MiCheckUserVirtualAddress @ 0x14025ADB0 (MiCheckUserVirtualAddress.c)
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285A10 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertVad @ 0x140287C90 (MiInsertVad.c)
 *     MiComputeVadCharges @ 0x140289A38 (MiComputeVadCharges.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiFreeVadRange @ 0x140309BA0 (MiFreeVadRange.c)
 *     MiLocateVadEvent @ 0x14030B40C (MiLocateVadEvent.c)
 *     MiMarkMdlComplete @ 0x140632788 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x14064A960 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x140A4934C (MiCopyLargeVad.c)
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
