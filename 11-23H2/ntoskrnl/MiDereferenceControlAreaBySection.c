/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x14029FB3C
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x14020F0B0 (MmGetImageFileSignatureInformation.c)
 *     MiSectionDelete @ 0x140721DC0 (MiSectionDelete.c)
 *     MiCreateImageOrDataSection @ 0x140723550 (MiCreateImageOrDataSection.c)
 *     MiDereferenceFailedControlArea @ 0x140863620 (MiDereferenceFailedControlArea.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx

  v3 = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 24);
  LOBYTE(v5) = v4;
  *(_QWORD *)(a1 + 48) -= v3;
  return MiCheckControlArea(a1, v5);
}
