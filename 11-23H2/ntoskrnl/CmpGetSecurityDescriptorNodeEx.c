/*
 * XREFs of CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140680518 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x1407DD858 (CmpCopyKeyPartial.c)
 *     CmpAssignKeySecurity @ 0x14085838C (CmpAssignKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x14087448C (CmpCreateHiveRootCell.c)
 *     CmpAssignSecurityDescriptor @ 0x1408AB952 (CmpAssignSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B38C (CmpCopySaclToVirtualKey.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A210D8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncKeyValues @ 0x140A22DD4 (CmpSyncKeyValues.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A29814 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     RtlLengthSecurityDescriptorStrict @ 0x140297514 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404199A0 (CmpKeySecurityIncrementReferenceCount.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D231C (CmpUpdateKeyNodeAccessBits.c)
 *     HvpGetCellPaged @ 0x1406E0150 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvAllocateCell @ 0x14070A3C8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14070ABE0 (HvFreeCell.c)
 *     CmpFindMatchingDescriptorCell @ 0x14070D8EC (CmpFindMatchingDescriptorCell.c)
 *     HvpMarkCellDirty @ 0x140746FA0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 *     CmpInsertSecurityCellList @ 0x1407DE120 (CmpInsertSecurityCellList.c)
 *     HvpGetCellFlat @ 0x1407FD9F0 (HvpGetCellFlat.c)
 *     HvpGetBinContextInitialize @ 0x140AF5200 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNodeEx(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  unsigned int v8; // esi
  ULONG_PTR v12; // rdx
  int Cell; // edi
  const void *v14; // r14
  unsigned int v15; // r15d
  __int64 CellFlat; // rax
  _WORD *v17; // r14
  int v18; // eax
  unsigned int v19; // eax
  _DWORD *v20; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v24; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v24 = 0LL;
  v8 = -1;
  LODWORD(BugCheckParameter3a) = -1;
  v23 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v23 + 4);
  Cell = HvpMarkCellDirty(BugCheckParameter3, v12);
  if ( Cell < 0 )
    return (unsigned int)Cell;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter3, a3, a2);
  v14 = Src;
  if ( (unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter3, Src, a4, &BugCheckParameter4, 0LL) )
  {
    v15 = BugCheckParameter4;
    Cell = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)BugCheckParameter4);
    if ( Cell < 0 )
      return (unsigned int)Cell;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v15);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v17 = (_WORD *)CellFlat;
    Cell = CmpKeySecurityIncrementReferenceCount(CellFlat, BugCheckParameter3, v15, 0);
    if ( Cell < 0 )
      goto LABEL_21;
    *a7 = v15;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->PreviousMode
    && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0
    && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
  {
    return (unsigned int)-1073741790;
  }
  v18 = RtlLengthSecurityDescriptorStrict();
  Cell = HvAllocateCell(
           BugCheckParameter3,
           v18 + 20,
           a4,
           (unsigned int)&BugCheckParameter3a,
           (__int64)&v24,
           (__int64)&v23);
  if ( Cell < 0 )
  {
    v8 = BugCheckParameter3a;
    v17 = v24;
LABEL_21:
    if ( v17 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v23);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v23);
    }
    goto LABEL_25;
  }
  v19 = RtlLengthSecurityDescriptorStrict();
  v20 = v24;
  *v24 = 27507;
  v20[3] = 1;
  v20[4] = v19;
  memmove(v20 + 5, v14, v19);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v23);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v23);
  v8 = BugCheckParameter3a;
  v17 = 0LL;
  Cell = CmpInsertSecurityCellList(BugCheckParameter3, a2, (unsigned int)BugCheckParameter3a);
  if ( Cell >= 0 )
  {
    *a7 = v8;
    v8 = -1;
LABEL_9:
    Cell = 0;
    goto LABEL_21;
  }
LABEL_25:
  if ( v8 != -1 )
    HvFreeCell(BugCheckParameter3, v8);
  return (unsigned int)Cell;
}
