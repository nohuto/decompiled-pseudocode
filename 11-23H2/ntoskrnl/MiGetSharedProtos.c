/*
 * XREFs of MiGetSharedProtos @ 0x140369D8C
 * Callers:
 *     MiIdentifyPfn @ 0x14023E4C0 (MiIdentifyPfn.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140272E90 (MiGetProtoPteAddress.c)
 *     MiComputeImagePteIndex @ 0x1402A2644 (MiComputeImagePteIndex.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiStartingOffset @ 0x1402E2310 (MiStartingOffset.c)
 *     MiGetImageProtoProtection @ 0x1403568BC (MiGetImageProtoProtection.c)
 *     MiFaultGetFileExtents @ 0x140645E84 (MiFaultGetFileExtents.c)
 *     MiMakePerSessionProtoPte @ 0x1406652B4 (MiMakePerSessionProtoPte.c)
 *     MiAddMappedPtes @ 0x1406AD7A0 (MiAddMappedPtes.c)
 *     MiPfPrepareSequentialReadList @ 0x1407446E0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1407460A0 (MiPfAllocateMdls.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x140369E1C (MiGetSharedProtosAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetSharedProtos(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 SharedProtosAtDpcLevel; // rsi
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v7) = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  SharedProtosAtDpcLevel = MiGetSharedProtosAtDpcLevel(a1, a2, a3);
  if ( KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return SharedProtosAtDpcLevel;
}
