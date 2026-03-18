/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x14071B5A0
 * Callers:
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x1406E8680 (CmpInvalidateSubtreeWorker.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14071B4A0 (CmpRebuildKcbCacheFromNode.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409237B4 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int16 __fastcall CmpCleanUpSubKeyInfo(__int64 a1, char a2)
{
  int v3; // eax
  __int16 result; // ax
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 7) != 0 )
  {
    if ( (v3 & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    LOWORD(v3) = *(_WORD *)(a1 + 8) & 0xFFF8;
  }
  result = v3 | 0x40;
  *(_WORD *)(a1 + 8) = result;
  if ( a2 )
  {
    v6 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v6 != -1 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v7, v6, &v10);
      else
        CellFlat = HvpGetCellPaged(v7);
      *(_WORD *)(a1 + 8) &= ~0x40u;
      v9 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(v9, &v10);
      else
        return HvpReleaseCellPaged(v9, &v10);
    }
  }
  return result;
}
