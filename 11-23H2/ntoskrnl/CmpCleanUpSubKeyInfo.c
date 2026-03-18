/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x14076A9C4
 * Callers:
 *     CmpCreateTombstone @ 0x140616E4C (CmpCreateTombstone.c)
 *     CmpInvalidateSubtreeWorker @ 0x140682700 (CmpInvalidateSubtreeWorker.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14076A8BC (CmpRebuildKcbCacheFromNode.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A28168 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0150 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FD9F0 (HvpGetCellFlat.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCleanUpSubKeyInfo(__int64 a1, char a2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rcx
  __int64 CellFlat; // rax
  __int64 v8; // rcx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
  result = *(unsigned int *)(a1 + 8);
  if ( (result & 7) != 0 )
  {
    if ( (result & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    result = 65528LL;
    *(_WORD *)(a1 + 8) &= 0xFFF8u;
  }
  *(_WORD *)(a1 + 8) |= 0x40u;
  if ( a2 )
  {
    v5 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v5 != -1 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v6, v5);
      else
        CellFlat = HvpGetCellPaged(v6, v5, &v9);
      *(_WORD *)(a1 + 8) &= ~0x40u;
      v8 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(v8, &v9);
      else
        return HvpReleaseCellPaged(v8, &v9);
    }
  }
  return result;
}
