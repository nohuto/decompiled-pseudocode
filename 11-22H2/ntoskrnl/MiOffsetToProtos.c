/*
 * XREFs of MiOffsetToProtos @ 0x140288420
 * Callers:
 *     MiReferenceDataSubsections @ 0x140211CC8 (MiReferenceDataSubsections.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14029F510 (MmMapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiSystemImageHasPrivateFixups @ 0x14033DB80 (MiSystemImageHasPrivateFixups.c)
 *     MiDereferenceDataSubsections @ 0x14066B178 (MiDereferenceDataSubsections.c)
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x1406A9BD0 (MiScanRelocationPage.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 *     MiAddMappedPtes @ 0x1406AD7A0 (MiAddMappedPtes.c)
 *     MiPfPrepareReadList @ 0x1406F6350 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiLocatePagefileSubsection @ 0x140273720 (MiLocatePagefileSubsection.c)
 *     MiGetControlAreaPtes @ 0x1402884F0 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1402891A0 (MiLocateSubsectionNode.c)
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
