/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1406F39F8
 * Callers:
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1406B79C8 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
 *     MiParseComAndCetHeaders @ 0x1407E4D40 (MiParseComAndCetHeaders.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiOpenHotPatchFile @ 0x14097638C (MiOpenHotPatchFile.c)
 *     MiCreateSessionDriverProtos @ 0x140981070 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(ULONG_PTR *a1)
{
  __int64 v2; // rcx

  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapViewOfSection((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
    KiUnstackDetachProcess((__int64)(a1 + 4), 0LL);
  }
  else
  {
    MiRemoveFromSystemSpace(*a1, 1);
  }
  v2 = a1[1];
  if ( v2 )
    MiReturnCrossPartitionControlAreaCharges(v2);
}
