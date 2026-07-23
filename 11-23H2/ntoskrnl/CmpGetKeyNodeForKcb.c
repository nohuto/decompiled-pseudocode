/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x140710874
 * Callers:
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmpAssignKeySecurity @ 0x1408585CC (CmpAssignKeySecurity.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13E14 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A14150 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A166C4 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D234C (CmpUpdateKeyNodeAccessBits.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x140A16CA4 (CmpKeyNodeNeedsAccessBitUpdate.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, unsigned int *a2, char a3)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v9; // rcx
  __int64 v10; // rdi
  __int64 v12; // rcx
  signed __int64 *v13; // rdi
  unsigned __int64 v14; // rbp
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // rdx
  __int64 CellPaged; // rax
  __int64 v18; // rbx

  v5 = *(unsigned int *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v5);
  else
    CellFlat = HvpGetCellPaged(v7, v5, a2);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = CellFlat;
  if ( a3 )
  {
    CmpUpdateKeyNodeAccessBits(v9, CellFlat, *(_DWORD *)(a1 + 40));
  }
  else if ( (unsigned __int8)CmpKeyNodeNeedsAccessBitUpdate(v9, CellFlat) )
  {
    if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v12, a2);
    else
      HvpReleaseCellPaged(v12, a2);
    v13 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 72LL);
    v14 = KeAbPreAcquire((__int64)v13, 0LL);
    if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v13, 0LL, v14, (__int64)v13);
    if ( v14 )
      *(_BYTE *)(v14 + 18) = 1;
    v15 = *(_QWORD *)(a1 + 32);
    v16 = *(unsigned int *)(a1 + 40);
    if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v15, v16);
    else
      CellPaged = HvpGetCellPaged(v15, v16, a2);
    v10 = CellPaged;
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(a1 + 32), CellPaged, *(_DWORD *)(a1 + 40));
    v18 = *(_QWORD *)(a1 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v18 + 72));
    KeAbPostRelease(v18 + 72);
  }
  return v10;
}
