/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1406ACB70
 * Callers:
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x1406AB9A4 (MiParseComAndCetHeaders.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 *     MiApplyImageHotPatchRequest @ 0x140A355E0 (MiApplyImageHotPatchRequest.c)
 *     MiOpenHotPatchFile @ 0x140A3A350 (MiOpenHotPatchFile.c)
 *     MiCreateSessionDriverProtos @ 0x140A45DD0 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140625CFC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x14071EFC0 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
  {
    MiUnmapViewOfSection((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)(a1 + 32));
  }
  else
  {
    MiRemoveFromSystemSpace(*(_QWORD *)a1, 1);
  }
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiReturnCrossPartitionControlAreaCharges(v2);
}
