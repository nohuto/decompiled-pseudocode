/*
 * XREFs of MiOffsetToProtos @ 0x1402887D0
 * Callers:
 *     MiReferenceDataSubsections @ 0x140211CA8 (MiReferenceDataSubsections.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14029F8C0 (MmMapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiSystemImageHasPrivateFixups @ 0x14033E010 (MiSystemImageHasPrivateFixups.c)
 *     MiDereferenceDataSubsections @ 0x14066B658 (MiDereferenceDataSubsections.c)
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x1406A9BD0 (MiScanRelocationPage.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 *     MiAddMappedPtes @ 0x1406AD7D0 (MiAddMappedPtes.c)
 *     MiPfPrepareReadList @ 0x1406F64B0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiLocatePagefileSubsection @ 0x140273AD0 (MiLocatePagefileSubsection.c)
 *     MiGetControlAreaPtes @ 0x1402888A0 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140289550 (MiLocateSubsectionNode.c)
 */

unsigned int *__fastcall MiOffsetToProtos(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 ControlAreaPtes; // rax
  unsigned __int64 v7; // rcx
  __int64 SubsectionNode; // rbx
  unsigned __int64 i; // rax

  *a3 = a2 >> 12;
  ControlAreaPtes = MiGetControlAreaPtes();
  v7 = *a3;
  if ( *a3 >= ControlAreaPtes )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return MiLocatePagefileSubsection((unsigned int *)(a1 + 128), a3);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    SubsectionNode = a1 + 128;
    for ( i = *(unsigned int *)(SubsectionNode + 44); v7 >= i; i = *(unsigned int *)(SubsectionNode + 44) )
    {
      v7 -= i;
      *a3 = v7;
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
    }
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, a2, 0LL);
    *a3 -= *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
  }
  return (unsigned int *)SubsectionNode;
}
